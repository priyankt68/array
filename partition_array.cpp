#include <iostream>
using namespace std;



int partition(int* input, int p, int r)
{
    int pivot = input[r];
    
    std :: cout << " Pivot element is : " << pivot << std :: endl;

    while ( p < r )
    {
        while ( input[p] < pivot )
            p++;
        
        while ( input[r] > pivot )
            r--;
        
        if ( input[p] == input[r] )
            p++;

        else if ( p < r ) 
        {                                              
            int tmp = input[p];                      
            input[p] = input[r];
            input[r] = tmp;
        }
    }
    
   // cout << "p = " << p << endl;
    return r;
}



int main()
{
    int a1[] = {111,4,3,11,14,2,13,-1,-3,8};

    int j = partition(a1,0,9);

    cout << j << " element " << a1[j] << endl;

    for (int i = 0; i < sizeof(a1)/sizeof(a1[0]); ++i)
    {
        cout << a1[i] << " " ;
    }

}