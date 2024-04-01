#include<iostream>
using namespace std;
int main(){
    char arr[10]={'d','t','7','9','u','y'};
    cout<<arr<<endl;
    char ab='a';
    char *ptr=&ab;
    cout<<ptr<<endl;

    char ch[6]="abcde";
    cout<<ch<<endl;
    char *c=&ch[0];
    cout<<c<<endl;
    char temp='q';
    char *p=&temp;
    cout<<temp<<endl;
    cout<<p<<endl;

}