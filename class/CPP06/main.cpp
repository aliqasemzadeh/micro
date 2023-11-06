#include <iostream>

using namespace std;
// چند نوع حلقه داریم

// حلقه قابل شمارش

// for

// حلقه های غیر قابل شمارش

// while , do{} while();
int main()
{
    for(int i = 0; i <= 3; i++)
    {
        cout << i << endl;
    }

    cout << "Next:" << endl;

    for(int j = 3; j > 0; j--)
    {
        cout << j << endl;
    }

    cout << "Start!" << endl;
    return 0;
}
