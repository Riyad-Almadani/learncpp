#include <iostream>

int main(){

  int num1, num2, num3;

  std::cout << "Enter three integer numbers\n";
  std::cin >> num1 >>  num2 >> num3;
  std::cout << "\n";
  if(num1 == num2) {
      std::cout << num1 << ", " << num2 << ", " << num3 << "\n\n";
  
  }else if (num2 == num3) {
      std::cout << num2 << ", " << num3 << ", " << num1 << "\n\n";
  }else if(num1 == num3) {
      std::cout << num1 << ", " << num3 << ", " << num2 << "\n\n";

  }else {
      std::cout << num1 << ", " << num2 << ", " << num3 << "\n\n";
  }

}
