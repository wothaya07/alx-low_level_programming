#include <stdio.h>
/**
 * main -prints size of various outputs
 * Return: 0 (Success)
 */
int main(void)
{
int i;
long int li;
long long int lli;
char c;
float f;
printf("size of an char is :%lu bytes(s)\n", (unsigned long)sizeof(c));
printf("size of an int is :%lu bytes(s)\n", (unsigned long)sizeof(i));
printf("size of a long int is :%lu bytes(s)\n", (unsigned long)sizeof(li));
printf("size of a long long int is :%lu bytes(s)\n", sizeof(lli));
printf("size of an float is :%lu bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}
