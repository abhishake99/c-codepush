#include <iostream>
using namespace std;


int prof=0;

int max_profit(int * prices,int index,int buy,int size){ //o(2^n)
    if(index==size) 
        return 0;

    if(buy){
        prof=max(
            -prices[index]+max_profit(prices,index+1,0,size),max_profit(prices,index+1,1,size)
        );
    }
    else if(prices!=NULL){
        prof=max(
            prices[index]+max_profit(prices,index+1,1,size),max_profit(prices,index+1,0,size)
        );
    }
    return prof;

}

int max_profit2(int * prices,int size){ //greedy approach o(n)
    for(int i=1;i<size;i++){
        if(prices[i]>prices[i-1]){
            prof=prof+(prices[i]-prices[i-1]);
        }
    }
    return prof;

}

int main(){
    int prices[] = {100, 180, 260, 310, 40, 535, 695};
    int size=sizeof(prices)/sizeof(int);
    int buy=1,index=0;
    // int result=max_profit(prices,index,buy,size);
    int result=max_profit2(prices,size);
    cout<<"Max Profit: "<<prof;

    return 0;
}