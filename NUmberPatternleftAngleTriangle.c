/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdbool.h>

//2D array pattern print - left right angle triangle

# define ROW 4
# define COL 4

bool boPattern(short si2Row, short si2Col)
{
    short i, j, n = 1;
    
    for(i = 0 ; i < si2Row ; i++, n++)
    {
        for(j = 0 ; j < si2Col ; j++)
        {
            if(j >= n)
            {
                printf("  ");
            }
            else
            {
                printf("%d ", j + 1);
            }
        }
        printf("\n");
    }
}

int main()
{
    //2D array pattern print
    boPattern(ROW, COL);

    return 0;
}
