#include<stdio.h>


union abc {
int a;
char  b;

}a;

int 
main()
{
 a.a = 90;	
 union abc *p =  &a ;
 printf("%c %d\n",p->a,p->b);
 printf("address %p\n",&a.a);
  
printf("address %p\n ",&a.b);




}

