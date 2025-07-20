#include<stdio.h>

int main()
{
	short x = 0, y = 1, z,i = 0,n;
	
	printf("How many fibonacci series you want?: ");
	scanf("%hd",&n);
	
	if(n >= 1)
		while(printf("%hd ",x), z = x + y, x = y, y = z, i++ ,i < n);
	else
		printf("'n' should be greater than or equal to one. So the input invalid.\n");
	
		
	return 0;
}
