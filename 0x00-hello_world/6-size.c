#include <stdio.h>
/**
 * main -prints size of various outputs
 * Return: 0 (Success)
 */
int main(void)
{
int i;
double d;
char c;
float f;
printf("size of an int is :%lu.\n", (unsigned long)sizeof(i));
printf("size of a double is :%lu.\n", (unsigned long)sizeof(d));
printf("size of a char is :%lu.\n", (unsigned long)sizeof(c));
printf("size of an float is :%lu.\n", (unsigned long)sizeof(f));
return(0);
}
