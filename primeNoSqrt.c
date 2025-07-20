#include<stdio.h>
#include<math.h>
int main()
{
	short num,i=2,j=2,isPrime=1;
	
//	scanf("%hd",&num);
	num=100;
	printf("prime num from 2 to 100: \n");
  	for (; i <= num; ) {
        if (j <= sqrt(i)) {
            if (i % j == 0) {
                isPrime = 0;
                j = (int)sqrt(i) + 1; // break inner check
            } else {
                j++;
            }
        } else {
            if (isPrime)
                printf("%d ", i);
            i++;
            j = 2;
            isPrime = 1;
        }
    }


	
	return 0;
}
