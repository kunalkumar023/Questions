#include<iostream>
using namespace std;
#include<vector>

int main(){
   
        vector<int> nums;
        nums={4,1,2,4,2,1,9};
        int i=0,j=0,count;
        while(i<=nums.size() )
        {
            if(nums[i]==nums[j] && i!=j)
            {
                i++;
                j=0;
            }
            else{
                j++;
            }
            if(j>nums.size())
            {
                break;
            }
        }
        cout<<nums[i];
        cout<<i;
    }

