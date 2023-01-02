#include <iostream>

int main()
{
  constexpr double yen = 0.0076;
  constexpr double euro = 1.07;
  constexpr double pound = 1.20;
  double dollar = 1;

  char unit;

  std::cout << "Enter number of dollars followed by a unit(Y, E, P) convert to \n";
  std::cin >> dollar >> unit ;

  if(unit == 'y')
         std::cout <<  dollar << " Dollars == " << dollar * yen << " Yens\n";
  else if(unit == 'e')
         std::cout << dollar << " Dollars == " << dollar * euro << " Euros\n";
  else if(unit == 'p')
        std::cout << dollar << " Dollars == " << dollar * pound << " Pounds\n";
  else 
       std::cout << "Sorry I don't have currency unit you Enter\n";

}
