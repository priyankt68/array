/*

1   2   3		--\	  7   4   1
4   5   6		--/   8   5   2
7   8   9			  9	  6	  3

*/


#include <stdio.h>
#define row 3
#define col 3



void swap (int a,int b) 
{
	int temp = a;
	a = b;
	b = temp;
}


int main()
{

// Input matrix
	int a[row][col]= {	{1,2,3} ,
						{4,5,6} ,
						{7,8,9}
				   	};
   	
				   	/*Display input matrix*/
   	for (int i = 0; i < row; ++i)
   	{	
   		printf("\n");
   		for(int j =0; j < col; ++j)
   		{
   			printf("%d \t",a[i][j]) ;
   		}
   	}

   	/*Transpose of a matrix */

   	for (int i = 0; i < row; ++i)
   	{
   		for (int j = i+1; j < col; ++j)
   		{
   			if(i!=j)
   			{
   				int temp = a[i][j];
   				a[i][j] = a[j][i];
   				a[j][i] = temp;

   			}

   		}
   	}

	for (int i = 0; i < row; ++i)
   	{	
   		printf("\n");
   		for(int j =0; j < col; ++j)
   		{
   			printf("%d \t ",a[i][j]);
   		}
   	}   	


	return 0;
}
