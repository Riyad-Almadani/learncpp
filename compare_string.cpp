#include <iostream>
#include <string>
using namespace std;
// read and compare names 

int main()
{
  cout << "Please enter tow names\n";
  string first;
  string second;
  cin >> first >> second;
  if(first == second)
    cout << " that's the same name twice\n";
  if(first < second)
    cout << first << " is alphabetically befor " << second << "\n";
  if(first > second)
    cout << first << " is alphabetically after " << second << "\n";
}
