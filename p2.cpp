#include<iostream>
#include<conio.h>
using namespace std;

class Book{
    int Book_No;
    char Book_Title[20];
    float Price;

    float Total_cost(int n){
        float total = Price*n;
        return total;
    }

    public:
    void input();
    void purchase();
    
    };

   void Book :: input(){
    cout<<"Enter book number : ";
    cin>>Book_No;

    cout<<"Enter the Book Title : ";
    cin>>Book_Title;

    cout<<"Enter the Book Price : ";
    cin>>Price;

    };


void Book :: purchase(){

cout<<"Enter the number of copies : ";
int n;
cin>>n;

float total = Total_cost(n);

cout<<"Total cost is : " <<total;

};


int main(){
    
   Book obj;

   obj.input();
   obj.purchase();
   
    return 0;

}