#include<iostream>
#include<string>


using namespace std;

main(){
    string name;
    float subject1;
    float subject2;
    float subject3;	
    float subject4;
    float subject5;
    float add;
    float percentage;

  cout<<"Enter Your Name: ";
  cin>>name;

  cout<<"Enter Subject 1 Marks: ";
  cin>>subject1;

  cout<<"Enter Subject 2 Marks: ";
  cin>>subject2;

  cout<<"Enter Subject 3 Marks: ";
  cin>>subject3;

  cout<<"Enter Subject 4 Marks: ";
  cin>>subject4;

  cout<<"Enter Subject 5 Marks: ";
  cin>>subject5;

  add=subject1+subject2+subject3+subject4+subject5;
 
  percentage=((add/500)*100);

  cout<<"Percentage Of "<<name<<" is "<<percentage;

  return 0;

}
  

   