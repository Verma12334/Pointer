#include<iostream>
using namespace std;
int sum(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=arr[i];
    }
    return ans;
}
int main(){
    int arr[9]={2,3,4,5,6,7,8,9,23};
    cout<<sum((&arr[2]),7);
    //cout<<sum((arr+2),7);    <==  1st and 2nd both are same line
}