#include <iostream>

using namespace std;
void ComputeAid(float,float Gpa=2.0);
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
        ComputeAid(tuition);
    }
    else if (Gpa>=3 && Gpa<=4){
        ComputeAid(tuition,Gpa);
    }
    else if(Gpa<0 && Gpa>4)
    {
        cout<<"Invalid GPA. Please enter a value between 0 to 4.0)"<<endl;
    }






    return 0;
}
void ComputeAid(float tuition,float Gpa)
{
    float Aid=0.00;

     if (Gpa>=2 && Gpa< 3)
    {
        Aid= Gpa*tuition/4;
        cout<<"You entitled to receive $"<<Aid<<" financial aid this year."<<endl;
    }
    else if(Gpa>=3 && Gpa<=4)
    {
        Aid= Gpa*tuition/4;
        cout<<"You entitled to receive $"<<Aid<<" financial aid this year."<<endl;
    }
}
