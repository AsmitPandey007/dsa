#include<stdio.h>
using namespace std;

int binarysearch( int arr[] , int result , int target,  int n){
    int low  = 0;
    int high = n-1;
    while( low < high){
        mid = low + (high - low)/2;

        if( arr[mid] == target){
            return mid;
        }

        else if( arr[mid] > target){
            high = mid -1;
        }

        else{
            low = mid + 1;

        }
    }
    return -1 ;  
}