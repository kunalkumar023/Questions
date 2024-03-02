#include<iostream>
using namespace std;


class Hero{

    protected:
        int age=10;

};

class Superman: public Hero{

    public:
    void accessprotected(){
        cout<<age<<endl;
        age = 52;
        cout<<age<<endl;
    }
};

int main(){
   
    Superman obj;
    obj.accessprotected();

    return 0;

}