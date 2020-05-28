#include <iostream>

using namespace std;
float PI=3.14159;
int Test=0;

// Function to find the Area of Circle and check the validation of radius
float AreaOfCircle(int Radius)
{
    float Area;
    char Index;
    if (Radius<=0)
    {
        cout<<"ERROR: Radius must be Greater then zero"<<endl;
        cout<<"Please choose again, "<<endl;
        Test=1;
    }
    else
    {
        Area=PI*Radius*Radius;
        cout<<"Area of Circle is: "<<Area<<"-meter square"<<endl;
        return Area;
    }



}
// Function to find the Area of Rectangle and check the validation of Length and Width
float AreaOfRectangle(int Length, int Width)
{
    float Area;
    if (Length<=0 || Width <=0)
    {
        cout<<"ERROR: Length and Width must be Greater then zero"<<endl;
        cout<<"Please choose again, "<<endl;
        Test=1;
    }
    else
    {
        Area=Length*Width;
        cout<<"Area of Rectangle is: "<<Area<<" meter square"<<endl;
        return Area;
    }


}
// Function to find the Area of Triangle and check the validation of Base and Height
float AreaOfTriangle(int Base, int Height)
{
    float Area;
    if (Base<=0 || Height <=0)
    {
        cout<<"ERROR: Base and Height must be Greater then zero"<<endl;
        cout<<"Please choose again, "<<endl;
        Test=1;
    }
    else
    {
        Area=0.5*Base*Height;
        cout<<"Area of Triangle is: "<<Area<<" meter square"<<endl;
        return Area;
    }

}

// Main function

int main()
{

    //Declaration of Variables
    int Choice,Length,Width,Base,Height,Radius;




    cout<<"-------------Welcome to Geometry Calculator-------------"<<endl;

   //Starting loop for validation check. If user enters the wrong choice then they will receive error message.
   // loop starts from initial point where user make their choice
   do{
    Test=0;
    // Asking for User choice
    cout<<"1) Calculate the area of Circle."<<endl;
    cout<<"2) Calculate the area of Rectangle."<<endl;
    cout<<"3) Calculate the area of Triangle."<<endl;
    cout<<"4) Quit."<<endl;
    cout<<endl;
    cout<<" Enter the choice (1-4): ";
    cin>>Choice;

    // Checking the choice of user

     if (Choice==1)
     {
        cout<<"Enter the radius of Circle in meter: ";
        cin>>Radius;
        // Calling the function AreaOfCircle to calculate Area
        AreaOfCircle(Radius);
     }

     else if (Choice==2){
        cout<<"Enter the Length of Rectangle in meter: ";
        cin>>Length;
        cout<<"Enter the Width of Rectangle in meter: ";
        cin>>Width;
        // Calling the function AreaOfRectangle to calculate Area
        AreaOfRectangle(Length,Width);
     }
     else if(Choice==3){
        cout<<"Enter the Base of Triangle in meter: ";
        cin>>Base;
        cout<<"Enter the Height of Triangle in meter: ";
        cin>>Height;
        // Calling the function AreaOfTriangle to calculate Area
        AreaOfTriangle(Base,Height);
     }
      else if(Choice =4){
        Test=0;
      }
        else
        {
        cout<<"ERROR: Please only select number from 1 to 4 "<<endl;
        Test=1;

     }



   }while(Test==1);
    return 0;

}




