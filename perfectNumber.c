#include<stdio.h>
///***********    perfect number      ********/
//sum of the proper divisors equal to the number itself.
//1+2+3 = 6,28,496
int main()
{
	short num,sum = 0;
	
	//get the input 
//	printf("Enter the number: ");
//	scanf("%hd", &num);
	int i=1;
	for(num = 6;  (i < num ) && (num < 500); )
	{
//		printf("i: %hd num: %hd\n",i,num);
		
		if((num% i) == 0) 
			sum += i;
		
		i++;
		if(i == num){
//			printf("*********** i: %hd num: %hd",i,num);
			if(sum == num)
				printf("The given number %hd is perfect number\n",num);
//			else
//				printf("The given number %hd isn't a perfect number\n",num);

			i = 1;
			num++;
			sum = 0;
		}
	}
	
	
	return 0;
}
