#include <iostream>
using namespace std;


int largest_vehicle(int arr[],int i, int j)
{
    int min = arr[i];
    for (int c=i;c<=j;c++)
    {
        if(arr[c]<min) min = arr[c];
            
    }
    
    
    return min;
}

int main()
    {
    int n,t;
    cin >> n >> t;
    int arr[n];
    for (int i=0;i < n;i++)
         {
            cin >> arr[i] ;
       }
    
    int i,j;
    
    while(t--)
    {
        cin >> i >>j;
        cout << largest_vehicle(arr,i,j) << endl;
    }
    
    return 0;
}