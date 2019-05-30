#include <iostream>
void swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int main(void) {
  int x = 10;
  int y = 20;
  swap(&x, &y);
  std::cout << x << std::endl;
  std::cout << y << std::endl;
  return 0;
}
