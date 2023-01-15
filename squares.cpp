#include <iostream>
#include "square.h"

int main()
{
  std::cout << "Please enter integer number to squared\n";
  int x = 0;
  std::cin >> x;
  std::cout << square(x) << "\n";

}
