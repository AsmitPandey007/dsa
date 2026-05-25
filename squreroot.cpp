#include<iostream>
using namespace std;

int sqrt( int x){
    int ans =1;
    for( int i=1 ;i<=x ;i++){
        if(i*i<= x) {
             ans =max( ans ,i);
             
        }
        if(i*i> x) break;
    }
    return ans;
}

int main(){
    int ans = sqrt(81);
    cout << ans;
    return 0;
}