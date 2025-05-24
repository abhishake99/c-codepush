#include <iostream>
using namespace std;


int curr_min=INT_MAX;
int curr_max=INT_MIN;
int min_diff=INT_MAX;

void func(int *arr ,int index, int k,int n){

        if(index==n){
            return;
        }
        int temp=arr[index]-k;
        if(temp>0 && temp<curr_min){
            curr_min=temp;
        }

        temp=arr[index]+k;
        curr_max=max(temp,curr_max);

        cout<<curr_max<<" "<<curr_min<<endl;
        if(curr_min!=INT_MAX)
        min_diff=min(min_diff,curr_max-curr_min);

        func(arr,index+1,k,n);
}

int main(){
    int arr[] = {1, 5, 8, 10};
    int arr2[] = {1, 5, 8, 10};
    int k=2;
    int index=0;
    int size=sizeof(arr)/sizeof(int);
    func(arr,index,k,size);
    // min_diff=curr_max-curr_min;
    cout<<"Minimum: "<<min_diff;



}