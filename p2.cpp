#include <iostream>
#include <conio.h>
using namespace std;

class Teacher{
    char name[20] , subject[10];
    float basic , DA , HRA , salary;
    float Calculate(){
        salary =basic+DA+HRA;
        return salary;
    }

    public:
    void Readdata();
    void Displaydata();
};

    
    void Teacher::Readdata(){
        cout<< endl << "Enter name :";
        gets(name);

        cout<< endl << "Enter subject :";
        gets(subject);

        cout<<"Enter basic : ";
        cin>>basic;

       cout<<"Enter DA : ";
        cin>>DA;

        cout<<"Enter HRA : ";
        cin>>HRA;

        Calculate();

    }

    void Teacher ::Displaydata(){
        cout<<"Name : "<<name <<endl;
        cout<<"Subject  : "<<subject <<endl;
        cout<<"Basic : "<<basic <<endl;
        cout<<"DA : "<<DA <<endl;
        cout<<"HRA : "<<HRA <<endl;
        cout<<"Salary : "<<salary <<endl;

    };


int main(){
Teacher obj;

obj.Readdata();
obj.Displaydata();

    return 0;
}
