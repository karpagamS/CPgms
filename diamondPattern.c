#include<stdio.h>

int main()
{
	short row,col,i,j,k,n;
	
	printf("Note: Row and col should be equal and it should be greater than 1 and odd value \nEnter row,col: ");
	scanf("%hd%hd",&row,&col);
	if((row > 1) && (row == col) && ((col % 2) != 0))
	{
	
		k = row/2;
		n=0;
		for(i=0 ; i < row ; i++)
		{
			for(j=0 ; j < col ; j++)
			{
				
				if((j < (k - n))|| (j > (k + n)))
					printf("  ");
				else
					printf("* ");
			}
			if(i < k)
				n++;
			else
				n--;
				
			printf("\n");
		}
	} else
	{
		printf("Can't print diamond shape pattern\n'");
	}
	return 0;
}
