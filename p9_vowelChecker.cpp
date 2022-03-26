#include <iostream>
#include <cctype>
using namespace std;

class vowelChecker{

public:
char ch;
void getData_display();
// void display();
};

void vowelChecker:: getData_display(){
    cout<<"Enter the character : ";
    cin>>ch;

    if(!isalpha(ch)){
        cout<<"It is not a letter";
    }

    else{
        switch (tolower(ch)){

            case 'a':
            cout<<"It is a vowel : "<<ch;
            break;

            case 'e':
            cout<<"It is a vowel : "<<ch;
            break;

            case 'i':
            cout<<"It is a vowel : "<<ch;
            break;

            case 'o':
            cout<<"It is a vowel : "<<ch;
            break;

            case 'u':
            cout<<"It is a vowel : "<<ch;
            break;

            default:
            cout<<"It is a consonant : "<<ch;
        }
    }
};

int main(){
vowelChecker ob;
ob.getData_display();

    return 0;
}