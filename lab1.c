struct complex {
  float real;
  float imag;
};

/*
A,B and C are two dimensional arrays of complex numbers with dimensions
that make them compatible for multiplication 
(that is a_dim2 == b_dim2)
*/
void matmul(struct complex ** A, struct complex ** B,
     struct complex ** C, int a_dim1, int a_dim2, int b_dim2)