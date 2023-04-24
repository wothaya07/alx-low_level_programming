#include <stdio.h>
/*
 *main program is to print lowercase
 * then print uppercase in a new line
 */
int main(void)
{
char alph;
/*lowercase alphabet */
for (alph = 'a'; alph <= 'z'; alph++)
{
putchar(alph);
}
/*uppecase alphabet*/
for (alph = 'A'; alph <= 'Z'; alph++)
{
putchar(alph);
}
/*new line*/
putchar('\n');
return (0);
}
