#include<iostream>

using namespace std;
void printMenu(int option);
void calculateAggregate(string name , int matricMarks , int interMarks , int ecatMarks);
void compareMarks(string nameStd1, int ecatMarksStd1 , string nameStd2, int ecatMarksStd2);
int main (){
    int option;
    printMenu(option);
    } 


void printMenu(int option){

  cout<<"           **********************************************************************"<<endl;
  cout<<"           *                  UNIVERSITY ADMISSION MANAGEMENT SYSTEM            *"<<endl;
  cout<<"           **********************************************************************"<<endl<<endl<<endl;
  cout<<"           SELECT ONE OF THE FOLLOWING OPTIONS NUMBER:-                          "<<endl;
  cout<<"           1- ADD NEW STUDENT RECORD                                             "<<endl;
  cout<<"           2- VIEW ALL RECORDS                                                   "<<endl;
  cout<<"           3- COMPARE MARKS & ASSIGN ROLL NO                                     "<<endl;
  cout<<"           4- EXIT                                                               "<<endl;
  cout<<"           YOUR OPTION: ";
  cin>>option;
  string name; int matricMarks; int interMarks ; int ecatMarks;
  string nameStd1; int ecatMarksStd1; string nameStd2; int ecatMarksStd2;   
    if(option==1){
    calculateAggregate( name,matricMarks ,interMarks,ecatMarks);
  }
  if (option==4){
    system("exit");
  }
  if(option==3){
    compareMarks(nameStd1, ecatMarksStd1 , nameStd2, ecatMarksStd2);
  }
} 

  void calculateAggregate(string name , int matricMarks , int interMarks , int ecatMarks){
        cout<<"            Enter Student Name: ";
        cin>>name;
        cout<<"            Enter Matric Marks (Out Of 1100): ";
        cin>>matricMarks;
        cout<<"            Enter Inter Marks (out of 550): ";
        cin>>interMarks;
        cout<<"            Enter ECAT Marks (out of 400): ";
        cin>>ecatMarks;

        int aggregate = ((matricMarks * 30) /1100) + ((interMarks * 30)/550) + ((ecatMarks * 40)/400);

        cout<<"            1Your Aggregate "<<aggregate<<endl;
  }

  void compareMarks(string nameStd1, int ecatMarksStd1 , string nameStd2, int ecatMarksStd2){

        cout<<"            Enter First Student Name: ";
        cin>>nameStd1;  
        
        cout<<"            Enter First Student ECAT Marks: ";
        cin>>ecatMarksStd1;

        cout<<"            Enter Second Student Name: ";
        cin>>nameStd2;              

        cout<<"            Enter Second Student ECAT Marks: ";
        cin>>ecatMarksStd2;

        if(ecatMarksStd1 >= ecatMarksStd2){
            cout<<"                     1- "<<nameStd1<<endl;
            cout<<"                     2- "<<nameStd2<<endl;
        }
        if(ecatMarksStd1 <= ecatMarksStd2){
            cout<<"                     1- "<<nameStd2<<endl;
            cout<<"                     2- "<<nameStd1<<endl;
        }
  }
