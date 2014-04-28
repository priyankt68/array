#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct aos
{
	int n;
	double x;
	double y;
};

struct soa
{
	int m;
	double *p;
	double *q;
};

int main()
{

 /* Array of structures */
aos a1[10];

	for (int i=0;i<10;i++)
	{
		a1[i].n = i;
		a1[i].x = i * 2.1;
		a1[i].y = i * 2.1;

	}

for (int i=0;i<10;i++)
	{
	cout <<	a1[i].n << "," << a1[i].x << ","  << a1[i].y << endl;
			
	}


 /* Structure of arrays */
soa a2;
	int n=10;
	//allocating memory to store data points
	a2.m = n;
	a2.p = (double*)malloc(((a2.m << 1) + (a2.m >> 1)) * sizeof(double));
	a2.q = a2.p + a2.m;

	
	for (int i=0;i<10;i++)
	{
		a2.m = n;
		a2.p[i] = i * 2.1;
		a2.q[i] = i * 2.1;
	
	}
		
	
	for (int i=0;i<10;i++)
	{
		cout <<	a2.m << "," << a2.p[i] << ","  << a2.q[i] << endl;
	
	}
		
	return 0;
}