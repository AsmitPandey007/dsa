#include<stdio.h>
using namespace std;

int lowerbound( int arr[] , int target , int n){
    int low  =0;
    int high = n-1;
    
    while( low <= high){
        int mid  = low + ( high - low)/2;
        if(arr[mid] >= target){    // upperbound arr[mid] > target
            
            high = mid -1;
        }

        else{
            low = mid + 1;
        }
        
     
}

   return high;
}


int lb = lowerbound(arr , arr+n, n) - arr;

int lb = lowerbound(arr.begin() , arr.end(), n) - arr.begin();