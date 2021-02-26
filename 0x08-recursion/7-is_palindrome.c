#include "holberton.h"

/**
 * _strlen_rec - Return the length of a string
 * @s: String
 * Return: Lengt
 */
int _strlen_rec(char *s)
{
	int len;

	if (*s != '\0')
	{
		len = _strlen_rec(s + 1);
		return (len + 1);
	}
	else
	{
		return (0);
	}
}

/**
 * compare - Compare a string and its reverse.
 * @s: String.
 * @rev: Reverse string.
 * Return: 1 if the strings are the same and 0 if not.
 */
int compare(char *s, char *rev)
{
	if (*s == '\0')
		return (1);
	if (*s == *rev)
		return (compare(s + 1, rev - 1));
	else
		return (0);
}

/**
 * is_palindrome - Identify if a string is a palindrome.
 * @s: String.
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int len;
	char *rev = 0;

	len = _strlen_rec(s);

	rev = s + len - 1;

	return (compare(s, rev));
}
