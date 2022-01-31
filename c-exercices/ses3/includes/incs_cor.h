#ifndef BITWISE_H
# define BITWISE_H
# include <stdio.h>
# include <math.h>

float Dichotomie(float(*f)(float), float a, float b, int n);
float Newton(float(*f)(float), float(*g)(float), float x, float n);
float Dichotomie2(float(*f)(float), float a, float b, float e);
float f(float x);
float g(float x);
float f1(float x);
float g1(float x);

#endif
