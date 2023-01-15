#include <iostream>
#include <vector>
int main()
{
  std::vector<int> v;
  for(int i=0; i <= 5; ++i)
     v.push_back(i);
  std::cout << "vector : ";
  for(auto i = v.begin(); i != v.end(); ++i)
    std::cout << *i << " ";
  std::cout << "\n";
}
