#include <iostream>
using namespace std;

class rectangle
{
private:
    int len;
    int bre;

public:
    rectangle()
    {
        len = 0;
        bre = 0;
    }
    rectangle(int l, int b);
    int area();
    int permieter();
    int return_len();
    int return_bre();
};

rectangle::rectangle(int l, int b)
{
    len = l;
    bre = b;
}

int rectangle::area(){
    return len*bre;
}

int rectangle::permieter(){

    return 2*(len+bre);

}
int rectangle::return_len(){
    return len;
}

int rectangle::return_bre(){
    return bre;
}


int main()
{

    rectangle r(5,4);
    cout<<"area: "<<r.area()<<endl;
    cout<<"perimeter: "<<r.permieter()<<endl;
    cout<<"get_length: "<<r.return_len()<<endl;
    cout<<"get_breadth: "<<r.return_bre();


    return 0;
}