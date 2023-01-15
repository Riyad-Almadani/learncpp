// f = 9/5 * c + 32
// c = (f - 32) * 9/5 
#include <iostream>

int main()
{
  double dc, df;
  
  if(dc) {
 
        std::cout << "Enter degree celsius to converted to fahrenheit: ";
        std::cin >> dc;
        df = 9.0/5 * dc + 32;
        std::cout << "Degree fahrenheit is " << df << "\n";
  
  }else if(df) {
       std::cout << "Enter degree of fahrenheit to converted to celsius: ";
       std::cin >> df;
       dc = (df - 32) * 9.0/5;
       std::cout << "Degree of celsius is " << dc << "\n";
   

}
}
