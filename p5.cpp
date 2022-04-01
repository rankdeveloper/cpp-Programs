// Program to enter a number and output is the sum of the digits of that number using classes


#include <iostream>
using namespace std;

class A{
     int n, rem ,   sum=0;
     
     public:
     void input();
     void display();
     
};

void A::input(){
    cout<<"Enter the number : ";
    cin>>n;
}

void A::display(){

   int  temp=n;
    while(temp!=0){
    rem=temp%10;
    sum=sum+rem;
    temp=temp/10;
    }
    
    cout<<"Sum of its digit : "<<sum;
}

int main() {
    A obj;
    obj.input();
    obj.display();
   
    return 0;
}