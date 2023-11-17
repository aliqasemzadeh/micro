#include <iostream>
// پنج عدد از ورودی بگیرید و بیشینه آن را پیدا کنید و چاپ کنید.
// همه اعداد مثبت هستند
using namespace std;

int main()
{
    int maxValue = 0;

    for(int i = 0;i < 5;i++)
    {
        int x;
        cin >> x;
        if( x > maxValue)
        {
            maxValue = x;
        }
    }

    cout << "Max:" << maxValue;
    return 0;
}
