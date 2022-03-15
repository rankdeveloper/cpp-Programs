#include<iostream>
using namespace std;

class Rec{
    int length , breadth;

    int  calc_area(){

         int area = length*breadth;
         return area;
     }

    public:
    void input();
    void display();
};

void Rec:: input(){
    cout<<"Enter the value of length : ";
    cin>>length;

    cout<<"Enter the value of breadth : ";
    cin>>breadth;

}


void Rec:: display(){
    cout<<"Area of the Rectangel : ";
    int area  = calc_area();
    cout<<area;
};


int main(){
   
    Rec obj;
    obj.input();
    obj.display();
    
    return 0;
}