#include<iostream>

using namespace std;

void printNumbers(int numbers);

main(){
int numbers;

cout<<"ENTER NUMBER: ";
cin>>numbers;

printNumbers(numbers);

return 0; 

}

void printNumbers(int numbers){
    int no=0;
    for(int count=1; count<=numbers ; count++){

        if(count%4==0){
            no=count*10;
            cout<<no;

        if(count!=numbers){
            cout<<",";
        }
        continue;
        }
       cout<<count<<",";
    
    }
}