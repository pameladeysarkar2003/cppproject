#include<iostream>
using namespace std;
int main(){
    int amount,dis,payable;
    cout<<"Please enter shopping amount:";
    cin>>amount;

    switch(amount/10000){
        case 0:
        dis=0;
        cout<<"Your discount:"<<dis<<endl;
        payable=amount-dis;
        cout<<"Payable amount after discount"<<amount<<" - "<<dis<<payable;
        break;

        case 1:
        dis=amount*5/100;
        cout<<"Your 5% discount:"<<dis<<endl;
        payable=amount-dis;
        cout<<"Payable amount after discount"<<amount<<" - "<<dis<" : "<<payable<<endl<<endl;
        break;

        case 2:
        dis=amount*10/100;
        cout<<"Your 10% discount:"<<dis<<endl;
        payable=amount-dis;
        cout<<"Payable amount after discount"<<amount<<" - "<<dis<<" : "<<payable<<endl<<endl;
        break;

        default:
        dis=amount*15/100;
        cout<<"Your 15% discount:"<<dis<<endl;
        payable=amount-dis;
        cout<<"Payable amount after discount"<<amount<<" _ "<<" : "<<payable<<endl;
        break;

    }
}