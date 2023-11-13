#include <iostream>
// اعداد بخش پذیر بر سه را از یک تا صد چاپ کنید
using namespace std;

int main()
{
    int i = 1;
    for(i = 1;i <= 100; i++)
    {
        if(i % 3 == 0)
        {
            cout << i << endl;
        }
    }

    cout << i;
    return 0;
}
