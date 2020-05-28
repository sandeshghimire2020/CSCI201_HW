#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

string Name[6];
string Team[6];
int Score[6];
int Display(int,int);
void Determine();

int main()
{

    ifstream inf;
    inf.open("scores.txt");


    if (inf.fail())
        {
        cout <<"\nFILE IS MISSING!";

        }
    string IName,ITeam;
    int Iscore;
    int index=0;


    while (inf && !inf.eof())
    {

        inf>>IName>>ITeam>>Iscore;

        Name[index]=IName;

        Team[index]=ITeam;

        Score[index]=Iscore;
        index+=1;

    }

    inf.close();
    Determine();


    return 0;
}

int Display(int Bsum, int Wsum){


    if (Bsum>Wsum)
            {
                cout<< "Winning Team: Blue"<<endl;
                cout<<"Player Score"<<endl;
                for (int i=0;i<=6;i++)
                {
                    if (Team[i]=="Blue"){

                        cout<< Name[i]<<" "<<Score[i]<<endl;

                    }
                }
            }

    else{
        cout<<"Winning Team: White"<<endl;
        cout<<"Player Score"<<endl;

    for (int i=0;i<=6;i++)
        {
            if (Team[i]=="White"){

                cout<< Name[i]<<" "<<Score[i]<<endl;

            }
        }
    }
    return 0;
}

void Determine()
{

    int Bsum=0,Wsum=0;
        for (int i=0;i<6;i++){
            if (Team[i]=="Blue"){
                Bsum=Bsum+int(Score[i]);
            }
            else{
                Wsum=Wsum+int(Score[i]);
            }
        }
        Display(Bsum,Wsum);

}




