#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    // array can hold up to 80 characters plus the null character
    char input[81];
    char cleaned[81];
    char backwards[81];

    cout << "Enter a series of characters (80 characters max): ";
    cin.getline(input, 81);

    int length = 0;

    // this remove spaces and punctuation and make all letters lowercase
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (isalnum(input[i]))
        {
            cleaned[length] = tolower(input[i]);
            length++;
        }
    }

    // adds the null character to the end of the cleaned array
    cleaned[length] = '\0';

    // this puts the cleaned array into backwards order
    for (int i = 0; i < length; i++)
    {
        backwards[i] = cleaned[length - 1 - i];
    }

    // adds the null character to the backwards array
    backwards[length] = '\0';

    // compares the original cleaned array to the backwards array
    if (strcmp(cleaned, backwards) == 0)
    {
        cout << "Palindrome." << endl;
    }
    else
    {
        cout << "Not a palindrome." << endl;
    }

    return 0;
}
