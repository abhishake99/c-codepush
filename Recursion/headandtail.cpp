#include <iostream>
using namespace std;

int fun(int n)
{ // tail recursion

    if (n > 0)
    {
        cout << n << " ";
        return fun(n - 1);
    }
    return 0;
}

int fun3(int n)
{ // head recursion

    if (n > 0)
    {
        return fun(n - 1);
        cout << n << " ";
    }
    return 0;
}

int fun2(int n)
{ // tree recursion

    if (n > 0)
    {
        cout << n << " ";
        fun(n - 1);
        fun(n - 1);
    }
    return 0;
}

int main()
{
    fun2(5);
    return 0;
}