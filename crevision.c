#include<stdio.h>

void main()
{
	
	const int a =10;
	
	int b = 100;
	//a++;l-value specifies const object
	
	printf("b=%d \n b++=%d \n++b=%d", b, b++, ++b);//b++=100->101
	//++b=102  b=++b=102
	
	printf("a=%d \n  ",a+b);

	
}