#include<stdio.h>
///***********    perfect number      ********/

int main()
{
	short num,x,y,pow = 1;
	
	scanf("%hd%hd",&x,&y);
	
	if(y == 1){
		
		pow = x;
		
		printf("%hd to power of %hd is %hd",x,y,pow);
	}
		
	else if(y == 0)
		pow = 1;
	else
	{
	
		num = y;
	
		for(;pow *= x,  num > 1; num--);
		
		printf("%hd to power of %hd is %hd",x,y,pow);
	}
	
	return 0;
}
