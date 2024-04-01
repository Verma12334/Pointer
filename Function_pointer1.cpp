#include<iostream>
using namespace std;
int issum(int arr[],int n){

    // int arr[]<= It is not a array ....just pointer ie.int *arr
    cout<<"(In side function) Size of array :"<<sizeof(arr)<<endl;
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=arr[i];
    }
    return ans;
} 
int main(){
    int arr[5]={1,2,3,4,5,};
    cout<<"(Out side function) Size of array :"<<sizeof(arr)<<endl;
    cout<<"Sum of array :"<<issum(arr,5)<<endl;


    int brr[6]={4,5,6,7,8,9};
    for(int i=0;i<6;i++){
        cout<<*(brr+i);
    } cout<<endl;
    int *ptr=brr;
    for(int i=0;i<6;i++){
        cout<<*(ptr+i);
    } cout<<endl;
    
    // for(int i=0;i<6;i++){
    //     cout<<*(brr++);       <== It changing address of arr ...ie.give error
    // }
    for(int i=0;i<6;i++){
        cout<<*(ptr++);
    }
}