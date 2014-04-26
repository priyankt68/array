#include <stdio.h>
#include <stdlib.h>
#define bool int
using namespace std;


char * RemoveDuplicate(char *str)
{
	bool bin_hash[256] = {0};
	int ip_ind = 0; // index to keep a track of the next input string
	int res_ind = 0; // index to keep a track of the resultant string
	char temp;

	if(*(str) == '\0')
	{
		printf("Empty String\n");
	}
	else
	{
		while(*(str + ip_ind))
		{
		
			temp = *(str+ip_ind);
			if(bin_hash[temp] == 	0)   // seeing the string for the first time
			{
				bin_hash[temp] = 1; // seting the bit to one, stating that yes, I have seen you atleast one.
				*(str+res_ind) = *(str+ip_ind);

				res_ind++;           // move ahead the resultant string, s
			}

		ip_ind++;
		}
	
		*(str + res_ind) = '\0';
	}

	return str;
}

int main()
{

	char s1[] = "priayankk";

	 printf("%s \n",RemoveDuplicate(s1) );
	 

	char s2[] = "ppp";

printf("%s \n",RemoveDuplicate(s2) );
	

	char s3[] = "pri";

	printf("%s \n",RemoveDuplicate(s3) );

	char s4[] = "";
	
	printf("%s \n",RemoveDuplicate(s4) );
	


	return 0;
}