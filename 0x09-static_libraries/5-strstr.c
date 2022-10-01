#include "main.h"
#include <string.h>
/**
* _strstr - locates a substring
*
* @haystack: string to search
* @needle: substring to find
*
* Return: pointer to the beginning of the located substring, or NULL if
* the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
int i;
int s = 0;
while (needle[s] != '\0')
s++;
while (*haystack)
{
for (i = 0; needle[i]; i++)
{
if (haystack[i] != needle[i])
break;
}
if (i != s)
haystack++;
else
return (haystack);
}
return (NULL);
}

