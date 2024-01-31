#include <iostream>

//int main(){
    
    /*int val1;
    std::cout<<"first : ";
    std::cin>>val1;

    int val2;
    std::cout<<"second : ";
    std::cin>>val2;

    int result = val1 + val2;
    std::cout<<"result : "<<result<<std::endl;
    
    return 0*/

    /////////////////////////////////////////////////

    /*int val1, val2;
    int result = 0;

    std::cout<<"insert num : ";
    std::cin>>val1>>val2;

    for(int i=val1+1; i<val2; i++){
        result += i;
    }

    std::cout<<"result : "<<result<<std::endl;
    return 0;*/

    /////////////////////////////////////////////////

    /*char name[100];
    char lang[200];

    std::cout<<"name : ";
    std::cin>>name;

    std::cout<<"favorite : ";
    std::cin>>lang;

    std::cout<<"result name : "<<name<<std::endl;
    std::cout<<"result lang : "<<lang<<std::endl;
    return 0;*/

    /////////////////////////////////////////////////

    /*int num1, num2, num3, num4, num5;

    std::cout<<"1 input : ";
    std::cin>>num1;

    std::cout<<"2 input : ";
    std::cin>>num2;

    std::cout<<"3 input : ";
    std::cin>>num3;

    std::cout<<"4 input : ";
    std::cin>>num4;

    std::cout<<"5 input : ";
    std::cin>>num5;

    std::cout<<"result : "<<num1 + num2 + num3 + num4 + num5<<std::endl;
    return 0;*/

    /////////////////////////////////////////////////

    /*char name[100];
    char phone[100];

    std::cout<<"name : ";
    std::cin>>name;

    std::cout<<"phone : ";
    std::cin>>phone;

    std::cout<<"result name : "<<name<<std::endl;
    std::cout<<"result phone : "<<phone<<std::endl;*/

    /////////////////////////////////////////////////

    /*int num1;

    std::cout<<"99 input : ";
    std::cin>>num1;

    for(int i=1;i<10;i++){
        std::cout<<num1*i<<std::endl;
    }

    return 0;*/

    /////////////////////////////////////////////////

    /*int num1 = 0;
    int result = 50;

    while(num1 != -1){
        std::cout<<"input num : ";
        std::cin>>num1;

        result += num1 * 0.12;
        result += 1;
        std::cout<<"result num : "<<result<<std::endl;
        result = 50;
    }

    return 0;
    
}*/

    /////////////////////////////////////////////////

/*    void test(void){
        std::cout<<"test void"<<std::endl;
    }

    void test(char a){
        std::cout<<"char : "<<a<<std::endl;
    }

    void test(int a, int b){
        std::cout<<"int : "<<a<<b<<std::endl;
    }

    int main(){
        test();
        test('park');
        test(10,20);
        return 0;
    }*/

/*void test(int * a, int * b){
    int * swap;

    * swap = * a;
    * a = * b;
    * b = * swap;

}

void test(char * a, char * b){
    char * swap;

    * swap = * a;
    * a = * b;
    * b = * swap;
}*/

/*void test(double * a, double * b){
    std::cout<<a<<std::endl;
    std::cout<<b<<std::endl;

    std::cout<<"test2"<<std::endl;

    double swap = * a;
    * a = * b;
    * b = swap;
}

int main(void){
    int num1=20, num2=30;
    test(&num1,&num2);
    std::cout<<num1<<' '<<num2<<std::endl;

    char ch1 = 'A', ch2 = 'Z';
    test(&ch1,&ch2);
    std::cout<<ch1<<' '<<ch2<<std::endl;

    std::cout<<"test"<<std::endl;

    double dbl1 = 1.124444 , dbl2 = 3.654444;
    test(&dbl1,&dbl2);
    std::cout<<dbl1<<' '<<dbl2<<std::endl;

    return 0;
}*/

int boxvol(){
    return 0;
}

int boxvol(int a){
    return a;
}

int boxvol(int a, int b){
    return a * b;
}

int boxvol(int a, int b, int c){
    return a * b * c;
}

int main(void){
    std::cout<<boxvol(3,3,3)<<std::endl;
    std::cout<<boxvol(5,5)<<std::endl;
    std::cout<<boxvol(7)<<std::endl;
    std::cout<<boxvol()<<std::endl;
}