#include <iostream>

int main()
{
  double d = 0;
  while (std::cin >> d) {   // repeat the statemets below as long as we type in numbers 
    int i = d;    // try to squeeze a double into int 
    char c = i;   // try to squeeze an int into a char
    int i2 = c;
    std::cout << "d == " << d
              << " i == " << i
              << " i2 == " << i2
              << " char(" << c << ")\n";
  
  }
}
