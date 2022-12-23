#include<iostream>

using namespace std;

main(){

    float initialVelocity;
    float time;
    float acceleration;	
    float finalVelocity;

  cout<<"Enter Initial Velocity: ";
  cin>>initialVelocity;

  cout<<"Enter Time: ";
  cin>>time;

  cout<<"Enter Acceleration: ";
  cin>>acceleration;

  finalVelocity=(initialVelocity + (acceleration * time));

  cout<<"Final Velocity: "<<finalVelocity;

  return 0;
}

