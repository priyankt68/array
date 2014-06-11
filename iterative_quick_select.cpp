#include <iostream>
#include <stdlib.h>



int selectKth(int arr[], int k, int n) 
{
 if (n <= k)
  std :: cout << "Error"  << std :: endl;
 
 int from = 0, to = n-1 ;
 
 // if from == to we reached the kth element
 while (from < to) {
  int r = from, w = to;
  int mid = arr[(r + w) / 2];
 
  // stop if the reader and writer meets
  while (r < w) {
 
   if (arr[r] >= mid) { // put the large values at the end
    int tmp = arr[w];
    arr[w] = arr[r];
    arr[r] = tmp;
    w--;
   } else { // the value is smaller than the pivot, skip
    r++;
   }
  }
 
  // if we stepped up (r++) we need to step one down
  if (arr[r] > mid)
   r--;
 
  // the r pointer is on the end of the first k elements
  if (k <= r) {
   to = r;
  } else {
   from = r + 1;
  }
 }
 
 return arr[k];
}

int main(int argc, char const *argv[])
{

  int k = atoi(argv[1]);
  int arr[] = {1,6,4,7,11,3,5,12};
            //{1,3,4,5,6,7,11,12}
  int n = sizeof(arr) / sizeof(arr[0]);
  std :: cout << n << std :: endl;
  std :: cout << selectKth(arr,k-1,n) << std :: endl;

  return 0;
}