#include<iostream>
using namespace std;
#include<vector>

int mostPopular(vector<int>a,vector<int>b)
{   int popular=0;
    for(int i=1;i<a.size();i++)
    {
        if(a[popular]<a[i])
        {
            popular=i;
        }
        else if(a[i]==a[popular])
        {
            if(b[i]>b[popular])
            {
                popular=i;
            }
        }
    }
    return popular+1;
}

int main(){
    int n;
    vector<int>a(n);
    vector<int>b(n);
    cout<<"Enter no of posts:"<<endl;
    cin>>n;
    cout<<"Enter the likes"<<endl;
    for (int i = 0; i <n; i++)
    {
        cin<<a[i];
    }
    cout<<"Enter the comments"<<endl;
    for (int i = 0; i <n; i++)
    {
        cin<<b[i];
    }
    
    

    cout<<mostPopular(a,b)<<endl;
    return 0;
}

