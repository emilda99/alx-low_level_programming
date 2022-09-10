#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - print if the number is positive, zero or negative 
*
*Description: using main function
*this program prints "Programming is positive,negative or zero"
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

 
   
