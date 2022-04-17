#ifndef MODULO_C_H_INCLUDE
#define MODULO_C_H_INCLUDE


void sampleStart();
void sampleEnd();
double randNumber();
void initMatrix(int SZ, double *Ma, double *Mb, double *Mr);
void printMatrix(int SZ, double *M);
void MM1c(int size, double *Ma, double *Mb, double *Mr);
void MM1f(int size, double *Ma, double *Mb, double *Mr);


double ** reserva_memoria(int size);
void initMatrix_posix(double **Ma,double **Mb,double **Mc, int size);
void printMatriz_posix(double **matriz, int size);
#endif
