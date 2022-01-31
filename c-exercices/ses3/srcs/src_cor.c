#include "../includes/incs_cor.h"

float f(float x)
{
	return x*x - 2;
}

float g(float x)
{
	return 2 * x;
}

float f1(float x)
{
	return x*x*x - x - 3;
}

float g1(float x)
{
	return 3*x*x -1;
}


float Newton(float(*f)(float), float(*g)(float), float x, float n)
{
	int i;

	i = 0;
	while(i < n)
	{
		x = x -f(x)/g(x);
		i++;
	}
	return x;
}

float Dichotomie(float(*f)(float), float a, float b, int n)
{
	int i;
	float c;

	i = 0;
	while(i < n)
	{
		c = (a + b)/2;
		if (f(c) >= 0)
			b = c;
		else
			a = c;
		i++;
	}
	return c;
}

float Dichotomie2(float(*f)(float), float a, float b, float e)
{
	int n;

	n = log2((b - a)/e) + 1;
	return Dichotomie(f, a, b, n);
}

