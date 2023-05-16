#include<stdio.h>

main()

{
	int a,b;
	a=5;
	b=10;
	
	int *p,*p1,*p2;
	
	p=&a;
	p1=&b;
	
	p2=p;
	p=p1;
	p1=p2;
	
	printf("%d=>%u\n",p,*p);
	printf("%d=>%u",p1,*p1);	
}
