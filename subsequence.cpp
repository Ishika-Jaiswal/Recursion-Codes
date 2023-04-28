#include <iostream>
#include<vector>

using namespace std;

void printF(int arr[],vector<int> &ds, int ind,int n){
    if(ind>=n){
        for(auto it: ds) cout<<it<<" ";
        if(ds.size()==0)cout<<"{}"<<endl;
        cout<<endl;
        return;
    }
    ds.push_back(arr[ind]);
    printF(arr,ds,ind+1,n);
    ds.pop_back();
    printF(arr,ds,ind+1,n);
    
}

int main()

{   int arr[]={3,1,2};
    vector<int> ds;
    int n=3;
    printF(arr,ds,0,n);
    return 0;
}
// 2^n *n
//space O(n)


pattern structure for recursion
subsequence - any contiguous or non contiguours part of an array but in the same order 
say for example 
arr[]= {3,1,2}
subsequences will be
3,1,2
3,1
3,2
3
1,2
1
2
{}
