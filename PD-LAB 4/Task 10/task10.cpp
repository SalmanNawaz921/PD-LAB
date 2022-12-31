#include<iostream>

using namespace std;

void priceOfTicket(string countryName, int ticketPrice, int finalPrice);

main(){

   string countryName;
   int ticketPrice;
   int finalPrice;

while(true){
   cout<<"ENTER COUNTRY NAME IN CAPITAL LETTERS: ";
   cin>>countryName;

   cout<<"ENTER TICKET PRICE: ";
   cin>>ticketPrice;

   priceOfTicket(countryName, ticketPrice, finalPrice);
   
   }
}

void priceOfTicket(string countryName, int ticketPrice, int finalPrice){

     if(countryName=="PAKISTAN"){	
            finalPrice = ticketPrice - ((ticketPrice*5)/100);
            cout<<"Discounted Price Is: "<<finalPrice<<endl;
           
	}
     if(countryName=="IRELAND"){	
            finalPrice = ticketPrice - ((ticketPrice*10)/100);
            cout<<"Discounted Price Is: "<<finalPrice<<endl;
           
	}
     if(countryName=="INDIA"){	
            finalPrice = ticketPrice - ((ticketPrice*20)/100);
            cout<<"Discounted Price Is: "<<finalPrice<<endl;
	}
     if(countryName=="ENGLAND"){	
            finalPrice = ticketPrice - ((ticketPrice*30)/100);
            cout<<"Discounted Price Is: "<<finalPrice<<endl;
           
	}
     if(countryName=="CANADA"){	
            finalPrice = ticketPrice - ((ticketPrice*45)/100);
            cout<<"Discounted Price Is: "<<finalPrice<<endl;
           
	}	

}