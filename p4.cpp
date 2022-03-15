#include <iostream>
using namespace std;

class sum{

int arr[5];

public:

void input();
void display();


};


void sum:: input(){
  

    cout<<"Enter the values of  array e.g 1 2 3 4 5" <<endl;
  


   cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];

}

void sum :: display(){
   int sumEven=0 , sumOdd;

   for(int i=0;  i<=4; i++){

       if(arr[i]%2==0)
       sumEven+=arr[i];

       else 
       sumOdd+=arr[i];
   };

    cout<<"Sum of Even num :  "<<sumEven <<endl;
    cout<<"Sum of Odd num :  "<<sumOdd <<endl;

}

int main(){
    sum obj;
    obj.input();
    obj.display();

    return 0;
}