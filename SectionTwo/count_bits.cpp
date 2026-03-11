#include <iostream>

short CountBits(unsigned int x) {
  short num_bits = 0;
  while (x) {
    // AND operator to select only bits set to 1
    num_bits += 1 & x;
    // Shift the bits of x to the right
    x >>= 1; // 1 = ...0001
  }
  return num_bits;
}

int main() {
  std::cout << CountBits(1) << "\n";
  std::cout << CountBits(8) << "\n";
  std::cout << CountBits(20) << "\n";
  return 0;
}
