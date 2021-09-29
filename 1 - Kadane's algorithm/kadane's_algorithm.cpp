#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        long long max=0, sum=0;
        // Your code here
        for (int i=0; i<n;i++){
            if(sum > 0){
                sum += arr[i];
            }else{
                sum = arr[i];
            }
            
            if(sum > max){
                max=sum;
            }
        }
        if(max == 0){
            max = *max_element(arr, arr + n);
        }
        return max;
        
    }
};


int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}