#include "matrix.h"
#include <stdio.h>
#include <stdlib.h>

struct Matrix {
  int n, m;
  int *v;
};

MatrixRef matrix_make(int n, int m) {
  MatrixRef ret = malloc(sizeof(struct Matrix));
  ret->n = n;
  ret->m = m;
  ret->v = malloc(sizeof(int) * n * m);
  return ret;
}

void matrix_free(MatrixRef m) {
  free(m->v);
  free(m);
}

void matrix_init(MatrixRef m, int x) {
  int i, j;
  for (i = 0; i < m->n; i++) {
    for (j = 0; j < m->m; j++) {
      m->v[i * m->n + j] = x;
    }
  }
}

void matrix_print(MatrixRef m) {
  int i, j;
  printf("\n");
  for (i = 0; i < m->n; i++) {
    for (j = 0; j < m->m; j++) {
      printf("%d ", m->v[i * m->n + j]);
    }
    printf("\n");
  }
}

int matrix_get_n(MatrixRef m) { return m->n; }

int matrix_get_m(MatrixRef m) { return m->m; }

int matrix_get_elm(MatrixRef m, int i, int j) { return m->v[i * m->n + j]; }

void matrix_set_elm(MatrixRef m, int i, int j, int x) {
  m->v[i * m->n + j] = x;
}
