#include <iostream>
#include <string>

using namespace std;

int main(){

  cout << "Please enter your first name and age\n";
  
  string firstName;
  int age;
  
  cin >> firstName;
  cin >> age;

  cout << "Hello, " << firstName << " (age " << age << ")\n";
}
