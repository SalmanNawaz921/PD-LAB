#include <iostream>

using namespace std;

bool length(string word)
{
    int i = 0;
    bool check = false;
    while (word[i] != '\0')
    {

        i++;
    }

    if (i % 2 == 0)
    {
        check = true;
    }
    else
    {
        check = false;
    }
    return check;
}

main()
{
    string word;

    cout << "ENTER WORD: ";
    getline(cin, word);

    bool check = length(word);
    cout << check;
}