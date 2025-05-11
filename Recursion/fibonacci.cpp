#include <iostream>
using namespace std;

int fib(int n, int *arr)
{

    if (n <= 1)
    {
        arr[n] = n;
        return 1;
    }

    else
    {
        if (arr[n - 1] == -1)
        {
            arr[n - 1] = fib(n - 1, arr);
        }
        if (arr[n - 2] == -1)
        {
            arr[n - 2] = fib(n - 2, arr);
        }
        return arr[n - 1] + arr[n - 2];
    }
}

int main()
{

    int *arr = new int[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = -1;
    }
    int n = 8;
    n-=2;
    int res = fib(n, arr);
    cout << res;
    delete []arr;
}