#include <iostream>
using namespace std;


 int add(int a , int b=10){
      return a+b;
  };

int sub(int a , int b=20){
    return a-b;
}

int main(){
    cout<<" Add method : " <<add(10) <<endl;
    //cout<<add(20,30);

    cout<<"Sub method : " <<sub(30);
    return 0;
}