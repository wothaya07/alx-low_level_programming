#include <stdio.h>
/*
 * Main function prints all alphabets except q and e
 * the function is the entry point of the program
 * it initializes the variables and structures and uses a loop to perform the main process of the code 
 * Returns 0 :success
 */
int main(void)
{
char alph;
for (alph ='a'; alph <= 'z'; alph++)
{
if(alph != 'q' && alph != 'e')
{
putchar(alph);
}
}
putchar('\n');
return (0);
}

