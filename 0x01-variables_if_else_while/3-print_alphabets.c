#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
  char ch = 'a'; 
  char CH = 'A';
  for (int i = 0; i < 26; i++)
  {
      putchar(ch);
      ch++;
  }
   for (int i = 0; i < 26; i++)
  {
      putchar(CH);
      CH++;
  }
  putchar('\n');
	return (0);
}