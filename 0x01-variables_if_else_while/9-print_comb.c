#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
  int a;
  int b;

	for (a = '0'; a <= '9'; a++) 
	{
		for (b = '0'; b <= '9'; b++)
		{
			putchar(a);
			putchar(b);
			if (!(a == '9' && b == '9')) 
			{
				putchar(',');
				putchar(' ');
			}
		}
  }
  putchar('\n');
	return (0);
}