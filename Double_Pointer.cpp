#include<iostream>
using namespace std;
int main(){
int a=7;
int*ptr=&a;
int**ptr1=&ptr;
int***ptr2=&ptr1;
int****ptr3=&ptr2;
int*****ptr4=&ptr3;
cout<<ptr4<<endl;
cout<<*ptr4<<endl;
cout<<ptr3<<endl;
cout<<*ptr3<<endl;
cout<<ptr2<<endl;
cout<<*ptr2<<endl;
cout<<ptr1<<endl;
cout<<*ptr1<<endl;
cout<<ptr<<endl;
cout<<*ptr<<endl;
}