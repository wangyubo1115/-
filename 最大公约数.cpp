#include<stdio.h>
int main()
{
	int x=0,y=0,min=0,i=0;
	printf("请输入两个数：");
	scanf("%d %d",&x,&y);
	if(x<y)
	{
		min=x;
	}
	else
	min=y;
	for(i=min;i>0;i--)
	{
		if((x%i==0)&&(y%i==0))
		{
			printf("两个数的最大公约数：%d",i);
			break;
		}
	}
}

