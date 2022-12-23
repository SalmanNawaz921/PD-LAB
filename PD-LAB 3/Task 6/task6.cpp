#include<iostream>

using namespace std;

main(){

   int sizeOfBag;
   int costOfBag;
   int areaOfSquareFeet;
   int fertilizer;
   int area;

   cout<<"Enter The Size Of Fertilizer Bag In Pounds: ";
   cin>>sizeOfBag;

   cout<<"Enter The Cost Of Fertilizer Bag In Pounds: ";
   cin>>costOfBag;
 
   cout<<"Enter The Area Cover By Each Fertilizer Bag In Square Feet: ";
   cin>>areaOfSquareFeet;

   fertilizer=costOfBag/sizeOfBag;
   area=sizeOfBag*areaOfSquareFeet;

  cout<<"Cost Of The Fertilizer Per Pound: "<<fertilizer<<endl;
  cout<<"Cost Of The Fertilizer Area Per Square Feet: "<<area<<endl;


  return 0;

}