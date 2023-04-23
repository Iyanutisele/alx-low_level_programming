#include <stdio.h>
/**
 *main - Entry point
 *Description: 'prints all possible different combinations of three digits'
 *Return: Always 0
 */
int main(void)
{
int n, m, s;

for (n = '0'; n <= '9'; n++)
{

for (m = n + 1; m <= '9'; m++)
{

for (s = m + 1; s <= '9'; s++)
{
if ((m != n) != s)
{
putchar(n);
putchar(m);
putchar(s);
if (n == '7' && m == '8')
continue;
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
