#include <iostream>

int main() {
    int value;
    std::cout << "I will give you the Spanish words for the first five numbers! Please enter an integer between 0 and 5: ";
    std::cin >> value;
    switch (value) {
      case 0:
        std::cout << "cero";
        break;
      case 1:
        std::cout << "uno";
        break;
      case 2:
        std::cout << "dos";
        break;
      case 3:
        std::cout << "tres";
        break;
      case 4:
        std::cout << "quatro"
        break;
      case 5:
        std::cout << "cinco";
        break;
      default:
        if (value < 0)
            std::cout << "Too small";
        else
            std::cout << "Too large";
        break;
   }
   std::cout << '\n';
}
 
