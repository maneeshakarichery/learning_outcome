#include<stdio.h>

int main()

{

  int N;
  scanf("%d ", N);
  int seen[10] = {0};
  while(N>0)
  {
  
   int rem = N/10;
    if (seen[rem] ==1)
    {
      break;
    }
    else
    {
     seen[rem] =1;
     
     N=N/10;
    
    
    }
    
  
  }
 



}


