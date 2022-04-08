#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{ 
    int a = '0';
  for (int i = 0; i < 10; i++)
  {
      putchar(a);
      a++;
  }
  putchar('\n');
	return (0);
}