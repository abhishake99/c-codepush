#include<iostream>
#include<vector>
using namespace std;


class Node {
public:
    int data;
    vector<Node*> children;
    

    Node(int data)
    {
        this->data = data;
    }
};

int main(){


int* ptr;
int num=10;
ptr=&num;
cout<<ptr<<" "<<*ptr<<endl;


int *ptr=new int;


Node *root;
root = new Node(1);
root->children.push_back(new Node(2));

// Node root;
// root.data=10;



return 0;
}