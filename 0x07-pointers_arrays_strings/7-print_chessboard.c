#include "main.h"
/**
* print_chessboard - prints the chessboard
*
* @a: the row of the array
*
* Return: nothing
*/
void print_chessboard(char (*a)[8])
{
int i, n;
for (i = 0; i < 8; i++)
{
for (n = 0; j < 8; n++)
_putchar(a[i][n]);
_putchar('\n');
}
}
