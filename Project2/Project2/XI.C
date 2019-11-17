#include<stdio.h>
int main()
{
	int i = 1;
	int s = 1;
	int n = 0;
	scnf("d%", &n);
	for (i = 1; i <= n; i++)
		s = s * i;
	printf("%d\n", s)
		return 0;
}