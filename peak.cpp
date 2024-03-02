#include<iostream>
using namespace std;

int main(){
    int a[]={9,5,3,8,9,2,5,4,6,9};
    int n=10;
    int b[10];int k=0;
    
    for (int i = 0; i < n; i++)
    {
        if(i==0 && a[i]>a[i+1]){
            b[k]=a[i];k++;
        }
        else if(a[i]>a[i-1] && a[i]>a[i+1])
        {
            b[k]=a[i];k++;
        }
        else if(i==n-1 && a[i]>a[i-1]){
            b[k]=a[i];k++;
        }
    }
    for(int i=0;i<k;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    
}