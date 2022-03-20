#include <iostream>
using namespace std;

void add(int a , int b){
    cout<<a+b<<endl;
}

void add(float a , float b){
    cout<<a+b;
}






int main(){

    add(10,20);
    add(10.5,10);

    return 0;
}