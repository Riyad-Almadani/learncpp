// read name and age (2nd version)
#include <iostream>
#include <string.h>
using namespace std;

int main(){

  cout << "Please enter your first nmae and age\n";

  string first_name = "???";
  double age = -1;

  cin >> first_name >> age;
  double age_in_months = age * 12;
  cout << "Hello, " << first_name << "(you age in months " << age_in_months <<")\n";
}
