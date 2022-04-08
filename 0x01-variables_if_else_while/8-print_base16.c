#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
  int a = '0'; 
  int ch = 'a';
  for (int i = 0; i < 10; i++)
  {
      putchar(a);
      a++;
  }
  for (int i = 0; i < 6; i++)
  {
      putchar(ch);
      ch++;
  }
  putchar('\n');
	return (0);
}