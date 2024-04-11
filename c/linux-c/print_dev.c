#include<stdio.h>


int 
main()
{
	char name[]="devika";
	char *p;

#ifdef MANESH
	printf("%s\n", name);
	printf("%c\n", name[0]);
#else
//	name[1]='m';

	printf("%s\n", name);
	printf("name_p = %p\n", name);
	p = name;
	printf("p_p = %p\n", p);
	printf("name_str = %s\n", p);
#endif

	printf("size[%ld]\n", sizeof(name));
}
