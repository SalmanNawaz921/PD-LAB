#include<iostream>
using namespace std;

 main(){

  float rp=1.94;
  float veggiesPerKilo;
  float fruitsPerKilo;
  int totalKilosOfVeggies;
  int totalKilosOfFruits;
  float priceOfVeggies;
  float priceOfFruits;
  float fPriceOfVeggies;
  float fPriceOfFruits;


  cout<<"Enter The Price Of Vegetables Per Kilogram: ";
  cin>>veggiesPerKilo; 

  cout<<"Enter The Price Of Fruits Per Kilogram: ";
  cin>>fruitsPerKilo;

  cout<<"Enter The Total Kilograms Of Vegetables: ";
  cin>>totalKilosOfVeggies; 

  cout<<"Enter The Total Kilograms Of Fruits: ";
  cin>>totalKilosOfFruits; 

  priceOfVeggies= veggiesPerKilo * totalKilosOfVeggies;

  priceOfFruits= fruitsPerKilo * totalKilosOfFruits;

  fPriceOfVeggies= priceOfVeggies * rp;
  fPriceOfFruits=  priceOfFruits * rp;

 cout<<"Price Of Vegetable In RPS: "<<fPriceOfVeggies<<endl;
 cout<<"Price Of Fruits In RPS: "<<fPriceOfFruits<<endl;

 return 0;

}
  
  
  

  
