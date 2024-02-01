#include <iostream>

using namespace std;

// class Point{
//     private:
//         int xpos,ypos;
//     public:
//         void Init(int x,int y){
//             xpos = x;
//             ypos = y;
//         }
//         void ShowPointInfo() const{
//             cout<<"["<<xpos<<","<<ypos<<"]"<<endl;
//         }
// };

// class Ring{
//     private:
//         Point innerPoint;
//         Point outterPoint;

//         int innerRadius;
//         int outterRadius;
//     public:
//         void Init(int a,int b,int c,int d,int e,int f){
//             innerRadius = c;
//             outterRadius = f;

//             innerPoint.Init(a,b);
//             outterPoint.Init(d,e);
//         }
//         void ShowRingInfo(){
//             cout<<"inner Circle Info..."<<endl;
//             cout<<"radius : "<<innerRadius<<endl;
//             innerPoint.ShowPointInfo();

//             cout<<"outter Circle Info..."<<endl;
//             cout<<"radius : "<<outterRadius<<endl;
//             outterPoint.ShowPointInfo();
//         }
// };

// int main(){
//     Ring ring;
//     ring.Init(1,1,4,2,2,9);
//     ring.ShowRingInfo();
//     return 0;
// }

// class simpleClass{
//     private:
//         int num1;
//         int num2;
//     public:
//         simpleClass(){
//             num1 = 0;
//             num2 = 0;
//         }
//         simpleClass(int n){
//             num1 = n;
//             num2 = 0;
//         }
//         simpleClass(int n1,int n2){
//             num1 = n1;
//             num2 = n2;
//         }

//         void showData() const{
//             cout<<num1<<" "<<num2<<endl;
//         }
// };

// int main(){
//     simpleClass sc1;
//     sc1.showData();

//     simpleClass sc2(100);
//     sc2.showData();

//     simpleClass sc3(100,200);
//     sc3.showData();

//     return 0;
// }

// class SimpleClass{
//     private:
//         int num1;
//         int num2;
//     public:
//         SimpleClass(int n1=0,int n2=0){
//             num1 = n1;
//             num2 = n2;
//         }
//         void ShowData() const{
//             cout<<num1<<" "<<num2<<endl;
//         }
// };

// SimpleClass sc1(){
//     SimpleClass sc(20,30);
//     return sc;
// }

// int main(void){
//     SimpleClass sc1();
//     SimpleClass mysc = sc1();
//     mysc.ShowData();
//     return 0;
// }

namespace COMP_POS{
    enum{
        CLERK,
        SENIOR,
        ASSIST,
        MANAGER
    };
}

class NameCard{
    private:
        char * pname;
        char * poption;
        char * pphonenumber;
        char * ppos;
    public:
        NameCard(char * name,char * option,char * phonenumber,int abc){
            pname = name;
            poption = option;
            pphonenumber = phonenumber;

            if(abc == 0){
                ppos = "CLERK";
            }else if(abc == 1){
                ppos = "SENIOR";
            }else if(abc == 2){
                ppos = "ASSIST";
            }else if(abc == 3){
                ppos = "MANAGER";
            }else{
                ppos = "";
            }
            
            /*switch (abc)
            {
            case 0:
                ppos = "CLERK";
                break;
            case 1:
            
                ppos = "SENIOR";
                break;
            case 2:
                ppos = "ASSIST";
                break;
            case 3:
                ppos = "MANAGER";
                break;
            }*/
        }

        void ShowNameCardInfo(){
            cout<<"name : "<<pname<<endl;
            cout<<"comp : "<<poption<<endl;
            cout<<"num : "<<pphonenumber<<endl;
            cout<<"pos : "<<ppos<<endl;
        }
};

int main(){
    NameCard manCLERK("lee","abc","010-1111-2222",COMP_POS::CLERK);
    NameCard manSENIOR("hong","qqq","010-4444-4444",COMP_POS::SENIOR);
    NameCard manASSIST("kim","ttt","010-9999-88888",COMP_POS::ASSIST);

    manCLERK.ShowNameCardInfo();
    manSENIOR.ShowNameCardInfo();
    manASSIST.ShowNameCardInfo();

    return 0;
}