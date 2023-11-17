#include <iostream>
// یک عدد از ورودی که تعداد ستاره ها می باشد را بگیرید و شکل زیر را چاپ کنید

// مثال برای سه ستاره
// ***
// ***
// ***
using namespace std;

int main()
{
    int stars;
    cin >> stars;
    for(int i =0;i<stars;i++) {
        for(int j = 0;j<stars;j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
