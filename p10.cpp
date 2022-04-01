// Program to show all possible combinations of 1,2,3

#include <iostream>
using namespace std;

class Combi
{
    int a, b, c;

public:
    void display();
};

void Combi::display()
{
    cout << "Combinations of 1,2 and 3 are : " << endl;
    for (a = 1; a <= 3; a++)
    {
        for (b = 1; b <= 3; b++)
        {
            for (c = 1; c <= 3; c++)
            {
                cout << a << b << c << endl;
            }
        }
    }
}

int main()
{

    Combi obj;
    obj.display();
    return 0;
}