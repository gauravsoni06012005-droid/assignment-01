#include<iostream>
using namespace std;
int main(){
    float price,R,TIME,SI;
    cout<<"ENTER PRINCIPLE AMOUNT:";
    cin>>price;
    cout<<"enter rate of intrest:";
    cin>>R;
    cout<<"enter time (in weeks):";
    cin>>TIME;
    SI=(price*R*TIME)/100;
    cout<<"simple intrest="<<SI<<endl;
}