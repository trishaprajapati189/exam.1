#include<stdio.h>
#include<conio.h>

void main()
{
	int n,
	sum=0,i=1;
	
	printf("enter a num:");
	scanf("%d",&n);
	
	do
	{
		if(i%2!=0)
		{
			sum+=i;
		}
		i++;
		while(i<=n);
	}
	
		printf("sum of odd numubers=%d\n",sum);
	  return 0;
}
