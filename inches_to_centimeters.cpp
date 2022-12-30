// convert from inches to centimeters or centimeters to inches
#include <iostream>

int main()
{
  constexpr double cm_per_inch = 2.54; // number of centimeters in an inch
  double length = 1;  // length in inches or centimeters
  char unit = 0;

  std::cout << "Please enter a length followed by a unit(c or i):\n";
  std::cin >> length >> unit;
  if(unit == 'i'){
          std::cout << length << " inch == " << cm_per_inch * length << "cm\n";
  }else if (unit == 'c'){ 
          std::cout << length << " centimeter == " << length / cm_per_inch << "in\n" << std::endl;
  } else{ 
          std::cout << "Sorry, I don't know a unit called " << unit << "\n";

}
}

