#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    char op;
    cout << "Please enter A:";
    cin >> a;
    cout << "Please enter B:";
    cin >> b;
    cout << "Please enter opration:";
    cin >> op;

    if(op == '+')
    {
        cout << a + b;
    }
    else if (op == '-')
    {
        cout << a - b;
    }
    else if (op == '*')
    {
        cout << a * b;
    }
    else
    {
        cout << "Bad opration.";
    }
    
}