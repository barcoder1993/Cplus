#include <iostream>
using namespace std;

/*int main(void){

    cout<<"true : "<<true<<endl;
    cout<<"false : "<<false<<endl;
}*/

/*int main(void){
    int num1 = 1020;
    int &num2 = num1;

    num2 = 3333;

    cout<<"val : "<<num1<<endl;
    cout<<"ref : "<<num2<<endl;

    cout<<"val : "<<&num1<<endl;
    cout<<"ref : "<<&num2<<endl;

    cout<<"val : "<<num1<<endl;
    cout<<"ref : "<<num2<<endl;

    return 0;
}*/

/*void addnum(int &a){
    a++;
}

void change(int &a){
    a = a * -1;
}

int main(){
    int num = 0;

    addnum(num);
    addnum(num);
    addnum(num);
    addnum(num);

    cout<<"num : "<<num<<endl;

    change(num);

    cout<<"num : "<<num<<endl;
}*/

/*void swap(int *a, int *b){
    cout<<"*a : "<<*a<<endl;
    cout<<"*b : "<<*b<<endl;

    int temp = *a;
    *a = *b;
    *b = temp;

    cout<<"*a : "<<*a<<endl;
    cout<<"*b : "<<*b<<endl;
}

int main(void){
    int num1 = 5;
    int *ptr1 = &num1;

    int num2 = 10;
    int *ptr2 = &num2;

    swap(ptr1,ptr2);

    cout<<"*ptr1 : "<<*ptr1<<endl;
    cout<<"*ptr2 : "<<*ptr2<<endl;
}*/

/*int &ref(int &a){
    a++;
    return a;
}

int main(){
    int num1 = 1;
    int num2 = ref(num1);

    num1 += 1;
    num2 += 100;

    cout<<num1<<endl;
    cout<<num2<<endl;
    return 0;
}*/

int main(){
    const int num = 12;
    const int *ptr = &num;

    cout<<num<<endl;
    cout<<*ptr<<endl;
}