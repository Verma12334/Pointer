//Q1  ans 8,9   poor reading 
// #include<iostream>
// using namespace std;
// int main(){
//     int first =8;
//     int second =18;
//     int*ptr=&second;
//     *ptr=9;
//     cout<<first<<" "<<second<<endl;
// }

//Q2  ans 7

// #include<iostream>
// using namespace std;
// int main(){
//     int first =6;
//     int *p=&first;
//     int*q=p;
//     (*q)++;
//     cout<<first<<endl;
// }

//Q3 ans 8,9

// #include<iostream>
// using namespace std;
// int main(){
//     int first =8;
//     int *p=&first;
//     cout<<(*p)++<<" ";
//     cout<<first<<" ";
// }

//Q4  ans segmentation error

// #include<iostream>
// using namespace std;
// int main(){
//     int *p=0;
//     int first=110;
//     *p=first;   //<= This step give segmentation error...ie. correct code ..p=&first;
//     cout<<*p<<endl;
// }

//Q5 ans 11,13

// #include<iostream>
// using namespace std;
// int main(){
//     int first =8;
//     int second =11;
//     int *third=&second;
//     first=*third;
//     *third=*third+2;
//     cout<<first<<" "<<second<<endl;
// }

//Q6  abs 21.5,21.5,21.5

// #include<iostream>
// using namespace std;
// int main(){
//   float f=12.5;
//   float p=21.5;
//   float*ptr=&f;
//   (*ptr)++;
//   *ptr=p;
//     cout<<*ptr<<" "<<f<<" "<<p<<endl;
// }

//Q7  ans 20,4

// #include<iostream>
// using namespace std;
// int main(){
//    int arr[5];
//    int *ptr;
//     cout<<sizeof(arr)<<" "<<sizeof(ptr)<<endl;
// }

//Q8  ans 11,21

// #include<iostream>
// using namespace std;
// int main(){
//  int arr[]={11,21,13,14};
//     cout<<*(arr)<<" "<<*(arr+1)<<endl;
// }

//Q9  ans Address of arr[0] in both place

// #include<iostream>
// using namespace std;
// int main(){
//   int arr[6]={11,12,31};
//     cout<<arr<<" "<<&arr<<endl;
// }

//Q10  ans Address of arr[1]

// #include<iostream>
// using namespace std;
// int main(){
//   int arr[6]={11,21,13};
//     cout<<(arr+1)<<endl;
// }

//Q11 ans 31

// #include<iostream>
// using namespace std;
// int main(){
//    int arr[6]={11,21,31};
//    int *p=arr;
//     cout<<p[2]<<endl;
// }

//Q12  ans 11,14

// #include<iostream>
// using namespace std;
// int main(){
//    int arr[]={11,12,13,14,15};
//     cout<<*(arr)<<" "<<*(arr+3)<<endl;
// }

//Q13  ans error

// #include<iostream>
// using namespace std;
// int main(){
//    int arr[]={11,21,31,41};
//    int*ptr=arr++; //This line give error beacuse ...i'm reassign address of arr...ie.arr=arr+1;..which not poosible in array but it is poosible in pointer..Here i'm updating symbol table...which is not possible
//     cout<<ptr<<endl;
// }

//Q14 ans b

// #include<iostream>
// using namespace std;
// int main(){
// char ch='a';
// char*ptr=&ch;
// ch++;
//     cout<<*ptr<<endl;
// }

//Q15 ans abcde

//#include<iostream>
// using namespace std;
// int main() {
//     char arr[]="abcde";
//     char*p=&arr[0];
//     cout << p<< endl;
//     return 0;
// }

//Q16 ans bcde


// #include<iostream>
// using namespace std;
// int main() {
//     char arr[]="abcde";
//     char*p=&arr[0];
//     p++;
//     cout << p<< endl;
//     return 0;
// }


//Q17 ans b,b

// #include<iostream>
// using namespace std;
// int main() {
//     char str[]="babber";
//     char*p=str;
//     cout << str[0]<<" "<<p[0]<< endl;
//     return 0;
// }

//Q18 ans 20

// #include<iostream>
// using namespace std;
// void update(int *p){
//     *p=*(p)*2;
// }
// int main() {
//    int i=10;
//    update(&i);
//    cout<<i<<endl;
//     return 0;
// }

//Q19.....ans 12,11

// #include<iostream>
// using namespace std;
//     void fun(int arr[]) {
//         cout << arr[0] << " ";
//     }
//     int main() {
//         int arr[] = {11, 12, 13, 14};
//         fun(arr + 1);
//         cout << arr[0] << endl;
//     }


//Q20 ans 70



// #include<iostream>
// using namespace std;
//     void square(int *p){
//         int a = 70;
//         p = &a;
//         *p = (*p) * (*p);
//     }
    // int main(){
    //     int a = 70;
    //     square(&a);
    //     cout << a << endl;
    // }




//Q21  ans 


/*#include<iostream>
using namespace std;
int main(){
    int first = 10;
    int *p = &first;
    int **q = &p;
    int second = 20;
    *q = &second;
    (*p)++;
    cout << first << " " << second << endl;
}*/


//Q22 ans 111,119


// #include<iostream>
// using namespace std;
// int main(){
//     int first = 110;
//     int *p = &first;
//     int **q = &p;
//     int second = (**q)++ + 9;
//     cout << first << " " << second << endl; 
// }


//Q23 ans 102,101


// #include<iostream>
// using namespace std;
// int main(){
//     int first = 100;
//     int *p = &first;
//     int **q = &p;
//     int second = ++(**q);
//     int *r = *q;
//     ++(*r);
//     cout << first << " " << second << endl; 
// }


//Q24ans 111


// #include<iostream>
// using namespace std;
//     void increment(int **p){
//         ++(**p);
//     }
//     int main(){
//         int num = 110;
//         int *ptr = &num;
//         increment(&ptr);
//         cout << num << endl;
//     }


//Q25 ans 49


// #include<iostream>
// using namespace std;
//     int main()
//     {
//     int arr[] = {41, 52, 36, 74};
//     int *p = (arr + 1);
//     cout << *arr + 8;
//     return 0;
//     }



//Q26 ans stuv


// #include<iostream>
// using namespace std;
//     int main()
//     { 
//         char *p; 
//         char str[] = "pqrstuv";
//         p = str;
//         p += 3;
//         cout << p;
//         return 0;
//     }


//Q27 ans ABCDEFGHIJ   <== Important


// #include<iostream>
// using namespace std;
//     int main()
//     {
//         char arr[20];
//         int i;
//         for(i = 0; i < 10; i++) {
//             *(arr + i) = 65 + i;
//         }
//         *(arr + i) = '\0';
//         cout << arr;
//         return 0;
//     }




//Q28 ans 90.5,3


// #include<iostream>
// using namespace std;
//     int main()
//     {
//         float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
//         float *ptr1 = &arr[0];
//         float *ptr2 = ptr1 + 3;
//         cout<<*ptr2<<", ";
//         cout<< ptr2 - ptr1;
//         return 0;
//     }



//Q29 ans  A65AAB66BBC67CCD68DD    <== Important



// #include<iostream>
// using namespace std;
//     int main() {
//         char st[] = "ABCD";
//         for(int i = 0; st[i] != '\0'; i++) {
//             cout << st[i] << *(st)+i << *(i+st) << i[st];
//         }
//         return 0;
//     }




//Q30 ans 14,7,6


// #include<iostream>
// using namespace std;
//     void Q(int z)
//     {
//         z += z;
//         cout<<z << " ";
//     }
//     void P(int *y) 
//     {
//         int x = *y + 2;
//         Q(x);
//         *y = x - 1; 
//         cout<<x << " ";
//     }
//     int main()
//     {
//         int x = 5;
//         P(&x);
//         cout<<x;
//         return 0;
//     }


//Q31 ans 10,10,10

// #include<iostream>
// using namespace std;
//     int main()
//     {
//         int ***r, **q, *p, i=8;
//         p = &i;
//         (*p)++;
//         q = &p;
//         (**q)++;
//         r = &q;
//         cout<<*p << " " <<**q << " "<<***r;
//         return 0;
//     }



//Q32  ANSWER 19

#include<iostream>
using namespace std;
    int f(int x, int *py, int **ppz) {
        int y, z;
        **ppz += 1;
        z = **ppz;
        *py += 2;
        y = *py;
        x += 3;
        return x + y + z;
    }

    int main() {
        int c, *b, **a;
        c = 4;
        b = &c;
        a = &b;
        cout << f(c, b, a);
        return 0;
    }