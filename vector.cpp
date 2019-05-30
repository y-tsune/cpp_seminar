#include <iostream>
#include <vector>

template <class T>
std::ostream &operator<<(std::ostream &os, const std::vector<T> &v) {
  for (auto it = v.begin(); it != v.end(); it++) {
    os << *it << " ";
  }
  os << std::endl;
  return os;
}

int main(void) {
  std::vector<int> v;
  int x;
  int s;
  std::cin >> s;
  for (int i = 0; i < s; i++) {
    std::cin >> x;
    v.push_back(x);
  }

  std::cout << v << std::endl;

  v.pop_back();

  std::cout << v << std::endl;

  v.insert(v.begin() + 1, 3);

  std::cout << v << std::endl;

}
