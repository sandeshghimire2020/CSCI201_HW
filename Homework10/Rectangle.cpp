#include <iostream>

using namespace std;

class Rectangle{




public:
    Rectangle();
    Rectangle(float,float);
    void setlength(float);
    void setwidth(float);
    float perimeter();
    float area();
    void show();
    int sameArea(Rectangle);
private:
    float Width;
    float Length;


};

Rectangle::Rectangle(){

    Length=0;
    Width=0;
}
Rectangle::Rectangle(float Len,float Wid){
    Length=Len;
    Width=Wid;


}

void Rectangle::setlength(float Len){

    Length=Len;

}
void Rectangle::setwidth(float Wid){

    Width=Wid;

}

float Rectangle::perimeter(){

    float per;
    per= 2*(Length+Width);

    return per;
}
float Rectangle::area(){

    float are;
    are= Length*Width;

    return are;
}
void Rectangle::show(){

    cout<<"Area of Rectangle is: "<< area()<<endl;
    cout<<"Perimeter of Rectangle is: "<< perimeter()<<endl;

}
int Rectangle::sameArea(Rectangle Temp){



    if (Temp.area() == area()){
        return 1;
    }
    else{
        return 0;
    }

}
int main()
{

    Rectangle Rect1(5.0,2.5);
    Rectangle Rect2(5.0,18.9);
    Rect1.show();
    Rect2.show();
    cout<<endl;
    if (Rect2.sameArea(Rect1)==1){
        cout<<"The both triangle have same area."<<endl;
        }
    else{
        cout<<"The both triangle have different area."<<endl;
    }

    Rect1.setlength(15);
    Rect1.setwidth(6);
    cout<<endl;
    cout<<endl;

    Rect1.show();
    Rect2.show();
    cout<<endl;
    if (Rect2.sameArea(Rect1)==1){
        cout<<"The both triangle have same area."<<endl;
        }
    else{
        cout<<"The both triangle have different area."<<endl;
    }

    return 0;
}
