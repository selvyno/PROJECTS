#include<stdio.h>
void main()
{
	int A[30],a,no,value,x;
	printf("\n enter the number");
	scanf("%d",&no);
	for(a=0;a<no;a++)
	{
		printf("\n enter the elements");
		scanf("%d",&A[a]);
	}
	printf("\n which element do you want to find");
	scanf("%d",&value);
	for(a=0;a<no;a++)
		{
		if(A[a]==value)
			{	
			 printf("\n element found at %d",a);
			 break;
			}
		}
		if(A[a]!=value)
		  {
		     printf("\n element not found");
		  }
}
