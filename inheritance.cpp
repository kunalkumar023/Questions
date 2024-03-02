#include<iostream>
using namespace std;


class parent{
    public:
    virtual void print(){
        cout<<"parent class"<<endl;
    }
};

class child:public parent{
    public:
    void print(){
        cout<<"child class"<<endl;
    }
};

int main(){
    child beta;
    parent *baap;
    baap= &beta;
    baap->print();
}