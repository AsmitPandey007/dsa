#include<iostream>
using namespace std;

int occurances( int arr[] , int n, int x){
    int lower = -1;
    int upper = -1;
    for( int i = 0 ; i<n ; i++){
        if(arr[i] == x){
            if( low == -1) lower = i;
            upper = i;
        }
    }
}

// 2nd approach --> lower bound will be 1st indexx
//                  upper bound -1 will be second index..

int lowerbound( int arr[] , int x , int n){
    int low = 0;
    int high = n-1;
    while( low < high){
        int mid =  low + (high -  low)/2;
        if( arr[mid] >= x){
            high = mid - 1;

        }

        else{
            low = mid +1 ;
        }
    }
    return low;
}

int upperbound( int arr[] , int x , int n){
    int low = 0;
    int high = n-1;
    while( low < high){
        int mid =  low + (high -  low)/2;
        if( arr[mid] > x){
            high = mid - 1;

        }

        else{
            low = mid +1 ;
        }
    }
    return low;
}

int floccursnce ( int arr[] , int n ){
    int lb = lowerbound( arr , x , n);
    if( lb == n || arr[lb] != x) return { -1 , -1};
    return { lb , upperbound(arr , x ,n)};
}



// 3rd approach ( binary ssearch concept!)


int firstocc( int arr[] , int x,  int n){
    int low = -1 , high  = n-1;
    int first =-1;
    while( low <= high){
        int mid = (low + high)/2;

        if( arr[mid] == x){
            high = mid -1;
            first = mid;
        }

        else if( arr[mid] < x) {
            low = mid +1;
        }

        else{
            high = mid - 1;
        }
    }
    return first;
}



int lastocc( int arr[] , int x,  int n){
    int low = -1 , high  = n-1;
    int last =-1;
    while( low <= high){
        int mid = (low + high)/2;

        if( arr[mid] == x){
            low = mid +1 ;
            last = mid;
        }

        else if( arr[mid] < x) {
            low = mid +1;
        }

        else{
            high = mid - 1;
        }
    }
    return last;
}


pair { int , int} floccurance( vector <int> arr,  int n, int x){
    int first = firstocc( arr , n ,x);
    if( first == -1) return { -1 , -1};
    int last = lastocc( arr , n ,x);
    return {first , last};
}