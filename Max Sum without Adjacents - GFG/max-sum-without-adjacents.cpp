//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int helper(int ind, int *&arr, vector<int>&dp){
	    if(ind==0) return arr[0];
	    if(ind<0) return 0;
	    if(dp[ind]!=-1) return dp[ind];
	    int pick=arr[ind]+helper(ind-2,arr,dp);
	    int notpick=helper(ind-1,arr,dp);
	    return dp[ind]=max(pick,notpick);
	}
	int findMaxSum(int *arr, int n) {
	    // code here
	    vector<int>dp(n,-1);
	    return helper(n-1,arr,dp);
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends