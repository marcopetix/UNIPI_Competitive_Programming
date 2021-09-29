#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        
        vector<long long> res(n, -1);
        stack<long long> r_values;
        
        for(int i=n-1; i>=0; i--){
            
            if(r_values.empty()){
                r_values.push(arr[i]);
            }else{
                while(!r_values.empty() && r_values.top() < arr[i]){
                    r_values.pop();
                }
                if(!r_values.empty()){
                    res[i] = r_values.top();
                }
                r_values.push(arr[i]);
            }
            
        }
        return res;
        
    }
};


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
} 