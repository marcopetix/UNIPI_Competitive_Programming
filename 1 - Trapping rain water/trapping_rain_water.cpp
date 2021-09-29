#include<bits/stdc++.h>

using namespace std;


class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        long long total_water = 0;
        int r_max = arr[n-1], l_max = arr[0];
        int r_potential_water[n], l_potential_water[n];
        
        for (int i=0; i<n;i++){
            if (arr[i] < l_max){
                l_potential_water[i] = l_max - arr[i];
            }else{
                l_potential_water[i] = 0;
                l_max = arr[i];
            }
        }
        
        for (int i=n-1; i>0;i--){
            if (arr[i] < r_max){
                r_potential_water[i] = r_max - arr[i];
            }else{
                r_potential_water[i] = 0;
                r_max = arr[i];
            }
        }
        
        for(int i=0; i<n; i++){
            total_water += min(l_potential_water[i], r_potential_water[i]);
        }
        
        return total_water;
    }
};

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
} 