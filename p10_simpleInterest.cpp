//simple interest calculating by default args

#include <iostream>
using namespace std;

class calcInterest{
 int p , r , t;


int simpCalc(int p,int r,int t=5){
    int sInterest=(p*r*t)/100;
    return sInterest;
}

    public:
   
    void getInput();
    void display();
};

void calcInterest::getInput(){
cout<<"Enter the Principle amount : ";
cin>>p;

cout<<"Enter the interest rate : ";
cin>>r;

cout<<"Enter the loan period in years : ";
cin>>t;
};

void calcInterest::display(){
    cout<<"Simple interest : "<< simpCalc(p,r,t) <<endl;
    cout<<"Simple interest of byDefault 5 : "<< simpCalc(p,r);
}


int main(){

calcInterest ob;
ob.getInput();
ob.display();
    return 0;
}