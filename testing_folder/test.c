#include <stdio.h>
#include "main.h"

int main(void)
{
	int s = -345;
	int re;

	re = 3 + print_integer(s);
	printf("\n%d\n", re);
	return (0);
}
