#include "main.h"
#include <stdio.h>
/**
*_isupper - a function that checks for uppercase character
*@c: input
*Return: 1 if c is uppercase, 0 otherwise
*/
int _isupper(int c)
{int main(void)
  {
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
  }
