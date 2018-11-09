#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {

  string  y;

   cout <<"Please enter your name: ";
   cin >> y;
  if (y == "Bob" || y  == "Jane" )
  {
    cout << "Hi "<< y << '\n';
  }
  else 
  {
    cout << "Acsess denied" << '\n';
  }
  system("pause");
  return 0;
}