#include <iostream>
// اعداد بخش پذیر بر 3 ازیک الی صد
using namespace std;

int main()
{
    for(int i =1; i <= 100;i++)
    {
        if(i % 3 == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}
