#include <stdio.h>

int minMax( int arr[],int * min ,int * max)
{
   *min = *max = arr[0];
   for (int i =0 ; i < 4;i++)
   {
     if (arr[i]< *min)
     *min = arr[i];
     if (arr[i] > *max) 
     *max = arr[i];
    
   }



return 0;
}
int main ()
{
 int a [] = {34,56,78,98};
 int size = sizeof(a)/sizeof(a[2]);
 printf("size of the array is %d ,%ld,%ld\n",size,sizeof(a),sizeof(a[2]));
 int min ,max;
 minMax(a,&min,&max);
 printf("max value is %d an minimum value is %d\n" ,min ,max);
}


