#include "matrix.h"
#include <stdio.h>
int main(void) {
  MatrixRef m = matrix_make(3, 3);
  matrix_init(m, 1);
  printf("n: %d, m: %d\n", matrix_get_n(m), matrix_get_m(m));
  matrix_print(m);
  matrix_set_elm(m, 1, 1, 0);
  matrix_print(m);
  matrix_free(m);
  return 0;
}
