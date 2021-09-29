#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        vector <int> res;
        deque <int> window;
        int max;
        
        for(int i=0; i<n; i++){
            while((!window.empty()) && (window.front() <= i-k)){
                window.pop_front();
            }
            
            while((!window.empty()) && (arr[i] >= arr[window.back()])){
                window.pop_back();
            }
            
            window.push_back(i);
            
            
            if(i>= k-1){
                res.push_back(arr[window.front()]);
                //cout << i-k+1 << " - " << window.front() << '\n';
            }
        }
        return res;
    }
};

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}  