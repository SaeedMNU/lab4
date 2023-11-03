#include <iostream>

int main()
{
  int x;
  int y;
  int z;
  std::cout << "Enter three numbers: ";
  std::cin >> x >> y >> z;
  if (x > y && y > z) {
    std::cout << "Descending";
  } else if (x < y && y < z) {
    std::cout << "Ascending";
  } else {
    std::cout << "Not in order";
  }
  
}
