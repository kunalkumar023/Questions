#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int passingMarks(vector<int>a,int x)
{
    sort(a.begin(),a.end());
    return a[a.size()-x]-1;
}

int main()
{
    int n;
    cout<<"Enter the number of student"<<endl;
    cin>>n;
    vector<int> a(n);
    cout<<"Enter the marks of Students"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int x;
    cout<<"Enter the no of passed students "<<endl;
    cin>>x;
    cout<<passingMarks(a,x)<<endl;
    return 0;
    
    
}