#include <stdio.h>
  2 
  3 /**
  4  * main - prints all possible different combinations of three digit    s
  5  * Return: Always 0 (Success)
  6  */
  7 int main(void)
  8 {
  9         int n, m, l;
 10 
 11         for (n = 48; n < 58; n++)
 12         {
 13                 for (m = 49; m < 58; m++)
 14                 {
 15                         for (l = 50; l < 58; l++)
 16                         {
 17                                 if (l > m && m > n)
 18                                 {
 19                                         putchar(n);
 20                                         putchar(m);
 21                                         putchar(l);
 22                                         if (n != 55 || m != 56)
 23                                         {
 24                                                 putchar(',');
 25                                                 putchar(' ');
 26                                         }
 27                                 }
 28                         }
 29                 }
 30         }
 31         putchar('\n');
 32         return (0);
 33 }
 34 
~          
