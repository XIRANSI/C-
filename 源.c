#include <stdio.h>
void main()
{
	int k, w, t, p2, p3, p5;
	double a, b, c, s, f[100];
	scanf("%d", &n);
	f[0] = 1; p2 = 0; p3 = 0; p5 = 0;
	a = 2, b = 3, c = 5, s = 1;
	for (k = 2; k <= n; k++)
	{
		if (a < b && a < c)
		{
			f[k] = a; a = a * 2;
			t = 2; p2++;
		}
		else if(b<a && b<c)
		{
			f[k] = c; c = c * 5;
			t = 3; p5++;
		}
		s += f[k];
	}
	printf("数列的第%d项为:%.of", n, f[k]);
	if (t == 2)
		printf("(2^%d)\n", p2);
	else
		if(t==3)
		printf("(3^%d)\n", p3);
	else
			printf("(5^%d)\n", p5);
	printf("数列的前%的项之和为:%,of\n", n, s);
}