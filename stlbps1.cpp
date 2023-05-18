#include <iostream>

using namespace std;
class General
{
private:
    int num1, num2;

public:
    General()
    {
        num1 = 0;
        num2 = 0;
    }
    General(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    int getnum1()
    {
        return num1;
    }
    int getnum2()
    {
        return num2;
    }
    int product()
    {
        return num1 * num2;
    }
    friend class General2;
};

class General2
{
// private:
//     int num1, num2;

public:
    // General2()
    // {
    //     num1 = 0;
    //     num2 = 0;
    // }
    // General2(int a, int b)
    // {
    //     num1 = a;
    //     num2 = b;
    // }
    General A;
    int getnum1()
    {
        return A.num1;
    }
    int getnum2()
    {
        return A.num2;
    }
    // int product()
    // {
    //     return num1 * num2;
    // }
    // friend class General2;
};
int main()
{
    int a,b;
    cin>>a>>b;
    General(a,b);
    cin>>a>>b;
    General2 B;
    cout<<B.getnum1();

    return 0;
}