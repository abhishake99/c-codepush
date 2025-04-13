#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int *p;
    p=(int*)malloc(5*sizeof(int)); //c

    p=new int[5]; //c++

    int a = 2;
    int *p = &a;
    cout << p << endl;
    cout << *p;
    return 0;
}