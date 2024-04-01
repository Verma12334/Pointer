#include<iostream>
using namespace std;
void update(int**p){
    //p=p+1;//kuch change hoga
    **p=**p+1;//a ki value chjange ho gyegi
    *p=*p+1;//ptr1 ki value change ho jeyegi..ie.ptr1 ptr ko point nh karega
}
int main(){
int a=7;
int*ptr=&a;
int**ptr1=&ptr;
cout<<a<<endl;
cout<<ptr<<endl;
cout<<ptr1<<endl;
cout<<"After passing function\n";
update(ptr1);
cout<<a<<endl;
cout<<ptr<<endl;
cout<<ptr1<<endl;
}
//Pointer address in main body and function body are differnt