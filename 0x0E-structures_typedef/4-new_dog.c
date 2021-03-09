#include "dog.h"
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 * new_dog - check the code for Holberton School students.
 *@name: char
 *@age: float
 *@owner: char
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nuevo;

	/* definir nueva estructura */
	/* primero, hacer espacio en la memoria */
	nuevo = malloc(sizeof(dog_t));
	if (nuevo == NULL)
	{
		free(nuevo);
		return (NULL);
	}
	/* segundo, definir las propiedades de la nueva estructura*/
	nuevo->name = NULL;
	nuevo->age = age;
	nuevo->owner = NULL;
	/* tercero, hacer memoria para esas nuevas propiedades */
	nuevo->name = malloc((_strlen(name) + 1) * sizeof(nuevo->name));
	nuevo->owner = malloc((_strlen(owner) + 1) * sizeof(nuevo->owner));
	/* cuarto, comprobar que los strings no esten vacios */
	if (nuevo->name == NULL || nuevo->owner == NULL)
	{
		free(nuevo->name);
		free(nuevo->owner);
		free(nuevo);
		return (NULL);
	}
	/* quinto, copiar el contenido de los strings a lo nuevo*/
	nuevo->name = _strcpy(nuevo->name, name);
	nuevo->owner = _strcpy(nuevo->owner, owner);

	return (nuevo);
}
/**
 * _strlen - returns the length of a string
 * @s: get a pointer
 * Return: return the string
 */
int _strlen(char *s)
{
	unsigned int c;

	for (c = 0; s[c]; c++)
		;

	return (c);
	
}
/**
 * _strcpy - copy the string in src to dest
 *
 * @dest: destiny char
 * @src: source char
 * Return: copy char in destiny
 */
char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index] != '\0'; index++)
		dest[index] = src[index];
	dest[index] = '\0';
	return (dest);
	
}
