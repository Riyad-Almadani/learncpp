#include <iostream>

int main(){
   constexpr double yen = 0.0076;
   constexpr double euro = 1.07;
   constexpr double pound = 1.20;
   double dollar = 1;
   char unit;

   std::cout << "Enter number of dollars followed by a unit(Y, E, P) convert to \n";
   std::cin >> dollar >> unit;
   
   switch (unit) {
     case 'y':
         std::cout <<  dollar << " Dollars == " << dollar * yen << " Yens\n";
         break;
     case 'e': 
         std::cout << dollar << " Dollars == " << dollar * euro << " Euros\n";
         break;
     case 'p': 
         std::cout << dollar << " Dollars == " << dollar * pound << " Pounds\n";
         break;
     default:
         std::cout << "Sorry this unit not accepted '" << unit <<  "'\n";
   
   }


   

}
