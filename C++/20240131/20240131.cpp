#include <iostream>

/*using namespace std;

#define ID_LEN 20
#define MAX_SPD 200
#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10

struct Car{
    char gameID[ID_LEN];
    int fuelGauge;
    int carSpeed;
};

void ShowCarState(const Car &car){
    cout<<"owner ID : "<<car.gameID<<endl;
    cout<<"feul : "<<car.fuelGauge<<endl;
    cout<<"speed : "<<car.carSpeed<<endl;
}

void Accel(Car &car){
    if(car.fuelGauge <= 0){
        return;
    }
    else{
        car.fuelGauge -= FUEL_STEP;
    }

    if(car.carSpeed + ACC_STEP >= MAX_SPD){
        car.carSpeed = MAX_SPD;
    }
    
    car.carSpeed += ACC_STEP;
}

void Break(Car &car){
    if(car.carSpeed<BRK_STEP){
        car.carSpeed = 0;
        return;
    }

    car.carSpeed -= BRK_STEP;
}

int main(void){
    Car run99 = {"run99",100,0};
    Accel(run99);
    Accel(run99);
    ShowCarState(run99);

    Break(run99);
    ShowCarState(run99);

    Car sped77 = {"sped77",100,0};
    Accel(sped77);
    Break(sped77);
    ShowCarState(sped77);

    return 0;
}*/

/*using namespace std;

#define ID_LEN 20
#define MAX_SPD 200
#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10

struct Car{
    char gameID[ID_LEN];
    int fuelGauge;
    int carSpeed;

    void ShowCarState(const Car &car){
    cout<<"owner ID : "<<car.gameID<<endl;
    cout<<"feul : "<<car.fuelGauge<<endl;
    cout<<"speed : "<<car.carSpeed<<endl;
    }

    void Accel(Car &car){
        if(car.fuelGauge <= 0){
            return;
        }
        else{
            car.fuelGauge -= FUEL_STEP;
        }

        if(car.carSpeed + ACC_STEP >= MAX_SPD){
            car.carSpeed = MAX_SPD;
        }
        
        car.carSpeed += ACC_STEP;
    }

    void Break(Car &car){
        if(car.carSpeed<BRK_STEP){
            car.carSpeed = 0;
            return;
        }

        car.carSpeed -= BRK_STEP;
    }
};

int main(void){
    Car run99 = {"run99",100,0};
    run99.Accel(run99);
    run99.Accel(run99);
    run99.ShowCarState(run99);

    run99.Break(run99);
    run99.ShowCarState(run99);

    Car sped77 = {"sped77",100,0};
    sped77.Accel(sped77);
    sped77.Break(sped77);
    sped77.ShowCarState(sped77);

    return 0;
}*/

/*using namespace std;

struct Point{
    int xpos;
    int ypos;

    void MovePos(int x, int y){
        xpos = xpos + x;
        ypos = ypos + y;
    }

    void AddPoint(const Point &pos){
        xpos = xpos + pos.xpos;
        ypos = ypos + pos.ypos; 
    }

    void ShowPosition(){
        cout<<"["<<xpos<<","<<ypos<<"]"<<endl;
    }
};

int main(){
    Point pos1={12,4};
    Point pos2={20,30};

    pos1.MovePos(-7,10);
    pos1.ShowPosition();

    pos1.AddPoint(pos2);
    pos1.ShowPosition();

    return 0;
}*/

// using namespace std;

// class Calculator{
//     private:
//         int addnum;
//         int divnum;
//         int minnum;
//     public:
//         void Init();
//         double Add(double x,double y);
//         double Div(double x,double y);
//         double Min(double x,double y);
//         void ShowOpCount();  
// };

// void Calculator::Init(){
//     addnum = 0;
//     divnum = 0;
//     minnum = 0;
// }

// double Calculator::Add(double x,double y){
//     addnum++;
//     return x+y;
// }

// double Calculator::Div(double x,double y){
//     divnum++;
//     return x/y;
// }

// double Calculator::Min(double x,double y){
//     minnum++;
//     return x-y;
// }

// void Calculator::ShowOpCount(){
//     cout<<"+ : "<<addnum<<" - : "<<minnum<<" / : "<<divnum<<endl;
// }

// int main(){
//     Calculator cal;
//     cal.Init();
//     cout<<"3.2 + 2.4 = "<<cal.Add(3.2,2.4)<<endl;
//     cout<<"3.5 / 1.7 = "<<cal.Div(3.5,1.7)<<endl;
//     cout<<"2.2 - 1.5 = "<<cal.Min(2.2,1.5)<<endl;
//     cout<<"4.9 / 1.2 = "<<cal.Div(4.9,1.2)<<endl;
//     cal.ShowOpCount();
//     return 0;
// }

#include <cstring>

using namespace std;

class Printer{
    private:
        char ppp[30];
    public:
        void SetString(char* str);
        void ShowString();
};

void Printer::SetString(char* str){
    strcpy(ppp,str);
}

void Printer::ShowString(){
    cout<<ppp<<endl;
}

int main(){
    Printer pnt;
    pnt.SetString("hello world!");
    pnt.ShowString();

    pnt.SetString("i love C++");
    pnt.ShowString();

    return 0;
}