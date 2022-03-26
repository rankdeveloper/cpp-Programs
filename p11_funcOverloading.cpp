#include <iostream>
using namespace std;

void func1(int a , int b){
   cout<<a+b <<endl;
}



void func1(int a , int b , int c){
    cout<<a+b+c <<endl;
}
void func1(double a , double b){
    cout<<a+b;
}

int main(){

   func1(10,20);
   func1(10,20,70);
   func1(5.5,5.5);

    return 0;

}