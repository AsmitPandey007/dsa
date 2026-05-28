#include<iostream>
using namespace std;



// normal way
// int sqrt( int x){
//     int ans =1;
//     for( int i=1 ;i<=x ;i++){
//         if(i*i<= x) {
//              ans =max( ans ,i);
             
//         }
//         if(i*i> x) break;
//     }
//     return ans;
// }

// int main(){
//     int ans = sqrt(81);
//     cout << ans;
//     return 0;
// }


int squareroot( int x){
    int low =1;
    int high =x;
    while( low <= high){
        int mid = (low +high)/2;
        if( mid*mid == x) return mid;
        else if(mid*mid > x){
            highy =mid -1;
        }
        else{
            low = mid +1;
        }
    }
    return high;
}