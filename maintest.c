# include "printf.h"

int main ()
{
	c a, *b;

	int o, i = 0;

	unsigned int zeta;

	a = '2';

	b = "0123";

	o = 44;
	zeta = 2147483700;

	ft_printf("hello %c world %s , my world %x , za waridooo %u \n",a, b, o, zeta);

	write (1, &b[i], 1);
}
