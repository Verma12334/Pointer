#include<iostream>
using namespace std;
int main(){
    int num=7;
    int *ptr=&num;
    cout<<num<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    double n1=9;
    double *p1=&n1;
    long n2=89;
    long *p2=&n2;
    char n3='A';
    char *p3=&n3;
    float n4=89.809;
    float *p4=&n4;
    cout<<n1<<endl;
    cout<<*p1<<endl;

    cout<<n2<<endl;
    cout<<*p2<<endl;

    cout<<n3<<endl;
    cout<<*p3<<endl;

    cout<<n4<<endl;
    cout<<*p4<<endl;
    
    cout<<p1<<endl;
    cout<<p2<<endl;
    cout<<p3<<endl;
    cout<<p4<<endl;

    cout<<sizeof(num)<<endl;
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;

    int i=5;
    int *q=&i;
    int *p=0;
    p=&i;
    cout<<q<<endl;
    cout<<p<<endl;

    int a=7;
    int *b=&a;
    (*b)++;
    cout<<a<<endl;
}