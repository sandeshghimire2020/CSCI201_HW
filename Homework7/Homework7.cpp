#include <iostream>
#include <string>

 using namespace std;

 struct DateRec{
     int Year;
     int Month;
     int Day;
 };
 struct BookRec
 {
 string title;
 string author;
 string publisher;
 float cost;
 DateRec publishDate;
 };

 int main()
 {
 //declare Array
 BookRec myBook[5];

 //Read in all information for all 5 books
 int j=1;
 for (int i=0;i<5;i++){


     cout <<"Enter book title of book "<<j<<": ";
     cin>>myBook[i].title;
     cout <<"Enter book author of "<<"book "<<j<<": ";
     cin>> myBook[i].author;
     cout <<"Enter publisher of "<<"book "<<j<<": ";
     cin>> myBook[i].publisher;
     cout <<"Enter cost of book of "<<"book "<<j<<": ";
     cin >> myBook[i].cost;
     cin.ignore(1);
     cout<<"Enter publish Year of Book "<<j<<": ";
     cin>> myBook[i].publishDate.Year;
     cout<<"Enter publish Month of Book "<<j<<": ";
     cin>> myBook[i].publishDate.Month;
     cout<<"Enter publish Day of Book "<<j<<": ";
     cin>> myBook[i].publishDate.Day;
     j=j+1;
 }
 //Print out all book information
   cout << endl << endl;

   cout<<"Book Title"<<"\t\t Book Author"<<"\t\t Book Publisher"<<"\t\t Book Cost($)"<<"\t\t Publish Date"<<endl;
    cout<<endl;
  for (int i=0;i<5;i++){

     cout <<myBook[i].title;
     cout <<"\t\t  "<<myBook[i].author;

     cout <<"\t\t  "<<myBook[i].publisher;
     cout <<"\t\t  "<<myBook[i].cost;

     cout <<"\t\t\t  "<<myBook[i].publishDate.Month<<"/"<<myBook[i].publishDate.Year<<"/"<<myBook[i].publishDate.Day<<endl;
  }
return 0;

 }
