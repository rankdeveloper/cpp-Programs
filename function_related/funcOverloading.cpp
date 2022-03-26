#include <iostream>
using namespace std;

void add(int a , int b , int c){
    cout<<a+b+c <<endl;
}

void add(int a , int b=20){
    cout<<a+b<<endl;
}

void add(float a , float b){
    cout<<a+b;
}






int main(){

    add(10,20,5);
    add(5);

    add(10.5,10);

    return 0;
}