#include<iostream>
#include<string>


using namespace std;

 main(){

  string movieName;
  int adultTicket;
  int childTicket;
  int noOfAdults;
  int noOfChilds;
  int percentOfCharity;
  int ticketsSold;
  int charity;
  

 cout<<"Enter The Movie Name: ";
 cin>>movieName;

 cout<<"Enter The Ticket Price For Adults: ";
 cin>>adultTicket;

 cout<<"Enter The Ticket Price For Children: ";
 cin>>childTicket;

 cout<<"Enter The Number For Tickets Of Adults: ";
 cin>>noOfAdults;

 cout<<"Enter The Number For Tickets Of Children: ";
 cin>>noOfChilds;

 cout<<"Enter The Percentage Of Charity To Donate: ";
 cin>>percentOfCharity;

 cout<<"-------------------------------------------"<<endl;

 ticketsSold=adultTicket*noOfAdults + childTicket*noOfChilds;

 charity=(ticketsSold-(ticketsSold/percentOfCharity));

 cout<< "Total Amount: "<<ticketsSold<<endl;
 cout<< "Amount Donated: "<<charity;

 return 0;

}

   

 

