//find the area of a rectangular prism
//formula : A=2(wl+hl+hw)
#include<stdio.h>
main()
{
	int w,l,h;
	printf("Enter the length of the rectangular prism : ");
	scanf("%d",&l);
	
	printf("Enter the breadth of the rectangular prism : ");
	scanf("%d",&w);
	
	printf("Enter the height of the rectangular prism : ");
	scanf("%d",&h);
	int a=w*l +h*l + h*w;
	int i=2*a;
	printf("The area of a rectangular prism is : %d",i);
}
