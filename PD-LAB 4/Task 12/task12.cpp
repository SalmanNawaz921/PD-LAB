#include<iostream>

using namespace std;

void flowerShop(int redRoses, int whiteRoses , int tulips);

main(){

    int redRoses , whiteRoses , tulips;

    cout<<"Enter Number Of Red Roses: ";
    cin>>redRoses;

    cout<<"Enter Number Of White Roses: ";
    cin>>whiteRoses;


    cout<<"Enter Number Of Tulips: ";
    cin>>tulips;

    flowerShop(redRoses , whiteRoses , tulips);



}

void flowerShop(int redRoses, int whiteRoses , int tulips){

    float redPrice = 2.00;
    float whitePrice = 4.10;
    float tulipPrice = 2.50;

   float price = redRoses * redPrice + whiteRoses * whitePrice + tulips * tulipPrice;

    if(price > 200){
 
         float totalPrice = price - ((price*20)/100);
         cout<<"Original Price: "<<price<<endl;            
         cout<<"Price After Discount: "<<totalPrice<<endl;     

	}
    if(price == 200){
            
         cout<<"TOTAL PRICE IS: "<<price<<endl;     

	}    

}
