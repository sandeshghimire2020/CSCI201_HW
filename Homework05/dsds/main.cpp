#include <iostream>

using namespace std;
void ComputeAid(double str =0.001,string Gpa="xyz");
int main()
{
    float tuition=0.00;
    float Gpa=0.0;

    cout<<"Enter the amount of your tuition cost, (not to exceed $2,000.00: ";
    cin>>tuition;
    cout<<endl;
    cout<<"Enter your GPA (a value between 0 to 4.0): ";
    cin>>Gpa;
    cout<<endl;

    if (Gpa<2)
        {cout<<"Sorry you do not qualify academically for financial aid."<<endl;
        }
    else if (Gpa>=2 && Gpa<3)
    {
        ComputeAid();
    }
    else if (Gpa>=3 && Gpa<=4){

    }
    else if(Gpa<0 && Gpa>4)
    {
        cout<<"Invalid GPA. Please enter a value between 0 to 4.0)"<<endl;
    }






    return 0;
}
void ComputeAid(float str,string Gpa)
{
    float Aid=0.00;

     if (Gpa>=2 && Gpa< 3)
    {

        cout<<str<<"   "<<Gpa<<endl;
    }
    else if(Gpa>=3 && Gpa<=4)
    {

        cout<<str<<"   "<<Gpa<<endl;
    }
}
