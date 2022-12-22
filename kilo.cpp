#include <iostream>

int main()
{
  double miles{0};
  double kilometers{0};
  
  std::cout << "\n\tThis program convert miles to kilometers\n\n";
  std::cout << "\t==========================================\n\n";
  std::cout << "\tEnter a number of miles: ";
  std::cin >> miles;
  kilometers = miles * 1.609;
  std::cout << "\n\n";
  std::cout << "\tMiles is " << miles << " converted to Kilometers is " << kilometers << " kilometers\n\n";
}

