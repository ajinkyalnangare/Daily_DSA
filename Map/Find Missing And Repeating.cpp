//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        
        vector<int>ans;
        int hash[n+1] = {0};
        map<int,int>mp;
        
        for(int i=0;i<n;i++){
            hash[arr[i]]++;
        }
        for(int i=0;i<n+1;i++){
            
            if(hash[i]>=2){
                ans.push_back(i);
            }
        }
        
        for(int i=1;i<n+1;i++){
            if(hash[i]==0){
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends
