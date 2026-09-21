#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    // holds 80 characters + null character
  char input[81]; //creates character array called input 
  char cleaned[81]; // creates character array called cleaned
  char backwards[81]; //creates character array called backwards 

    cout << "Enter a series of characters (80 characters max): "; //entry for user
    cin.getline(input, 81); //reads the line and stores it inside input 

    int length = 0;

    // remove spaces and punctuation
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (isalnum(input[i]))
        {
	  cleaned[length] = tolower(input[i]); // puts characters into cleaned and lowercase
            length++;
        }
    }

    cleaned[length] = '\0';

    // reverse the cleaned string
    for (int i = 0; i < length; i++)
    {
      backwards[i] = cleaned[length - 1 - i];  //taking characters from cleaned and putting them into backwards 
    }

    backwards[length] = '\0';

    // check if they're the same
    if (strcmp(cleaned, backwards) == 0) // finally compares the string 
    {
        cout << "Palindrome." << endl;
    }
    else
    {
        cout << "Not a palindrome." << endl;
    }

    return 0;
}
