#include <iostream>

int main(){

  int num{0};
  
  std::cout << "Enter interger number: ";
  std::cin >> num;
  if (num % 2 == 0) {
    std::cout << "The value " << num << " is an even\n";
  
  }else {
    std::cout << "The value " << num << " is an odd\n";
  }
}
