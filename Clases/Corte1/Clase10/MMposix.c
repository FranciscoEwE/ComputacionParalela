/*
* Date: 2022-03-08
* Author: Francisco Jose Rivera Gonzalez
* Course: Paralell and Distributed Computing
* Topic: IMplementacionPosix
* Benchmark: Programa para multiplicar 2 matrices con variables
* globales
* Diseño modular
* Creacion modulo funciones para el calculo de la matriz
* 1.Creacion de variables doble puntero puntero para matrices principal GLOBAL
* 2.Funcion reservva de memoria para las matrices de doble puntero 
* 3.Funcion de inicializacion de matriz
* 4.Funcion para el producto de matrices
* SE dividira la matriz A por porciones , a ser enviados a cada hilo
* El numero de hilos sera enviado al ejecutar
* La dimension de la matriz siempre sera cuadrada (N*N)
* Impresion de matrices doble puntero
* to compile: gcc Bench02.c -o resultado_bench2
* ./resultado_bench2
*/
#include "funciones.h"
#include <stdio.h>
#include <time.h>
#include <sys/time.h>
#include <stdlib.h>
#include <pthread.h>

//se declaran las variables globales
int N, Nthreads;
double **Ma , **Mb , **Mc;
//funcion a enviar a cada hilo que realiza la multiplicacion de matrices
//se divide por porciones , en funcion de la dimension
//y del numero de hilos que requiere el usuario.
//Nota:sera de tipo void , retornara un warning potencial de riesgo , pensar en eso para mejorarla

void *multMM(void *arg){
	/*arg : tiene el ID del hilo */
	int i,j,k,idTh;
	int porcionSize , iniFila , finFila;
	double suma;
	/*el arg es del tipo puntero vacio , y se castea a puntero entero*/
	idTh= *(int *)(arg);
	/*Se determina la porcion de la matriz A a ser enviada a cada hilo*/
	porcionSize= N/Nthreads;
	/* se pasa el inicio de fila , segun el ID del hilo */
	iniFila=idTh*porcionSize;
	finFila = (idTh+1)*porcionSize;
	for (i=iniFila ; i<finFila ;++i){
		for (j=iniFila ; j<finFila ;++j){
		suma=0.0;
			for (k=0 ; k<N ;++k){	
				suma+= Ma[i][k]* Mb[i][j];
			}
			Mc[i][j]=suma;
		}
	}


}
int main(int argc,char* argv[1]){
	if (argc != 3){
		printf(".//Exe N<dimMatriz> Nth<numHilos>");
		return -1;
	}
	
	//capturando variables
	N=atof(argv[1]);
	Nthreads=atof(argv[1]);
	pthread_t *hilosExec;
	/*Reserva de memoria para los hilos*/
	hilosExec= (pthread_t *)malloc(Nthreads*sizeof(pthread_t));	 
	Ma=ReservaMEM(N);
	Mb=ReservaMEM(N);
	Mc=ReservaMEM(N);
	IniciarMatriz(Ma,Mb,Mc,N);
	
	if (N < 4){
		printf("Matriz A: \n");
		printMatriz_posix(Ma,N);
		printf("Matriz B: \n");
		printMatriz_posix(Mb,N);
		
	
	}
	/*PArticion de las tareas en los hilos */
	for (int i = 0 ; i< Nthreads ;++i){
		int *IDthread;
		IDthread=(int *)malloc(sizeof(int));
		*IDthread= i ;
		pthread_create(&hilosExec[i],NULL,multMM,(void *)IDthread);
		
		
	}

	for (int i = 0 ; i< Nthreads ;++i){
	
		pthread_join(&hilosExec[i],NULL);
	}
	free(hilosExec);
	if (N < 4){
		printf("Matriz C: \n");
		printMatriz_posix(Mc,N);
	}
	return 0;
}
