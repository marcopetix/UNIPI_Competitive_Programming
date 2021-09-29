#include<bits/stdc++.h>
#include <utility> 
using namespace std;

class Solution{

    // Function to find the trapped water between the blocks.
    public:
    pair <int, int> towers(vector <int> arr, int n){
        // code here
        pair <int, int> res;
        int max_height, max_tot_num;
        
        int max = arr[0];
        for(int i=1; i<n; i++){
            if (arr[i] > max) max = arr[i];
        }
        cout << "max: " << max << endl;
        
        vector<int> counts(max + 1, 0);

        for(int i=0; i<n; i++){
            counts[arr[i]]++;
        }

        max_height = counts[0];
        max_tot_num = counts[0];
        for(int i=1; i<max+1; i++){
            cout << i << " - " << counts[i] << endl;
            if(counts[i]*(i) > max_tot_num){
                max_height = counts[i];
                max_tot_num = counts[i]*(i);
            }
        }

        res = make_pair(max_height, max_tot_num);
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
        vector<int> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        pair <int, int> res = obj.towers(arr, n);
        cout << res.first << " " << res.second <<endl;
        cin >> n;
    }
	return 0;
} 