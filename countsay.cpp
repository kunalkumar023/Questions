#include<iostream>
using namespace std;
#include<map>

void countSay(int i,int n,string s){

    string str="";
    map<char,int>count;
    if(i==n){
        cout<<str<<endl;
        return;
    }
    // cout<<i<<endl;
    for(int j=0;j<s.length();j++)
    {
        count[s[j]]++;
    }
     for (auto it = count.begin(); it != count.end(); ++it) {
        // str.push_back(it->first);
        // str.push_back(it->second);
        cout<<it->first<<" "<<it->second<<endl;
    }
    i++;
    countSay(i,n,str);
}

int main(){

    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;

    // cout<<countSay(0,n)<<endl;
    countSay(0,n,"1");
}