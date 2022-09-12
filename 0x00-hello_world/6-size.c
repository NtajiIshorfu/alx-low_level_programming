#include <stdio.h>
/**
 * main - void of any argument
 *
 * Description: printing out sizes
 * Return: is 0
*/
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;

printf("size of a char: %lu. \n", (unsigned long)sizeof(d));
printf("size of an integer: %lu. \n", (unsigned long)sizeof(f));
printf("size of a: %lu. \n", (unsigned long)sizeof(a));
printf("size of b: %lu. \n", (unsigned long)sizeof(b));
printf("size of c: %lu. \n", (unsigned long)sizeof(c));
return (0);
}
