#include<stdio.h>
#include<conio.h>
#include <math.h>
long question1(int m, int n)
{
	if (n == 0)
		return 1;
	return question1(m, n - 1) * m;
}
int question2(int a, int b)
{
	if (a > b)
	{
		if (a <= b)
			return b;
		return question2(b, a - b);
	}
	else
	{
		if (b <= a)
			return a;
		return question2(a, b - a);
	}
}
int question3(int a, int n, int r)
{
	if (n == 1)
		return a;
	return question3(a, n-1, r) + r;
}
int question4(int a, int n, int q)
{
	if (n == 1)
		return a;
	return question4(a, n - 1, q) * q;
}
int question5(int n)
{
	if (n < 6)
		return n;
	return question5(n - 5) + question5(n - 4) + question5(n - 3) + question5(n - 2) + question5(n - 1);
}
int question6a(int n)
{
	if (n == 0)
		return 1;
	else
		if (n == 1)
			return 0;
		else
			if (n == 2)
				return -1;
	return 2 * question6a(n - 1) - 3 * question6a(n - 2) - question6a(n - 3);
}
long question6b(int n)
{
	int a[100];
	a[1] = 1; a[2] = 2; a[3] = 3;
	for (int i = 4; i <= n;i++)
		a[i] = 2 * a[i+2] + a[i + 1] - 3 * a[i];
	return a[n];
}
long question7(int n)
{
	if (n == 1)
		return 1;
	if (n % 2 == 0)
			return 2 * question7(n / 2);
	return 2 * question7(n / 2) + 3 * question7(n/2+1);
}
int question8(int x, int a[], int left, int right)
{
	if (left <= right)
	{
		int mid = (left + right) / 2;
		if (x == a[mid])
			return mid;
		if (x < a[mid])
			return question8(x, a, left, mid - 1);
		return question8(x, a, mid + 1, right);
	}
	return -1;
}
int question9(int n)
{
	if (n <= 2)
		return 1;
	return  question9(n - 1) + question9(n - 2);
}
void printFibonacci(int n)
{
	for (int i = 1; i <= n; i++)
		printf("\t%d", question9(i));
}
int question10(int n)
{
	int a[50];
	a[0] = 0; a[1] = 1;
	int i = 2;
	int temp = 0, result = a[0];
	for (int i = 2; temp < n;i++)
	{
		a[i] = a[i - 1] + a[i - 2];
		temp = a[i];
		result = a[i - 1];
	}
	return result;
}
int question11b(int n);
int question11a(int n)
{
	if (n == 0)
		return 1;
	return question11a(n - 1) + question11b(n - 1);
}
int question11b(int n)
{
	if (n == 0)
		return 0;
	return 3 * question11a(n - 1) + 2 * question11b(n - 1);
}

int question12(int n)
{
	if (n == 1)
		return 1;
	int A = 0;
	for (int i = 1; i < n;i++)
	{
		A += question12(i);
	}	
	return A*n;
}

void main()
{
	int a = 10, b = 1, c = 5;
	int d[6] = {0,1,2,3,5,6};
	printf("The result is: %d", question11a(1));
	_getch();
}