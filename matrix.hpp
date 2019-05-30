#include <iostream>
struct Matrix {
  Matrix(int n, int m) {
    this->n = n;
    this->m = m;
    this->v = new int[m * n];
  };
  Matrix(int n, int m, int x) {
    this->n = n;
    this->m = m;
    this->v = new int[m * n];
    for (int i = 0; i < m * n; i++)
      this->v[i] = x;
  };
  void print() {
    std::cout << std::endl;
    for (int i = 0; i < this->n; i++) {
      for (int j = 0; j < this->m; j++) {
        std::cout << this->v[i * this->n + j] << " ";
      }
      std::cout << std::endl;
    }
  };
  int get_n() { return this->n; };
  int get_m() { return this->m; };
  int get_elm(int i, int j) {
    return this->v[i * this->n + j];
  };
  void set_elm(int i, int j, int x) {
    this->v[i * this->n + j] = x;
  };
  ~Matrix() { delete[] v; }

private:
  int n, m;
  int *v;
};
