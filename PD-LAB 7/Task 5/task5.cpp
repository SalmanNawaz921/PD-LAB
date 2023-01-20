#include <iostream>

using namespace std;

int printTriangle(int dots);

main()
{

  int dots;

  cout << "ENTER NO OF DOTS: ";
  cin >> dots;

  cout<<printTriangle(dots);

  return 0;
}

int printTriangle(int dots)
{
  int add = 0;
  for (int count = 1; count <= dots; count++)
  {
    add = add + count;
  }
  return add;
}