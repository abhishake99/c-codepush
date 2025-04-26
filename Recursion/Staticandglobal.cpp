#include<iostream>
#include<string>
using namespace std;


int x=1; //global variable

int fun(int n){
    static int y=1; //static variable
    if(n>0){
        y++;
        return fun(n-1)+y;
    }
    return 0;

}

int main(){

    int x=fun(10);
    cout<<"x: "<<x;
    return 0;

}



class emp {

    private:

        int id;
        string name;
        int salary;

    public:
        emp(){

        }
        emp(int id,string name,int salary);
        int get_sal();

};

emp::emp(){
    this->salary=salary;
    this->id=id;
    this->name=name;
}

int emp::get_sal(){
    return this->id;
}

