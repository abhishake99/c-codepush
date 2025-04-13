#include<iostream>
using namespace std;

int main(){

    pair<int,int>l1={0,10};
    pair<int,int>r1={10,0};

    pair<int,int>l2={5,5};
    pair<int,int>r2={15,0};

    pair<int,int>m2={r2.first,l2.second};
    pair<int,int>z2={l2.first,r2.second};

    if(l2.first<l1.first && l2.second<l1.second){

        cout<<"Overlap";
         return 0;
}
    
    if(r2.first<r1.first && r2.second<r1.second){

        cout<<"Overlap";
         return 0;
}
    
    if(z2.first<r1.first && z2.second<l1.second){

        cout<<"Overlap";
         return 0;
}
    
    if(m2.first<r1.first && m2.second<l1.second){

        cout<<"Overlap";
         return 0;
}
    
    cout<<"Not overlap";
    return 0;
}