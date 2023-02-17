#include <stdio.h>
/**
 * main -a programm that prints the size of data types
 *
 * Return: (0) (success)
 */

int main(void)
{
char a;
short b;
int c;
long d;
long long e;
float f;
double g;
long double h;

printf("size of a char: %lu byte(s)\n", (unsigned long) sizeof(a));
printf("size of a short: %lu byte(s)\n", (unsigned long) sizeof(b));
printf("size of an int: %lu byte(s)\n", (unsigned long) sizeof(c));
printf("size of a long: %lu byte(s)\n", (unsigned long) sizeof(d));
printf("size of a long long: %lu byte(s)\n", (unsigned long) sizeof(e));
printf("size of a float: %lu byte(s)\n", (unsigned long) sizeof(f));
printf("size of a double: %lu byte(s)\n", (unsigned long) sizeof(g));
printf("size of a long double: %lu byte(s)\n", (unsigned long) sizeof(h));

return (0);
}
