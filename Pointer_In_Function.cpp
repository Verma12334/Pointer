#include<iostream>
using namespace std;
void update(int *p){
    p=p+1;
}
int main(){
    int p=7;
    int *ptr=&p;
    cout<<ptr<<endl;
    cout<<p<<endl;
    update(ptr);
    cout<<ptr<<endl;
    cout<<p<<endl;
}
// #include<iostream>
// using namespace std;
// void update(int *p){
//     (*p)=(*p)+1;
// }
// int main(){
//     int p=7;
//     int *ptr=&p;
//     cout<<ptr<<endl;
//     cout<<p<<endl;
//     update(ptr);
//     cout<<ptr<<endl;
//     cout<<p<<endl;
// }