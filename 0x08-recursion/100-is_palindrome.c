#include "main.h"

int evaluate_palindrome(char *s, int start, int end);
int _strlen_recursion(char *s);

/**
  * is_palindrome - Check if a string is a palindrome.
  * @s: The string to be checked.
  *
  * Return: 1 if the string is a palindrome, 0 otherwise.
  */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);

	return (evaluate_palindrome(s, 0, _strlen_recursion(s) - 1));
}

/**
  * evaluate_palindrome - Check if a string is a palindrome.
  * @s: The string to be checked.
  * @start: The starting index of the substring.
  * @end: The ending index of the substring.
  *
  * Return: 1 if the string is a palindrome, 0 otherwise.
  */
int evaluate_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (evaluate_palindrome(s, start + 1, end - 1));
}

/**
  * _strlen_recursion - Get the length of a string.
  * @s: The string to get the length of.
  *
  * Return: The length of the string.
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}
