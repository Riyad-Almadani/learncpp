#include <iostream>

int main()

{
  std:: string operation;
  double num1, num2, result;

  std::cout << "Enter operation and to two numbers to calculate: \n";
  std::cin >> operation >> num1 >> num2;
  
  if (operation == "+") {
    result = num1 + num2;
      std::cout << "Sum of two numbers = " << result <<  "\n";
  }else if (operation == "-") {
      result = num1 - num2;
       std::cout << "Minus of two numbers = " << result << "\n";
  
  }else if (operation == "*") {
      result = num1 * num2;
        std::cout << "Multiplication of two numbers = " << result << "\n";
  }else if (operation == "/") {
      result = num1 / num2;
        std::cout << "Divided of two numbers = " << result << "\n";
  }
}
