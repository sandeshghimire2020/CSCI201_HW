#include <iostream>

using namespace std;

int main()
{
    int Size=0;
    int Max1,Max2,Max3;
    int Pointer1,Pointer2,Pointer3;

    //Initializing the array and implementing the validation.

    do{
    cout<<"Enter the size of array: ";
    cin>>Size;
    cout<<endl;
    if (Size<3){
        cout<<"ERROR: Please enter array size greater than 3!!!!"<<endl;
    }
    }while (Size<3);
    cout<<endl;
    int arr[Size];
    for (int i=0;i<Size;i++){
        cout<<"Enter the value for: arr"<<"["<<i<<"]";
        cin>>arr[i];

    }
    cout<<endl;

    // Finding the first maximum number.

    Max1=arr[0];
    for (int i=0;i<Size;i++){
        if (arr[i]>Max1){
            Max1= arr[i];
            Pointer1=i;
        }
    }

    //Checking if the maximum number is in 1st place or not.
    //if Max1 is in 1st place of array then initialize Max2 to 2nd place of array.

    if (Max1==arr[0]){
        Max2=arr[1];
    }
    else{
        Max2=arr[0];
    }

    //Finding out the second largest number in array.

    for (int i=0; i<Size;i++){

        if(arr[i]<Max1 && arr[i]>Max2){
            Max2=arr[i];
            Pointer2=i;

        }
        }

    //Checking if the 1st largest and 2nd largest number is in 1st or 2nd place or not.
    //if Max1 and max2 are in 1st or 2nd place of array then initialize Max2 to 3rd place of array.


    if(Max1==arr[0]){
        Max3=arr[1];
    }
    else if (Max1==arr[1]){
        Max3=arr[0];
    }
    else{
        Max3=arr[0];
    }
    if(Max2==arr[0]){
        Max3=arr[1];
    }
    else if (Max2==arr[1]){
        Max3=arr[0];
    }
    else{
        Max3=arr[0];
    }

    if ((Max1==arr[0] || Max1==arr[1])&&(Max2==arr[0] || Max2==arr[1])){
        Max3=arr[2];}


    //Finding out the third largest number from the array.


    for (int i=0; i<Size;i++){

        if(arr[i]<Max1 && arr[i]>Max3&& arr[i]<Max2){
            Max3=arr[i];
            Pointer3=i;

        }
        }
    //Displaying the third largest number.

    cout<<"-------------------------------------------------------"<<endl;

    cout<<"The third largest element in array is: "<<Max3<<endl;



    return 0;
}


