#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<algorithm>

int watest(vector<int>a,string b)
{   vector<int>k;
    int mini = INT_MAX;
    for(int i=0;i<b.size();i++)
    {   
        if(b[i]=='0')
        {   
            if(a[i]<mini)
            {
                mini = a[i];
            }
        }
    }
    return mini;
    
}

int main()
{
    int n;
    cout<<"Enter no of posts:"<<endl;
    cin>>n;
    vector<int>a(n);
    string b;
    
    cout<<"Enter test cases"<<endl;
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    cout<<"string"<<endl;
    cin>>b;
    cout<<watest(a,b)<<endl;

    return 0;
}
