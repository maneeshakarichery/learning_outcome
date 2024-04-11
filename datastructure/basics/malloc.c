#include <stdlib.h>
#include <stdio.h>



int
main()

{
	int n,i;
	printf("enter no of digits to be entered");
	scanf("%d",&n);
	int *ptr =(int *) malloc(n*sizeof(int));
	if (ptr==0)
	{
	
		printf("no mmry avalilable");


	}
	else
	{
	
       		for(i =0;i< n;i++)
		{
			printf("enter the digits: \n");
			scanf("%d",ptr+i);
		
		}
		 for(i =0;i< n;i++)
                {
                        printf("%d",ptr[i]);
                       // scanf("%d",ptr+i);

                }


	
	}







}
