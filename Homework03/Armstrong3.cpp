#include <iostream>

using namespace std;

int main()
{
    int Index,Rem,Total,Num;


    Num=0;
    cout<<"The Armstrong number between 0 to 500 are listed bellow: "<<endl;
    //Starting the while loop for numbers 0 to 500
        do {
            Index=Num;
            Total=0;
    //second while loop to convert and find Armstrong number
            do {
                 Rem= Index % 10;
                 Total= Total + (Rem*Rem*Rem);
                 Index= Index / 10;
                }while (Index !=0 );

            if (Total == Num){

                    cout<<Num<<endl;
            }
            Num= Num+1;
        }while (Num <= 500);
    return 0;
}

