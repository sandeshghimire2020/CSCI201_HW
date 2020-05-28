#include <iostream>

using namespace std;


class time{
public:
    int hours;
    int minutes;


public:
    time();
    time(int,int);
    void settime(int,int);
    void showtime();
    time sum(time);


};

time::time(){
hours=0;
minutes=0;
}

time::time(int hrs,int mi){
hours=hrs;
minutes=mi;
}

void time::settime(int hrs,int mi){

    hours=hrs;
    minutes=mi;
}

void time::showtime(){

    cout<<"hours: "<<hours<<" minute: "<<minutes<<endl;
}

time time::sum(time Temp){
int Hou,minu;
time t3;

    Hou=Temp.hours+hours;
    minu=Temp.minutes+minutes;
    t3.hours=Hou;
    t3.minutes=minu;
    return t3;


}

int main()
{
    time t1(6,45);
    time t2(7,10);
    time t3;
    cout<<"Showing the first time: "<<endl;
    t1.showtime();
    cout<<"Showing the second time: "<<endl;
    t2.showtime();

    cout<<endl;
    cout<<"Showing the sum of both time: "<<endl;
    t3=t1.sum(t2);
    t3.showtime();

    return 0;
}
