#include <stdio.h>

typedef struct box
{

int a;
char b;
}box_b;

void
add( box_b b)
{
        b.a = 56;
        b.b ='7';
}
int
main()
{
box_b b;        
add(b);
printf("%d%c",b.a,b.b);
}

