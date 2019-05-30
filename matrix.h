typedef struct Matrix *MatrixRef;
MatrixRef matrix_make(int n, int m);
void matrix_init(MatrixRef m, int x);
void matrix_print(MatrixRef m);
void matrix_free(MatrixRef m);
int matrix_get_n(MatrixRef m);
int matrix_get_m(MatrixRef m);
int matrix_get_elm(MatrixRef m, int i, int j);
void matrix_set_elm(MatrixRef m, int i, int j, int x);
