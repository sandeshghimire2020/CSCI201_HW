#include <iostream>

//Including the sstream to use stringstream function

#include <sstream>

using namespace std;

int main()
{
    int Index,Rem,Total;
    cout<<"The Armstrong number between 0 to 500 are listed bellow: "<<endl;

    // Starting the for loop for number less and equal to 500.

        for (int Num = 0 ; Num<=500 ; Num++){

            Index=Num;
            Total=0;
            // Converting the number to string in order to count it after sometime.
            stringstream ss;
            ss<<Num;
            string Check;
            ss>>Check;
        // starting second for loop to check if it is Armstrong number or not.
        // Checking the size of the string (Check) that was converted into string using stringstream before.
        // condition was implemented in a way that will prevent the extra loops
            for (int i= 1 ; i<=Check.size(); i++){
                 Rem= Index % 10;
                 Total= Total + (Rem*Rem*Rem);
                 Index= Index / 10;
                }

            if (Total == Num){

                    cout<<Num<<endl;
            }

        }
    return 0;
}
