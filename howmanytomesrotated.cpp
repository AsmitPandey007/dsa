#include<iostream>
#include<vector>
using namespace std;


int rotations( int arr[] , int n){
   int low =0;
   int high = n-1;
   int ans = INT_MAX;
   int index = 0;

   while(low <= high){
    int mid = (low + high)/2;
    if(arr[low] <= arr[high]){
      ans = min( ans , arr[low]);
      index = low;
      break;
     }
   

   else if( arr[low] <= arr[mid]){
    ans = min( ans , arr[low]);
    index = low;
    low = mid +1;
   }

   else{
     ans = min( ans , arr[mid]);
      index = mid;
      high = mid -1;
   }




}
return index;
}