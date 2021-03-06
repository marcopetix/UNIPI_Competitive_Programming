#include <bits/stdc++.h>
using namespace std;

#include <vector>
#include <iostream>

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> res;
        int max = a[n-1];
        res.push_back(max);
        
        for(int i = n-2; i>=0; i--){
            if(a[i] >= max){
                max = a[i];
                res.push_back(max);
            }
        }
        reverse(res.begin(),res.end());
        return res;
;
    }
};

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
{
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}