#include<stdio.h>
int main ()
{
	int fact,c;
	
	printf("number= ");
	scanf("%d",&c);
	
	fact = c;
	
	while(fact *= --c,c > 1)
	{
//		fact *= --c;
		
		
	}
	printf("%d",fact);
	return 0;
}
