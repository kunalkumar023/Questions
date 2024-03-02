#include<iostream>
#include<vector>
using namespace std;

vector<int> dup(vector<int> a){
    for(int i = 1; i < a.size() - 1; i++)
    {
        if(a[i] == a[i - 1] || a[i] == a[i + 1]){
            a.erase(a.begin() + i);
            i--;
        }
    }
    return a;
}

int main(){
    vector<int> v = {5, 2, 5, 1, 6, 6, 8, 9, 2, 2, 2, 8, 4};
    vector<int> k;
    k = dup(v);
    for(int i = 0; i < k.size(); i++)
    {
        cout << k[i] << " ";
    }
    cout << endl;
    return 0;
}
