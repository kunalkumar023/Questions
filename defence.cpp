#include<iostream>
using namespace std;
#include<vector>

int destroyedhouses(vector<int> houses,int x){
    for(int i=houses.size()-1;i>=0;i--)
    {
        if(houses[i]<x){
            return i+1;
        }
        // return 0;
    }
    return 0;
}

int main(){
    vector<int> houses={1,5,9,7,8,4,9,7,8,7};
    int x=0;
    int ans=destroyedhouses(houses,x);
    cout<<ans<<endl;
    return 0;
}