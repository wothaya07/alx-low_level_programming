#include "main.h"

/**
 * time_table - rints the 9 times table, starting with 0
 * Return: void
 */
void times_table(void)
{
int m, n, o, a, b;
for (m =0; m <=9; m++)
{
for (n =0; n <=9; n++)
{
o = m * n;
if (o > 9)
{
a = o % 10;
b = (o - a) / 10;
_putchar(44);
_putchar(32);
_putchar(b + '0');
_putchar(a + '0');
}
else
{
if (n != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar(o + '0');
}
}
_putchar('\n');
}
}

