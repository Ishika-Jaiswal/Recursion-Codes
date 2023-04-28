#include <iostream>
#include<vector>

using namespace std;

bool printF(int arr[],vector<int> &ds, int ind,int n,int sum,int s){
    if(ind==n){
        if(sum==s){
            for (auto it: ds)cout<<it<<" ";
            cout<<endl;
            return true;
        }
        else return false;
    }
    ds.push_back(arr[ind]);
    s+=arr[ind];
    if(printF(arr,ds,ind+1,n,sum,s)==true) return true;
    
    s-=arr[ind];
    ds.pop_back();
    if(printF(arr,ds,ind+1,n,sum,s)==true) return true;
    return false;
    
}

int main()

{   int arr[]={1,2,1};
    vector<int> ds;
    int n=3;
    int sum=2;
    int s=0;
    printF(arr,ds,0,n,sum,s);
    return 0;
}
