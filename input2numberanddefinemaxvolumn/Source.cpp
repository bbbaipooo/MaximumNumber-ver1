#include<stdio.h>
int max(int, int, int, int);
int main()
{
	int a,b,c,d;
	printf("Input Number 1 : ");
	scanf_s("%d",&a);
	printf("Input Number 2 : ");
	scanf_s("%d", &b);
	printf("Input Number 3 : ");
	scanf_s("%d", &c);
	printf("Input Number 4 : ");
	scanf_s("%d", &d);
	printf("Maximum Number is %d", max(a, b, c, d));
	return 0;
}
int max(int i, int j,int k,int l)
{
	if (i > j && i > k && i > l)
		return i;
	else if (j > i && j > k && j > l)
		return j;
	else if (k > i && k > j && k > l)
		return k;
	else if (l > i && l > j && l > k)
		return l;
}