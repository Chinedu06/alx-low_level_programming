#Learning Objectives
#At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
#
#General
#What are pointers to pointers and how to use them
#What are multidimensional arrays and how to use them
#What are the most common C standard library functions to manipulate strings
#Write a function that locates a character in a string.
#
#Prototype: char *_strchr(char *s, char c);
#Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
#FYI: The standard library provides a similar function: strchr. Run man strchr to learn more.
#
#Write a function that searches a string for any of a set of bytes.
#
#Prototype: char *_strpbrk(char *s, char *accept);
#The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept
#Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found
#FYI: The standard library provides a similar function: strpbrk. Run man strpbrk to learn more.
