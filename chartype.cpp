#include <iostream>
using namespace std;

int main()
{
  char x;
  cout << "Enter a character: ";
  cin >> x;
  if (( x >= 'A' && x <= 'Z') || ( x >= 'a' && x <= 'z')) {
    char charLower = tolower(x);
    if ( charLower == 'a' || charLower == 'e' || charLower == 'i' || charLower == 'o' || charLower == 'u' ) {
      cout << x << " is a vowel";
    } else {
      cout << x << " is a consonant";
    }  
  } else if ( x >= '0' && x <= '9') {
    cout << x << " is a digit";
  } else if ( x == ',' || x == ':' || x == '!' || x == '.' || x == '"' || x == '(' || x == ')' || x == '[' || x == ']' || x == '{' || x == '}' || x == '?' ) {
    cout << x << " is punctuation";
  } else {
    cout << x << " is unrecognised";
  }
  
}
