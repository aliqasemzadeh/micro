#include <iostream>
// برنامه ای بنویسید که 5 عدد مثبت از ورودی بگیرد بیشینه آن را چاپ کند.

using namespace std;

int main()
{
    int maxValue = 0;
    for(int i =0; i < 5; i++)
    {
        int x;
        cin >> x;
        if(x > maxValue) {
            maxValue = x;
        }
    }
    cout << "Max:" << maxValue;
    return 0;
}
