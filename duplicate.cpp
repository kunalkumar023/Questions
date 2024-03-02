#include<iostream>
using namespace std;
#include<unordered_map>

int main(){

    string str = "test string";

    unordered_map<int, int> count;

    for(int i=0;i<str.length();i++)
    {
        count[str[i]]++;
    }

   for (auto it : count) {
        // if the count of characters is greater than 1 then
        // duplicate found
        // if (it.second > 1)
            cout << it.first << ", count = " << it.second
                 << "\n";
    }


    
    return 0;
}