#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Node{
 Node(int value){
     this->value=value;
     vector<Node*>childrens;
	
}
};


int main(){

Node * root= new Node(1);
root->childrens.push_back(2);
root->childrens.push_back(3);
root->childrens.push_back(4);
root->childrens.push_back(5);

for(auto i=0;i<root->childrens.size();i++){
 	if(i==0){
		cout<<"for the following root node with value : "<<root->value;
	}
}       cout<<root->childrens[i]<<" ";

return 0;
}