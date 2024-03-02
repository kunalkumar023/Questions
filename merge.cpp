// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int res=0;
void count(int a[],int s, int e){
    int mid=(s+e)/2;
    int len1= mid-s+1;
    int len2=e-mid;
    
    int arr1[len1];
    int arr2[len2];
    
    for(int i=0;i<len1;i++)
    {
        arr1[i]=a[s+i];
    }
    for(int i=0;i<len2;i++)
    {
        arr2[i]=a[mid + i+1];
    }
    
    int i=0,j=0,k=s;
    cout<<len1<<" "<<len2<<endl;
    // cout<<"In"<<endl;
    while(i<len1 && j<len2)
    {
        
        if(arr1[i]>arr2[j])
        {
            cout<<arr1[i]<<" "<<arr2[j]<<endl;
            cout<<res<<endl;
            // a[k++]=arr1[i++];
            j++;
            res++;
        }else{
            // a[k++]=arr2[j++]; 
            
            i++; 
        }
    }
    // while(i<len1){
    //     // a[k++]=arr1[i++];
    //     i++;res++;
    // }
    
    // while(j<len2){
    //     // a[k++]=arr2[j++];
    //     j++;res++;
    // }
    
    // delete []arr1;
    // delete []arr2;
    
}

void solve(int a[], int s, int e){
    int mid=(s+e)/2;
    
    if(s>=e){
        return;
    }
    solve(a,s,mid);
    solve(a,mid+1,e);
    
    count(a,s,e);
}

int main() {
    
    int a[]={2,4,1,3,5};
    
    int n=5;
    
    solve(a,0,n-1);
    
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<res<<endl;
    return 0;
}