#include <iostream>
using namespace std;

class inlineFunc{
    int num1 ,  num2;
    public:

    void get();
    void add();
    void sub();
    void multy();
 
};

inline void inlineFunc :: get(){
    cout<<"Enter  the first value : ";
    cin>>num1;

    cout<<"Enter  the second value : ";
    cin>>num2;
}

inline void inlineFunc :: add(){
    int add;
    add=num1+num2;
    cout<<"Addition of two numbers : "<<add <<endl;
}


inline void inlineFunc :: sub(){
    int sub;
    sub=num1-num2;
    cout<<"Substraction  of two numbers : "<<sub <<endl;
}


inline void inlineFunc :: multy(){
    int multy;
    multy=num1*num2;
    cout<<"Multiplication of two numbers : "<<multy <<endl;
}




int main(){
    inlineFunc obj;
    obj.get();
    obj.add();
    obj.sub();
    obj.multy();

    return 0;
}