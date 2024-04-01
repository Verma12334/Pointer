#include<iostream>
using namespace std;
int main(){
    int arr[10]={2,89,4,5,6,7};
    //cout<<"Address of arr[0] :"<<arr<<endl;
    //cout<<"Address of arr[0] :"<<&arr[0]<<endl;
    //cout<<"Address of arr :"<<&arr<<endl;
     cout<<0[arr]<<endl;
     
     cout<<*(2+arr)<<endl;
     cout<<*(arr)+2<<endl;

     int ptr[100]={87,87,87,87,90,898,7,76};
     int *temp=&ptr[0];
     int *s=ptr;
     cout<<sizeof(ptr)<<endl;
     cout<<sizeof(*temp)<<endl;
     cout<<sizeof(&temp)<<endl;
     cout<<sizeof(temp)<<endl;
     cout<<sizeof(s)<<endl;

     int a[8]={4,6,7,8,78,99,90};

    int *p=&a[0];

    cout<<a<<endl;
    cout<<&a[0]<<endl;
    cout<<&a<<endl;


    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
    //a=a+1;  => give error
    p=p+1;

    
}