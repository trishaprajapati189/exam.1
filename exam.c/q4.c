#include<stdio.h>
#include<conio.h>

void main ()
{
	int a,b,c;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("enter c:");
	scanf("%d",&c);
	
	
	if(a<b)
	{
	
		if(a<c)
	
	{
	printf("a is minmum");
	}
	else
	{
		printf("c is minimum");
	}
}
	else
	if(b<c)
	{
     	printf("b is minimum");	
	}
	else
	{
		printf("c is minimum");
	}

}