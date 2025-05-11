#include <iostream>
using namespace std;

float fun(int x, int n)
{   static int p=1,f=1;
    if (n == 0)
        return 1;

    else
    {
        float op1=fun(x,n-1);
        p=p*x;
        f=f*n;
        return op1+p/f;
    }
}


float horner(int x ,int n){  //horner's rule -> Reduces the number of multiplications from o(n^2) to o(n)
    static float s=1; 
    if(n==0)
        return s;
    s=1+x*s/n;
    return horner(x,n-1);
}

int main()
{

    float res=horner(5, 4);
    cout<<res;

    return 0;
}