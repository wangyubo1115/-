#include<stdio.h>
int main()
{
	int x=0,y=0,min=0,i=0;
	printf("��������������");
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
			printf("�����������Լ����%d",i);
			break;
		}
	}
}

