//String vowel counter without duplicacy
#include <iostream>
using namespace std;

class VowelCounter{
    char str[100];
    int a=0 , e=0,I=0,o=0, u=0;
    

    public:
    void getInput();
    void mainCode();
    void display();
    
};

void VowelCounter::getInput(){
    cout<<"Enter the string : ";
    cin.getline(str,100);
};

void VowelCounter::mainCode(){
    for(int i=0; i<str[i]; i++){

    
 if(str[i]=='a'){
     a=1;
 }

 else if(str[i]=='e'){
    e=1;
 }

else if(str[i]=='i'){
     I=1;
 }

else if(str[i]=='o'){
     o=1;
 }

else if(str[i]=='u'){
    u=1;
 }
 
}
}

void VowelCounter::display(){
    mainCode();

    cout<<"Total no. of vowel occured wihout duplicacy: "<<a+e+I+o+u;

}

int main(){

VowelCounter ob;
ob.getInput();
ob.display();

    return 0;
}

//coded by Rankush