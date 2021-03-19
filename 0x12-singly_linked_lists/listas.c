#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
	char *nombre;
	struct nodo *next;
}libro;

libro *listalibro(libro *lista){
	lista = NULL;
	return lista;
}

libro *agregarlibro(libro *lista, char *nombre){
	libro *nuevolibro, *temp;
	nuevolibro = (libro*)malloc(sizeof(libro));
	nuevolibro->nombre = nombre;
	nuevolibro->next = NULL;

	if (lista == NULL)
	{
		lista = nuevolibro;
	}
	else
	{
		temp = lista;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = nuevolibro;
	}
	return (lista);
}

int main(void){
	libro *lista = listalibro(lista);
	lista = agregarlibro(lista, "html5 avanzado");
	lista = agregarlibro(lista, "css avanzado");
	while (lista != NULL)
	{
		printf("%s\n", lista->nombre);
		lista = lista->next;
	}
	printf("%p\n", lista);
	return (0);
}
