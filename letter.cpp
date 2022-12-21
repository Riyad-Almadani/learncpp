#include <iostream>
#include <string>
#include "std_lib_facilities.h"
int main()
{
  std::cout << "Enter your name: \n";
  std::string your_name;
  std::cin >> your_name;
  std::cout << "\n";
  std::cout << "Please enter name for a person you want to write letter for him/her: \n";
  std::string first_name;
  std::string friend_name;
  char friend_sex {0};
  std::cin >> first_name;
  std::cout << "Enter your friend name\n";
  std::cin >> friend_name;
  std::cout << "Choose your friend gander m for male f for female?\n";
  std::cin >> friend_sex;
  int age {0};
  std::cout << "Enter the age of " << first_name <<  " \n";
  std::cin >> age; 
  std::cout << "  I heard you just had a birthday and you are " << age << " years old.\n\n";
  if (age <= 0 || age >= 110) {
      simple_error("you'r kidding!");
  }else if (age < 12) {
    std::cout << "Next year you will be " << age + 1 << " years old.\n";
  }else if (age == 17) {
    std::cout << "Next year you will be able to vote.\n";
  }else if (age > 70) {
    std::cout << "I hope you are enjoying retirment.\n";
  } 
  std::cout << "\n";

  std::cout << "Dear, " << first_name << "\n\n";
  std::cout <<"   How are you? I am fine. I miss you.\n";
  std::cout << "How are you doing? Sorry it took me too long to long to write back.\n";

  std::cout << "How has summer been? What have you been doing during the summer?\nOn my part, I have been traveling around the country with my family.\nI made new friends his name " << friend_name << " and new memories.\n";

  std::cout<< "I miss you.I cannot wait to go back to school and see you again.\n" << "I also want to tell you about all my travel experiences when we are back in school.\n" << "I will send you some of my pictures.\n"

<< "I hope all is well with you. Send your family my love. See you soon.\n"

<< "Love,\n\n" << your_name << "\n\n";
  if(friend_sex == 'm'){
       std::cout << "If you see " << friend_name << " please ask him to call me.\n\n";
  }else{ 
     std::cout << "If you see " << friend_name << " please ask her to call me.\n\n";  
}

}




