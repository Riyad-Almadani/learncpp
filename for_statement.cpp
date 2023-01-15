#include <iostream>

// calculate and print a table of squares 0-99 

int main()
{
  for(int i = 0; i < 100; i+=2) // for i in the rang [0:100] print even number 
      std::cout << i << "\t" << i * i << "\n";
 }
