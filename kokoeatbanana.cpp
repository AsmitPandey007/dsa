#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    
     long long timeneed(vector <int>& arr , int k){
        int n = arr.size();
        long long time =0;
        for( int i=0 ;i<n ;i++){
            time += ceil((double)arr[i]/ (double)k); 

        }
        return time;    
    }


    int maxel( vector <int>& arr){
        int n = arr.size();
        int maxi = INT_MAX;
        for( int i =0 ;i<n ;i++){
            int maxi  = max(maxi ,arr[i]);
        }
        return maxi;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low =1;
        int high  = maxel(piles); 
        
        while(low<= high){
            int mid = low + (high - low)/2;

            double time = timeneed(piles , mid );
           
            if(time <= h){
                
                high = mid -1;

            }

         

        else{
            low = mid +1;
        }

        

        }
        

       
       return low;
    }  

   
};
