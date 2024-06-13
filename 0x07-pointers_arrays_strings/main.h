#ifndef MAIN_H
#define MAIN_H

#define NULL ((void *)0)

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area
 * @b: value to be filled
 * @n: number of bytes to be filled
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - copies memory area
 * @dest: pointer to the destination array where the content is to be copied
 * @src: pointer to the source of data to be copied
 * @n: number of bytes to copy
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to search
 * @c: character to locate
 *
 * Return: a pointer to the 1st occurrence of the char c in the string s,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c);

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to be searched
 * @accept: pointer to the string containing the characters to match
 *
 * Return:initial segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to the string to be searched
 * @accept: pointer to the string containing the characters to match
 *
 * Return: byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept);

/**
 * _strstr - locates a substring
 * @haystack: pointer to the string to search in
 * @needle: pointer to the substring to search for
 *
 * Return: a pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle);

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to an 8x8 array of characters representing the chessboard
 */
void print_chessboard(char (*a)[8]);

/**
 * print_diagsums-sum of the diagonals of a square matrix of int
 * @a: pointer to the square matrix of integers
 * @size: size of the square matrix
 */
void print_diagsums(int *a, int size);

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to a pointer to char (double pointer)
 * @to: pointer to char (string) to set *s to
 *
 * Description: This function sets the value of `*s` to point to the same
 *              location as `to`.
 */

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to pointer to set
 * @to: Pointer to set `s` to
 */
void set_string(char **s, char *to)
{
    *s = to;
}
int _putchar(char c);

#endif /* MAIN_H */

