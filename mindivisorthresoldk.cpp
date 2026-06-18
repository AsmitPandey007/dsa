#include <iostream>
#include <climits>
#include<cmath>
using namespace std;

int  chkdivisor( int arr[], int n, int k){
    int sum =0;
    for( int i=0 ;i<n ;i++){
        sum += ceil((double)arr[i] / k);

        
    }
    return sum;
    
}

int max( int arr[], int n){
    int max = 0;
    for( int i=0; i<n ;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int mindivisor( int arr[] , int n , int th){
    int low =1;
    int high = max(arr, n);

    while(low <= high){
        int mid  = low + (high-low)/2;
        int mindiv = chkdivisor(arr, n , mid);
        if( mindiv <= th){
            high = mid - 1;
        }

        else{
            low = mid + 1;
            
        }
        
        
        
}

return low;

}

int main()
{
    int arr[] = {1, 2, 5, 9};
    int n = 4;
    int th = 6;

    cout << chkdivisor(arr, n, th);

    return 0;
}