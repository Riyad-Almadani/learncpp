#include <iostream>
     
     int main()
     {
       char ch = 'A'; 

       for (int i = 0; i < 26; ++i) {
          std::cout << (char)(ch + i) << "\t" << (ch + i) << "\n";
          std::cout << "===========" << "\n";
           ++i;
 
   }
 }
      
