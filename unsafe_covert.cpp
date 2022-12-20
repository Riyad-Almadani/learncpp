#include <iostream>

int main()
{
  int a = 20000;
  char c = a;    // try to squeeze a large int into a small char 
  int b = c ; 

  if(a != b)
       std::cout << "Oops!: " << a << " != " << b  << "\n";
    
  else 
       std::cout << "Wow! We have large characters\n";

 std::cout << "You can't convert large integer to character\n";
}


       

