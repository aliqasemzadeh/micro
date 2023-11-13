#include <iostream>
// یک عدد از ورودی که تعداد ستاره ها می باشد را بگیرید و شکل زیر را چاپ کنید

// مثال برای سه ستاره
// ***
// ***
// ***
using namespace std;

int main()
{
    int starNum;
    cin >> starNum;
    for(int i = 0; i < starNum; i++)
    {
        for(int j = 0; j < starNum; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
