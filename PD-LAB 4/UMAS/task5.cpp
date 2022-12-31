#include <iostream>

using namespace std;

void project(int);
void select1(string studentName, int matricMarks, int firstYear, int ecatMarks);

main(){
       int option;
/*
       string studentName; 
       int matricMarks; 
       int firstYear; 
       int ecatMarks;
*/
       project(option);
}


void project(int option){

  cout<<"           **********************************************************************"<<endl;
  cout<<"           *                  UNIVERSITY ADMISSION MANAGEMENT SYSTEM            *"<<endl;
  cout<<"           **********************************************************************"<<endl<<endl<<endl;

  cout<<"           SELECT ONE OF THE FOLLOWING OPTIONS NUMBER:-                          "<<endl;
  cout<<"           1- ADD NEW STUDENT RECORD                                             "<<endl;
  cout<<"           2- VIEW ALL RECORDS                                                   "<<endl;
  cout<<"           3- SHOW RECORDS IN DESCENDING ORDER                                   "<<endl;
  cout<<"           4- EXIT                                                               "<<endl;
  cout<<"           YOUR OPTION: ";
  cin>>option;
      string studentName; 
       int matricMarks; 
       int firstYear; 
       int ecatMarks;
    if(option==1){
    select1(studentName,matricMarks,firstYear,ecatMarks);    
    }

} 
 
void select1(string studentName, int matricMarks, int firstYear, int ecatMarks){
  cout<<"           ENTER STUDENT NAME:  ";
  cin>>studentName;
  cout<<"           ENTER OBTAINED MARKS IN MATRIC:  ";
  cin>>matricMarks; 
  cout<<"           ENTER OBTAINED MARKS IN FIRST YEAR:  ";
  cin>>firstYear;
  cout<<"           ENTER ECAT MARKS:  ";
  cin>>ecatMarks;     
}         
 

