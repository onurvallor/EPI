#include <iostream>

long long SwapBits(unsigned long long x, unsigned int i, unsigned int j) {
  if (((x >> i) & 1) != ((x >> j) & 1)) {
    unsigned long long bitmask = (1L << i) | (1L << j);

    x ^= bitmask;

    std::cout << "bitmask = " << bitmask << "\n";
    std::cout << "x ^= bitmask = " << x << "\n";
  }

  return x;
}

int main() {
  SwapBits(231, 3, 6);
  return 0;
}
