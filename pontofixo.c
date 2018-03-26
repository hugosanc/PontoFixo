#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int SolucaoPontoFixo( double *x0, double prec)
{
	double x, dx, cont =0;

	do
	{	x = cos(*x0);
		dx = fabs(x- *x0);
		*x0 = x;
		printf("%g\n", *x0);
		cont++;
	}while(dx > prec);
	return cont;
}

void main( int argc, char **argv)
{
	double x, x0, dx, prec;

	x0 = atof(argv[1]);
	prec = atof(argv[2]);
	printf("\nRaiz - %.10g em %d iterações.\n", x0, SolucaoPontoFixo(&x0, prec));
}

