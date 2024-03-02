#include<iostream>
using namespace std;
#include<vector>

int killedpeople(vector<int> h)
{
    int a=h[0];
    int count=0;
    for(int i=0;i<h.size();i++)
    {
        if(h[i]>a){
            count++;
        }
    }
    return count;
}

int main(){
    vector<int> height={4,8,6,9,2,8,4};
    int ans = killedpeople(height);
    cout<<ans<<endl;
    return 0;
}