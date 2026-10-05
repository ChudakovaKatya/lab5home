#include <stdio.h>
#include <locale.h>
#include <math.h>
#define M_PI 3.14159265358979323846
int main()
{
	setlocale(LC_CTYPE, "UTF-8");
	puts("Вариант работы: 32");
	float x;
	double y;
	double f;
	printf("Введите значение x:");
	scanf("%e", &x);
	printf("Введите значение y:");
	scanf("%lf", &y);
	f = (1 + pow(sin(x + y), 2)) / (2 + fabs(x - ((2 * x) / 1 + pow(x, 2) * pow(y, 2)))) + x;
	printf("F(%4.e , %.3lf) = %.4lf\n", x, y, f);


}