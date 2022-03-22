
//SWAPPING OF TWO NUMBERS WITHOUT USING THIRD VARIABLE

#include <iostream>
using namespace std;

class SWAP{
    int a , b; //10 20

    public:
    void get();
    void display();
};

void SWAP :: get(){
    cout<<"Enter the first value : ";
    cin>>a;

    cout<<"Enter the second value : ";
    cin>>b;
}

void SWAP:: display(){
    a=a+b; // 30
    b=a-b; //10
    a=a-b; //20

    cout<<"After swapping of a = "<<a <<" , b  = "<<b;

};

int main(){
    SWAP obj;
    obj.get();
    obj.display();

    return 0;
}