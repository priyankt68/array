#include <stdio.h>

#include <malloc.h>

 

void duplicate(int array[], int num)

{

    int *count = (int *)calloc(sizeof(int), (num - 2));

    int i;

 

    printf("duplicate elements present in the given array are ");

    for (i = 0; i < num; i++)

    {

       count[array[i]]++;

    }

    printf("Frequency array \n" );
    

}

 

int main()

{

    int array[] = {5, 10, 10, 2, 1,10, 4, 2};

    int array_freq = sizeof(array) / sizeof(array[0]);

    duplicate(array, array_freq);

    getchar();

    return 0;

}