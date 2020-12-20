#include <stdio.h>
int print1(int num)
{
		if (num > 0)
		{
			printf("%d ",num);
			print1(num-1);
		}
			
	
}

int main()
{
	int num = 0;
	scanf("%d",&num);
	print1(num);
}
 
