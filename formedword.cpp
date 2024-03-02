#include<iostream>
using namespace std;
#include<vector>
int main(){
    // vector<string> words = {"cat","bt","hat","tree"};
    // string chars = "atach";

    // int ans=0;
    // for(int i=0;i<words.size();i++)
    //     {
    //         string currword=words[i];
    //         cout<<currword<<endl;
    //         int k=0,j=0;
    //        while(j<=currword.length() && k<chars.length())
    //        {
    //            if(chars[j]==currword[k])
    //            {
    //             cout<<"j++"<<endl;
        //            j++;
        //            k=0;
        //        }
        //        else if(j==chars.length()){
        //             cout<<"inside the loop"<<endl;
        //            ans+=currword.length();
        //            break;
        //        }
        //        else{
        //         cout<<"k++"<<endl;
        //            k++;
        //        }
        //    }
        // }
        // cout<<ans<<endl;
        vector<vector<int>> ar ={{4,5},
        {7,8}};
        // cout<<ar[0].size()<<endl;
        float a=float(ar[0][1]/ar[0][0]);
        float b=ar[1][1]/ar[1][0];
        cout<<a<<endl;
        cout<<b<<endl;
}