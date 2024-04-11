#include <stdio.h>

typedef struct box
{

int a;
char b;
}box_b;

void
add( int *s,char *b)
{
	*s = 56;
	*b ='7';
}
int
main()
{
box_b b;	
add(&b.a ,&b.b);
printf("%d%c",b.a,b.b);
}
