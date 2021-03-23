#include <stdio.h>
#include <stdlib.h>

/* crear la estructura del nodo */
typedef struct node
{
	int number;
	struct node *next;
}node;

int main(void)
{
	/* asi se crea el nodo inicializador, o el head como se le conoce */
	node *list = NULL;
	/* asi se crea el primer nodo */

	node *n = malloc(sizeof(node));
	if (n == NULL)
	{
		return (1);
	}
	n->number = 33;
	list = n;
	
	n = malloc(sizeof(node));
	if (n == NULL)
	{
		free(list);
		return (1);
	}
	n->number = 1;
	n->next = NULL;
	list->next = n;
	/* se crea un segundo nodo */
	n = malloc(sizeof(node));
	if (n == NULL)
	{
		free(list->next);
		free(list);
		return (1);
	}
	n->number = 2;
	n->next = NULL;
	list->next->next = n;
	/* se crea un tercer nodo */
	n = malloc(sizeof(node));
	if (n == NULL)
	{
		free(list->next->next);
		free(list->next);
		free(list);
		return (1);
	}
	n->number = 3;
	n->next = NULL;
	list->next->next->next = n;

	/* este es mi intento de crear un 4 nodo al final */

	n = malloc(sizeof(node));
	if (n == NULL)
	{
		free(list->next->next->next);
		free(list->next->next);
		free(list->next);
		free(list);
		return (1);
	}
	n->number = 5;
	n->next = NULL;
	list->next->next->next->next = n;


	
	/* este es mi intento de crear un 6 nodo y que sea antepenultimo */




	
	/* another way to conect a list of nodes with a loop */
	
	/* la manera en que se usa un loop para nodos es la sigueinte: */
	/* deme un puntero temporal al principio de la lista */
	/* y mientras que tmp tenga una direccion valida */
	/* actualiza tmp para que vaya a la direccion que diga next */
	for (node *tmp = list; tmp != NULL; tmp = tmp->next)
	{
		/* dejame avanzar al nodo e imprime el valor que guarde number */
		printf("%i\n", tmp->number);
	}

	/* a way to free this lists of nodes is */
	while (list != NULL)
	{
		/* suponiendo que exista 1 o mas nodos */
		/* todavia no es seguro liberar el primer nodo de la lista */
		/* porque el nodo tiene el puntero al siguiente nodo */
		/* asi que si lo libero antes de tiempo */
		/* perdere las direcciones de los nodos posteriores al primero */
		/* para hacerlo bien, crea una variable temporal */
		/* pero en vez de que apunte a la lista en si...*/
		/* o sea, al primer nodo, apunte al nodo que le sigue */
		/* y esto seguira hasta acabar todos los nodos */
		/* como si fuera un pacman comiendo los puntos */
		node *tmp = list->next;
		free(list);
		list = tmp;
	}
}
