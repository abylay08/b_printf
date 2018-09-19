#include <stdio.h>
#include "../includes/b_printf.h"

int main()
{
	int i = -42;
	int n1;
	int n2;
	n1 = b_printf("BOMBALEYLO U: %u P: %p O: %o X: %x D: %d I: %i C: %c S: %s\n", i, &i, i, i, i, i, 'b', "HALLO");
	printf("%d\n", n1);
	n2 = printf("BOMBALEYLO U: %u P: %p O: %o X: %x D: %d I: %i C: %c S: %s\n", i, &i, i, i, i, i, 'b', "HALLO");
	printf("%d\n", n2);
	b_printf("%      s", "HALO");
  printf("\n");
  b_printf("%      i", 65);
  printf("\n");
  b_printf("%     d", 65);
  printf("\n");
  b_printf("%     p", &i);
  b_printf("%u", -356);
  printf("\n - \n");
  printf("%u", -356);
	return 0;
}