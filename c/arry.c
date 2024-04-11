#include <stdio.h>

int 
main()
{
	
	int total =0;
	
	printf("enter 10 digits");
	int arr[10];
	for (int i =0;i < 10;i++)
	{
		scanf("%d",&arr[i]);
//		printf("%d",*arr);

	}
	  for (int i =0;i < 10;i++)
        {
  //              scanf("%d",arr);
                printf("%d,",arr);
		total=total+ arr[i];
		

        }
       printf("sum: %d",total);


	


}
