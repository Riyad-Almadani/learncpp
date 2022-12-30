//Simple if else example
#include <iostream>
int main()
{
  int a = 0;
  int b = 0;
  
  std::cout << "\n" << std::endl;

  std::cout << "Please enter two numbers\n";
  std::cin >> a >> b;

  if(a < b) // condition
            // 1st alternative (taken if condition is true):
        std::cout << "max numbers(" << a << "," << b << ") is " << b <<"\n" << std::endl;
  else 
        // 2nd alternative (taken if condition is false):
        std::cout << "max numbers(" << a << "," << b << ") is " << a << "\n" << std::endl;
      
       

  
}
