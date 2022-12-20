#include <iostream>
#include <string>
using namespace std;

int main()
{
  
  int number_of_words = 0;
  string previous = " "; // previous word;initialized to not a word
  string current;        // current word 
  while(cin >> current) {
        ++number_of_words;            // read a stream of words 
        if (previous == current)
              cout << "word numer " << number_of_words
                    << " repeated: " << current << "\n";
        previous = current;
  }
}
