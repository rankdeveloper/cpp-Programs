#include <iostream>
using namespace std;
class item
{
    int number;
    float cost;

public:
    void getdata(int a, float b);
    void putdata()
    {
        cout << "Number " << number << endl;
        cout << "Cost " << cost << endl;
    }
};
void item ::getdata(int a, float b)
{
    number = a;
    cost = b;
}

int main()
{
    item x;
    cout << "\n Object x" << endl;
    x.getdata(100, 299.5);

    x.putdata();
    item y;
    cout << "\n Object y" << endl;
    y.getdata(200, 1.2);
    y.putdata();
    return 0;
}