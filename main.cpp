#include <iostream>
using namespace std;
void func(auto a, auto b, auto c)
{
    if (a > 0)
    {
        if (b !'a')
        {
            cout << "case 1";
        }
        else
            cout << "case 2"
    }
    else
    {
        if (c == true)
        {
            cout << "case 3";
        }
        else
            cout << "case 4"
    }
}
void func1(auto x)
{
    auto x_lambda = [](auto a, auto b)
    {
        return a + b;
    };

    auto x_ = x_lambda(12, 123);
    if (x_ > 10)
    {
        cout << 'Case A';
    }
    else
        cout << 'Case B';
}
void func2()
{
    int a = 12;
    char b = 'x';
    bool c = false;
    func(a, b, c);
}

int main()
{
}
