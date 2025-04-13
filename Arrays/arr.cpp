#include <iostream>
using namespace std;

void fun(int a[], int n)
{

    for (int i = 0; i < n; i++)
        cout << a[i];
}

void fun2(int *a, int n)
{

    for (int i = 0; i < n; i++)
        cout << a[i];
}

int* fun3(int n){

    int *p;
    p=new int[n];
    return p;
}

int main()
{

    // int a[4] = {1, 2, 3, 5};

    // fun2(a, 4);

    int *b=fun3(5);
    b[0]=1;
    cout<<b;

    // int a=4;

    // int*p;
    // p=&a;

}