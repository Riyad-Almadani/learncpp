#include <iostream>

int main()
{
  double d1 = 2.3;
  double d2 = d1 + 2; // 2 is converted to 2.0 befor adding 
  if(d1 < 0)
    std::cout << "d1 is negative";
  std::cout << d2 << "\n";
}
