#include <iostream>

using namespace std;

// class Sosimple{
//     private:
//         int num1;
//         int num2;
//     public:
//         Sosimple(int n1, int n2) : num1(n1), num2(n2){
//             cout<<"test"<<endl;
//         }
//         Sosimple(Sosimple &copy) : num1(copy.num1), num2(copy.num2){
//             cout<<"Called Sosimple"<<endl;
//         }
//         void ShowSimpleData(){
//             cout<<num1<<endl;
//             cout<<num2<<endl;
//         }
// };

// int main(){
//     Sosimple sim1(15,30);
//     Sosimple sim2 = sim1;
//     sim2.ShowSimpleData();
//     return 0;
// }

class NameCard{
    private:
        char * name;
        char * comp;
        char * number;
        char * pos;
    public:
        NameCard(char * Iname,char * Icomp,char * Inumber,char * Ipos){
            name = Iname;
            comp = Icomp;
            number = Inumber;
            pos = Ipos;
        }
        void ShowNameCardInfo(){
            cout<<name<<endl;
            cout<<comp<<endl;
            cout<<number<<endl;
            cout<<pos<<endl;
        }
};

int main(){
    
    NameCard manCLERK("lee","abc","010-1111-2222","CLERK");
    NameCard copy1 = manCLERK;
    NameCard manSENIOR("hong","qqq","010-4444-4444","SENIOR");
    NameCard copy2 = manSENIOR;

    copy1.ShowNameCardInfo();
    copy2.ShowNameCardInfo();

    return 0;
}