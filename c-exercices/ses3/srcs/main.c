#include "../includes/incs_cor.h"

int main()
{
	float result;
	int i;
	float *A;
	FILE *fp;

	result = Dichotomie(f, 1, 3, 30);
	printf("%f ~= %f\n", result, sqrt(2));
	result = Newton(f, g, 2, 30);
	printf("%f ~= %f\n", result, sqrt(2));
	result = Dichotomie2(f, 1, 3, 0.00002);
	printf("%f ~= %f\n", result, sqrt(2));
	
	fp = fopen("test.txt", "w");
	//A = (float*)malloc(sizeof(float) * 100);
	i = 0;
	while (i < 100)
	{
	//	A[i] = Newton(f1, g2, 0, i);
		fprintf(fp, "%d\t %f\n", i, Newton(f, g, 2, i));
		i++;
	}
}
