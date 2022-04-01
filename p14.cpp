// Program on nested function in class */
#include <iostream>
using namespace std;
class lists
{
    int n, i, list[10];
    void display();

public:
    void readlist();
    void modify();
};
void lists ::readlist()
{
    cout << "Enter the length of list: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> list[i];
    }
}
void lists ::modify()
{
    for (i = 0; i < n; i++)
    {
        list[i] = list[i] * 5;
    }
    display();
}
void lists ::display()
{
    cout << "The list is " << endl;
    for (i = 0; i < n; i++)
    {
        cout << list[i] << endl;
    }
}
int main()
{
    lists series;
    series.readlist();
    series.modify();
    return 0;
}