#include <iostream>
#include<vector>

using namespace std;

int printF(int arr[],vector<int> &ds, int ind,int n,int sum,int s){
    if(ind==n){
        if(sum==s){
            // for (auto it: ds)cout<<it<<" ";
            // cout<<endl;
            return 1;
        }
        return 0;
    }
    ds.push_back(arr[ind]);
    int l=arr[ind];
    printF(arr,ds,ind+1,n,sum,s);
    
    int r=arr[ind];
    ds.pop_back();
    printF(arr,ds,ind+1,n,sum,s);
    
    return l+r;
    
}

int main()

{   int arr[]={1,2,1};
    vector<int> ds;
    int n=3;
    int sum=2;
    int s=0;
    int ans = printF(arr,ds,0,n,sum,s);
    cout<<ans;
    return 0;
}


//ds can be removed here 
