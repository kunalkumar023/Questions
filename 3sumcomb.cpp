#include<iostream>
using namespace std;
#include<vector>

int main()
{
    int a[3][5]={{1,0,0,1,0},
                {0,0,2,3,1},
                {0,0,1,0,0}};

    int count=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++)
        {
            if(a[i][j]!=0)
            {
                count++;
            }
        }
    }
   
    int b[3][count];
    int k=0,l=0;
      for(int i=0;i<3;i++){
        for(int j=0;j<count;j++)
        {
            if(a[i][j]!=0)
            {
                b[k][l]=i;
                b[k+1][l]=j;
                b[k+2][l]=a[i][j];
                l++;
            }
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<count;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

}