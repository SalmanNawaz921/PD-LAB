#include <iostream>

using namespace std;

main()
{

  string word1 = "";
  string word2 = "";

  cout << "ENTER WORD 1: ";
  getline(cin, word1);

  cout << "ENTER WORD 2: ";
  getline(cin, word2);

  int count = 0;
  int add = 0;
  bool flag = false;

  for (int i = 0; word1[i] != '\0'; i++)
  {
    for (int j = 0; word2[j] != '\0'; j++)
    {
      if (word1[i] == word2[j])
      {
        count++;
        word2[j] = '0';
        break;
      }
    }
  }

  cout << "SIMILAR CHARACTERS IN 2 ARRAYS ARE " << count;
}