/*Fecha:1/02/2022
Autor:Francisco jose rivera gonzalez
Materia:Computacion apralela y distrbuida
Tema:benchmark
*/

/*declarar interfaces*/
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define size 32768
int matrix[size][size];

	int main(void) {
		for(int i = 0; i<size; i++) {
			for(int j = 0; j<size; j++) {
			matrix[i][j] = 47;
		}
	}	
	return 0;
}
