#include<stdio.h>
void main()
{
	int A[50],a,no,temp,temp1;
	printf("\n enter the total no");
	scanf("%d",&no);
	for(a=0;a<no;a++)
	{
		printf("\n enter the number");
		scanf("%d",&A[a]);
	}
	for(a=1;a<no;a++)   //begining from 1 index at a given array
	   {
	    if(A[a]>A[a-1])   //[12,11,13,5,6] 
	     {
	       temp=A[a];
	       A[a]=A[a-1];
	       A[a]=temp;
	       A[a]>A[a-1];
	            temp1=A[a];
	        	A[a]=A[a-1];
	            A[a]=temp1;
		 }
	       
	   }
	   for(a=0;a<no;a++)
	   {
	   	 printf("%d,",A[a]);
	   }
}
