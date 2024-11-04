#include <stdio.h>

int a(void)
{
	static int b = 0;
	b++;
	return(b);
}

int main()

{for (int i = 0; i < 15; i++)ft_printf("%d\n", a());}