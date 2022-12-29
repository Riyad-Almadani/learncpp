#include <iostream>

int main()
{
  std::cout << "Enter two integer numbers\n";
  int val1;
  int val2;
  std::cin >> val1 >> val2;
  if(val1 < val2) {
      std::cout << val1 << " is smaller\n";
  }else {
       std::cout << val1 << " is larger\n";
  }
  int sum = val1 + val2;
  std::cout << "Sum is: " << sum << "\n";
  int diff = val1 - val2;
  std::cout << "Difference is " << diff << "\n";
  int product = val1 * val2;
  std::cout << "Product is " << product << "\n";
  int ratio1 = val1 * 2;
  int ratio2 = val2 * 2;
  std::cout << "Ratio is " << ratio1 << ":" << ratio2 << "\n\n";
}
