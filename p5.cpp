#include <iostream>
using namespace std;

class menuDriven {
    
    public:
    void biggestNum();
    void posNeg();
    void factorial();
    void exitProgram();
};


void menuDriven:: biggestNum(){
    cout<<"I am biggest num finder"<<endl;
    int num1 , num2;
    cout<<"Enter the value of num1 : ";
    cin>>num1;

    cout<<"Enter the value of num2 : ";
    cin>>num2;

    if(num1>num2)
    cout<<"Biggest num is : "<<num1;

    else
    cout<<"Biggest num is : "<<num2;

}

void menuDriven:: posNeg(){
    cout<<"I am Positive / Negative num Finder "<<endl;
    cout<<"Enter the value to check whether num is Positive/Negative "<<endl;
    int num;
    cin>>num;

    if(num>=0)
    cout<<"You enterd a Positive Number ";

    else
     cout<<"You enterd a Negative Number ";
}



void menuDriven::factorial(){
    cout<<"I am Factorial Finder "<<endl;
    cout<<"Enter the num to find Factorial - e.g : 5" <<endl;

    int num , fact=1;
    cin>>num;

    for(int i=1; i<=num; i++){
        fact*=i;
    }

    cout<<"Factorial of : "<<num <<"  is : "<<fact;
}


void menuDriven:: exitProgram(){
    exit(0);
    cout<<"End of Program ";
}

int main(){
   
    menuDriven obj;

    cout<<"Enter 1 for BiggestNum "<<endl;
    cout<<"Enter 2  for Find Positive / Negative "<<endl;
    cout<<"Enter 3 to Find Factorial  "<<endl;
    cout<<"Enter 4 to exit from Program  "<<endl;

     int userInput;
    cin>>userInput;

    


switch (userInput)
{
case 1:
    obj.biggestNum();
    break;

case 2:
    obj.posNeg();
    break;

case 3:
    obj.factorial();
    break;

case 4:
    obj.exitProgram();
    break;


default:
    cout<<"Something is going wrong ";
}
   

    return 0;
}