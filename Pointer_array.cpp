#include<iostream>
using namespace std;
int main(){
    int arr[10]={2,89,4,5,6,7};
    cout<<"Address of arr[0] :"<<arr<<endl;
    cout<<"Address of arr[0] :"<<&arr[0]<<endl;
    cout<<"Address of arr :"<<&arr<<endl;
    cout<<"value of 0 index="<<*arr<<endl;
    cout<<"value of 0 index="<<*arr+1<<endl;

    cout<<"Address of arr[1] :"<<arr+1<<endl;
    cout<<"Address of arr[1] :"<<&arr[1]<<endl;

    cout<<"value of 1 index="<<*arr+1<<endl;
    cout<<"value of 1 index="<<*(arr+1)<<endl;


}