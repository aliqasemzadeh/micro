#include <iostream>

struct Body
{
    float wieght;
    float hight;
    float calBmi()
    {
        return (wieght) / (hight * hight);
    }
};

struct Student {
    int id;
    int natinalId;
    float avg;
    char name[20];
    char major[20];
    int regYear;
    int g1;
    int g2;
    int g3;
    float calAvg()
    {
        return (g1 + g2 + g3) / 3;
    }

} ;

using namespace std;

int main()
{
    Body person1;
    cin >> person1.wieght;
    cin >> person1.hight;
    cout << person1.calBmi() << endl;
    return 0;
}
