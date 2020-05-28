#include <iostream>

using namespace std;


class Student{

public:
    int Id;
    char Fname[25],Lname[25];
    float Score[5];
    float Avg;
public:
    void inputStudentInfo(int);
    void displayStudentInfo();
    void computeAvgScore();
};

void Student::inputStudentInfo(int j){

        cout<<"Enter Student ID: ";
        cin>>Id;
        cout<<"Enter Student first name: ";
        cin>>Fname;
        cout<<"Enter student last name: ";
        cin>>Lname;

        for(int ij=1;ij<=4;ij++){
            cout<<"Enter score "<<ij<<" of 4: ";
            cin>>Score[ij];

        }



}
void Student::computeAvgScore(){
    float Total=0.00;
    for (int x=1;x<=4;x++){
      Total=Score[x]+Total;
    }
    Avg=Total/4.00;

}

void Student::displayStudentInfo(){


cout<<Id<<"\t"<<Fname<<" "<<Lname<<"\t";
for(int i=1;i<=4;i++){

    cout<<Score[i]<<" ";
}
cout<<"\t\t"<<Avg<<endl;

}


int main(){

int Temp;
cout<<"Enter the number of students: ";
cin>>Temp;

Student S[Temp];

for(int i=1;i<=Temp;i++){
    S[i].inputStudentInfo(Temp);
    S[i].computeAvgScore();

}
cout<<endl;
cout<<endl;
cout<<"Student details:"<<endl;
cout<<"ID\t"<<"Name\t\t"<<"Exams scores\t"<<"    Average score"<<endl;
cout<<"--\t"<<"----------\t"<<"--------------\t    "<<"-------------"<<endl;
for(int j=1;j<=Temp;j++){
    S[j].displayStudentInfo();
}

return 0;

}






