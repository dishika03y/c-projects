#include<stdio.h>
// liner search function ------->
// int linearsearch(int arr[],int size ,int element){
//   for (int i = 0; i <size ; i++){
//     if (arr[i] == element)
//     {
//       return i;
//     }
    
//   }
//   return -1;
// }

// binary search function ------->
 int binarysearch(int arr[],int size, int element){
   
    int low,high,mid;
    low  = 0;
    high = size-1;
    while (low <= high)
    {
      /* code */
      mid = (high+low)/2;
      if (arr[mid] == element){
        return mid;
      }
      if (arr[mid]<element){
        low = mid+1;
      }
      else{
        high = mid-1;
      }
    }
    return -1;
    
 }



int main(){
  int arr[]= {1,2,3,4}; 
  int size = sizeof(arr)/sizeof(int);
  int element = 100;
  int searchindex = binarysearch(arr,size,element);
  printf("%d is found in index %d\n",element,searchindex);
  return 0;
}