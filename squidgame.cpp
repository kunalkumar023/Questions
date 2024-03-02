#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int maxprice(vector<int> price){
    int ans=0;
    sort(price.begin(),price.end());
    for(int i=price.size()-1;i>0;i--){
        ans+=price[i];
    }
    
    return ans;
}

int main(){
    
    vector<int> price={1,2,3,4,5,6,4,3};
    int ans=maxprice(price);
    cout<<ans<<endl;
    return 0;
}