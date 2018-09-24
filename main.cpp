//Authors:
#include<iostream>
#include<string>
#include<cctype>
#include<array>

using namespace std;
bool isVowel(char);
int main()
{
  //declare variables
  string firstName;
  string lastName;
  //get user input
  cout << "What is your first name? ";
  cin >> firstName;
  cout << "What is your last name? ";
  cin >> lastName;
  //tell fortune
  int lucky = firstName.length();
  cout << "Your lucky number is " << lucky << endl;
  if(isVowel(firstName[0])){
          cout << "You are destined to be famous!" << endl;
  }
  else{
          cout << "You should keep a lower profile!" << endl;
  }
  if(isVowel(lastName.back())){
          cout << "You have already met your true love" << endl;
  }
  cout << "Have a nice day" << endl;
  return 0;
}

bool isVowel(char letter){
        letter = (char) tolower(letter);
        if((letter == 'a') || (letter == 'e') || (letter == 'i') || (letter == 'o') || (letter == 'u')){
                return true;
        }
        else{
                return false;
        }
}
