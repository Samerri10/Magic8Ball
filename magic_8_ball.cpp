#include <iostream>
#include <cstdlib>


//This 8-ball is mean, like my sister.....
int main() {

  std::cout << "MAGIC 🎱 SAYS: \n\n";

  srand(time(NULL));

  int choice = std::rand() % 20;

  if (choice == 0) {
    std::cout << "Sure.\n";

  }
  else if (choice == 1) {
    std::cout << "No way, Jose.\n";

  }
  else if (choice == 2) {
      std::cout << "No doubt.\n";

  }
  else if (choice == 3) {
      std::cout << "That's just stupid.\n";

  }
  else if (choice == 4) {
      std::cout << "Meh.\n";
  }
  
  else if (choice == 5) {
      std::cout << "Nah.\n";
  }

  else if (choice == 6) {
      std::cout << "I guess.\n";
  }

  else if (choice == 7) {
      std::cout << "Eat dirt and die, trash.\n";
  }

  else if (choice == 8) {
      std::cout << "K.\n";
  }

  else if (choice == 9) {
      std::cout << "Better not tell you now.\n";
  }

  else if (choice == 10) {
      std::cout << "Who knows.\n";
  }

  return 0;
}