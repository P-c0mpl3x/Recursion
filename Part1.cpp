#include<stdio.h>
#include<conio.h>
#include <math.h>
void showInteger(int n)
{
	printf("The result is: %d", n);
}
void showRealnum(double n)
{
	printf("The result is: %.2f", n);
}
int sumN(int n)
{
	if (n == 0)
		return 0;
	return sumN(n - 1) + n;
}
int factorialN(int n)
{
	if (n == 0)
		return 1;
	return factorialN(n - 1) * n;
}
int question1(int n)
{
	if (n == 0)
		return 0;
	return question1(n - 1) + n;
}
float question2(int n)
{
	if (n == 0)
		return 0;
	return sqrt(question2(n-1) + 2);
}
float question3(int n)
{
	if (n == 0)
		return 0;
	return question3(n - 1.0/2.0) + (float) n / (n + 1);
}
float question4(int n)
{
	if (n == 0)
		return 1;
	return question4(n - 1) + 1.0 / (2 * n + 1);
}
int question5(int n)
{
	if (n == 0)
		return 0;
	return question5(n - 1) + float(n) * (n + 1);
}
float question6(int n)
{
	if (n == 0)
		return 0;
	return question6(n - 1) + 1.0 / (n * (n + 1) * (n + 2));
}
long question7(int n)
{
	if (n == 0)
		return 0;
	return question7(n - 1) + n * n;
}
int question8(int n)
{
	if (n == 0)
		return 0;
	return question8(n - 1) + sumN(n);
}
double question9(int n)
{
	if (n == 0)
		return  0;
	return  question9(n - 1) + pow(- 1, n) * (((2.0 * n - 1) + (2.0 * n)) / (factorialN(2*n)));
}
double question10(int n)
{
	if (n == 0)
		return 0;
	return question10(n - 1) + ((n*factorialN(n+1))/((n+1)+sqrt(n+2)));
}
double question11(int n)
{
	if (n == 0)
		return 0;
	return question11(n - 1) + (n + sqrt(n + n + 1)) / ((n + 1) + sqrt(factorialN(n + 2)));
}
void main()
{
	int n, c;
	printf("Import an integer: ");
	scanf_s("%d", &n);
	printf("\n*Question 1  | ");
	showInteger(question1(n));
	printf("\n*Question 2  | ");
	showRealnum(question2(n));
	printf("\n*Question 3  | ");
	showRealnum(question3(n));
	printf("\n*Question 4  | ");
	showRealnum(question4(n));
	printf("\n*Question 5  | ");
	showInteger(question5(n));
	printf("\n*Question 6  | ");
	showRealnum(question6(n));
	printf("\n*Question 7  | ");
	showInteger(question7(n));
	printf("\n*Question 8  | ");
	showInteger(question8(n));
	printf("\n*Question 9  | ");
	showRealnum(question9(n));
	printf("\n*Question 10 | ");
	showRealnum(question10(n));
	printf("\n*Question 11 | ");
	showRealnum(question11(n));
	_getch();
}