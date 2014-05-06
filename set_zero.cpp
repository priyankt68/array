
/*
Algorithm such that if an element in
an MxN matrix is 0, its entire row and column is set to 0.
*/
#include <stdio.h>
#define row 3
#define col 4

int main()
{

// Input matrix
int a[row][col]= {	{1,2,3,4} ,
						{5,6,0,8} ,
						{9,8,9,10}
						
				   	};
   	
				   	/*Display input matrix*/
   	for (int i = 0; i < row; ++i)
   	{	
   		printf("\n");

   		for (int j =0; j < col; ++j)
   		{
   			printf("%d \t",a[i][j]) ;
   		}
   	}

	int r[row] = {0};
	int c[col] = {0};

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			if ( a[i][j] == 0 )
			{
				r[i] = 1;
				c[j] = 1;
			}

		}
	}

	for (int i = 0; i < row; ++i)
	{
		printf("%d \t %d \n", r[i], c[i] );
		
	}

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col ; ++j)
		{
			if ( r[i] || c[j])
				{
					a[i][j] = 0;
				}	
		}
		

	}

   	for (int i = 0; i < row; ++i)
   	{	
   		printf("\n");

   		for (int j =0; j < col; ++j)
   		{
   			printf("%d \t",a[i][j]) ;
   		}
   	}

	return 0;
}




