#include<iostream>
using namespace std;

int main(){
    int a[]={7,7,7,7,7};
    int d,cd,pre,cc=1,op=0;
    for(int i=0;i<5;i++)
    {   pre=a[i];
        for(int j=i+1;j<5;j++)
        {   cc=1;
            d=a[j]-pre;
            for(int k=j;k<5;k++)
            {
                cd=a[k]-pre;
                if(cd==d)
                {
                    cc++;
                    cout<<a[k]<<" ";
                    pre=a[k];
                }
                if(cc>=3)
                {
                    op++;
                }
                
            }
            cout<<endl;
        }
    }
    cout<<op<<endl;
}