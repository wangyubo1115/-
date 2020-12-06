#include <stdio.h>
int main()
{
	int i = 0;
	int sum = 0;


	for(i=1; i<=100; i++)
	{
		if(i%10==9)
			{sum++;} 
		if(i/10==9)
			{sum++;} 
	}
	printf("%d\n", sum);
	return 0;
}
