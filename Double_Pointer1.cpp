#include<iostream>
using namespace std;
int main(){
int a=7;
int*ptr=&a;
int**ptr1=&ptr;
int***ptr2=&ptr1;
cout<<"Value of a :"<<a<<endl;
cout<<"Value of a :"<<*ptr<<endl;
cout<<"Value of a :"<<**ptr1<<endl;
cout<<"Value of a :"<<***ptr2<<endl;

cout<<"Address of a :"<<&a<<endl;
cout<<"Address of a :"<<ptr<<endl;
cout<<"Address of a :"<<*ptr1<<endl;
cout<<"Address of a :"<<**ptr2<<endl;
}