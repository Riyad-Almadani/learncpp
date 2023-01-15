#include <iostream>

int main()
{
  char ch = 'a';
  int i = 0;

  while (i < 26) {
    std::cout << (char)(ch + i) << "\t" << (ch + i) << "\n";
    std::cout << "===========" << "\n";
    ++i;
  
  }
}
