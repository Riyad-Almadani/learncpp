#include <iostream>

int main()
{
   std::string previous { "N/A" };
   std::string current  { "N/A" };

   std::cout << "Enter a string of words to compare (\"#\" to end):\n";

   while (std::cin >> current)
   {
      if (current == "#") return 0;

      std::cout << "\n\t" << "Previous: " << previous << '\n';

      std::cout << '\t' << "Current: " << current << '\n';

      if (previous == current)
         std::cout << "\nRepeated word:" << current << '\n';
      previous = current;
   }
}
