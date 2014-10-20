#define MAT_MAX_ROWS 10
#define MAT_MAX_COLS 10

enum mat_axis{
	MAT_X,
	MAT_Y,
	MAT_Z
};

typedef float mat_elem_t;

typedef void* mathnd;

void mat_init();
mathnd mat_create(int rows, int cols);
mathnd mat_rotate_mat2(mat_elem_t angle);
mathnd mat_rotate_mat3(mat_elem_t angle, mat_axis axis);
mathnd mat_rotate_mat4(mat_elem_t angle, mat_axis axis);
void mat_destroy(mathnd*);  //
mathnd mat_add(mathnd a, mathnd b);
mathnd mat_sub(mathnd a, mathnd b);
mathnd mat_mul(mathnd a, mathnd b);
mathnd mat_muls(mathnd a, mathnd b);
mathnd mat_mul(mathnd a, mat_elem_t);
//mat_err_code mat_mulv();
mat_elem_t mat_det(mathnd hnd);  //������������
mathnd mat_invert(mathnd hnd);    //�������������� 
mathnd mat_transpose(mathnd hnd); //����������������
int mat_cols(mathnd hnd);
int mat_rows(mathnd hnd);
void mat_set_elem(mathnd hnd, int row, int col, mat_elem_t);
void mat_set_elems(mathnd hnd, mat_elem_t* elems);
mat_elem_t mat_get_elem(mathnd hnd, int row, int col);
mat_elem_t* mat_get_elems(mathnd hnd);
bool mat_equal(mathnd a, mathnd b);
mathnd mat_copy(mathnd hnd);
void mat_print(mathnd hnd);