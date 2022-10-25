//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    int low=0,high=n-1;
    vector<int>v({-1,-1});
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            v[0]=mid;
            high=mid-1;
        }
        else if(arr[mid]>x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            v[1]=mid;
            low=mid+1;
        }
        else if(arr[mid]>x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return v;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends