#include <iostream>

using namespace std;

main()
{
    string characters[4];

    // bool flag=false;
    for (int i = 0; i < 4; i++)
    {
        cout<<"ENTER WORD AT INDEX "<<i<<" :";
        cin>>characters[i];

    }
    if(characters[0]==characters[0+1]&& characters[0]==characters[0+2]&& characters[0]==characters[0+3]){
           cout<<"TRUE";
        }
    else{
        cout<<"FALSE";
    }
}