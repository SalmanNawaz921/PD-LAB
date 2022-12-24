#include<iostream>

using namespace std;

main(){

  int number;
  int rem1;
  int rem2;
  int rem3;
  int quo1;
  int quo2;
  int sum;


  cout<<"Enter Numbers:  ";
  cin>>number;


  rem1= number % 100;
  
  quo1= number / 100;

  rem2= quo1 % 100;
  
  quo2= quo1 / 100;

  rem3= quo2 % 100;

  sum= rem1 + rem2 + rem3;

 cout<<"SUM: "<<sum;

 return 0;

}
  