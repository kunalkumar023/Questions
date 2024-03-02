#include<iostream>
using namespace std;
#include<map>

int main()
{
    map<int,string> name;
    name[64]="kunal";
    name[65]="kunal tyagi";
    name[63]="krishna tyagi";
    for(auto i:name){
        cout<<i.second<<endl;
    }
    
}