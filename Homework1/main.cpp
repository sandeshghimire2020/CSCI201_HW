#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

int main()
{
    // Declaration of variables.

    float Sdiameter, Ldiameter, Sprice, Lprice;
    float LpricePerInches, SpricePerInches;
    cout << "Welcome to the pizza Consumers: " << endl;


    // Asking for User input.

    cout<<"Enter diameter of small pizza(in inches): ";
    cin>>Sdiameter;
    cout<<"Enter price of small pizza: $";
    cin>>Sprice;
    cout<<"Enter diameter of Large pizza(in inches): ";
    cin>>Ldiameter;
    cout<<"Enter price of large pizza: $";
    cin>>Lprice;


    // Calculating the price per square inches of large and small pizza.

    SpricePerInches= Sprice/((22/7)*((Sdiameter/2)*(Sdiameter/2)));
    LpricePerInches= Lprice/((22/7)*((Ldiameter/2)*(Ldiameter/2)));


    cout <<setprecision(2)<<fixed;

    //Output the Diameter and price per square inches of pizza.

    cout<<"Small pizza: "<<endl;
    cout<<"Diameter= "<<int(Sdiameter)<<endl;
    cout<<"Price= $"<<Sprice<<", Price per square inches= $"<<SpricePerInches<<endl;
    cout<<"Large pizza: ";
    cout<<"Diameter= "<<int(Ldiameter)<<endl;
    cout<<"Price= $"<<Lprice<<", Price per square inches= $"<<LpricePerInches<<endl;


    //Comparing the price per inches of pizzas and then displaying the better price.

    if (SpricePerInches>LpricePerInches)
    { cout<<" Large one is better to buy."<<endl;

    }
    else if(SpricePerInches<LpricePerInches)
    {
        cout<<"Small one is better to buy."<<endl;
    }


    return 0;
}
