#include <stdio.h>
#include <math.h>

void main()
{
	int a;
	int b;
	int c;

	int one;
	int two;
	int dif = 0;

	printf("Three different numbers are given. Find two numbers such that the modulus of the difference between them is maximum.\nInput 3 numbers: ");
	scanf("%d %d %d", &a, &b, &c);

	dif = (abs(a - b) > dif) ? abs(a - b), one = a, two = b : dif;
	dif = (abs(a - c) > dif) ? abs(a - c), one = a, two = c : dif;
	dif = (abs(b - a) > dif) ? abs(b - a), one = b, two = a : dif;
	dif = (abs(b - c) > dif) ? abs(b - c), one = b, two = c : dif;
	dif = (abs(c - a) > dif) ? abs(c - a), one = c, two = a : dif;
	dif = (abs(c - b) > dif) ? abs(c - b), one = c, two = b : dif;

	printf("The numbers are %d and %d. Absolute value of difference is %d.", one, two, dif);
}