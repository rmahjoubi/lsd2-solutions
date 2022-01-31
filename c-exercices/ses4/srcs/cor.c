#include "../includes/inc.h"

double PolyLagrange(double *X, double x, int i, int lX)
{
	double result;
	int j;

	j = 0;
	result = 1;
	while (j < lX)
	{
		if (j != i)
			result *= (x - X[j])/(X[i] - X[j]);
		j++;
	}
	return result;
}

double InterpLagrange(double *X, double(*f)(double), double x, int lX)
{
	double result;
	int j;

	result = 0;
	j = 0;
	while (j < lX)
	{
		result += f(X[j]) * PolyLagrange(X, x, j, lX);
		j++;
	}
	return result;
}

void plot(double(*f)(double), double a, double b, int n, int p)
{
	int j;
	double y0;
	double y1;
	double x;
	FILE *fp0, *fp1;
	double *X;

	X = (double*)malloc(sizeof(double) * n);
	j = 0;
	fp0 = fopen("f.txt", "w");
	fp1 = fopen("interpf.txt", "w");
	while (j < n)
	{
		X[j] = a + (b - a) * j/n;
		j++;
	}
	j = 0;
	while (j < p)
	{
		x = a + (b - a) * j/p;
		y0 = f(x);
		y1 = InterpLagrange(X, f, x, n);
		fprintf(fp0, "%f\t %f\n", x, y0);
		fprintf(fp1, "%f\t %f\n", x, y1);
		j++;
	}
}








