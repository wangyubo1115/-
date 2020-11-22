#include <stdio.h>
int p(int n)
{
	int i,x,j;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			x=i*j;
			printf("%d*%d=%d ", i, j, x);
		}
		printf("\n");
	}
	return 0;
}
int main()
{
	int m;
	printf("输入要打印几行的乘法表：");
	scanf("%d",&m);
	p(m) ;
}
