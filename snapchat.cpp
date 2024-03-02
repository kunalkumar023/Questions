#include<iostream>
using namespace std;
#include<vector>

int streak(vector<int> a, vector<int>b){
    int mx=0,current=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>0 && b[i]>0){
            current++;
        }else{
            current=0;    
        }
        mx=max(current,mx);
        
    }
    return mx;
}

int main(){
    vector<int> a={1,1,2,1,2,1,2,3};
    vector<int> b={1,2,3,4,1,4,3,4};
    int ans=streak(a,b);
    cout<<ans<<endl;
    return 0;
}