#include <stdio.h>
#include <math.h>

void main()
{
	int a;
	int b;
	int c;

	int one = 0;
	int two = 0;
	int dif = 0;

	printf("Three different numbers are given. Find two numbers such that the modulus of the difference between them is maximum.\nInput 3 numbers: ");
	scanf("%d %d %d", &a, &b, &c);

	printf("%d\n", abs(a - b));

	dif = (abs(a - b) > dif) ? one = a, two = b, abs(a - b) : dif;
	dif = (abs(a - c) > dif) ? one = a, two = c, abs(a - c) : dif;
	dif = (abs(b - a) > dif) ? one = b, two = a, abs(b - a) : dif;
	dif = (abs(b - c) > dif) ? one = b, two = c, abs(b - c) : dif;
	dif = (abs(c - a) > dif) ? one = c, two = a, abs(c - a) : dif;
	dif = (abs(c - b) > dif) ? one = c, two = b, abs(c - b) : dif;

	printf("The numbers are %d and %d. Absolute value of difference is %d.", one, two, dif);
}