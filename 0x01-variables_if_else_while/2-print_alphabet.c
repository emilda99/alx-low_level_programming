#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - function to print alphabet
*Return:return 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
putchar ('\n');
return(0);
}
