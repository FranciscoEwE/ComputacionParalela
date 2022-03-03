/************************************************************
* Fecha: 01-03-2022
* Autor:Francisco Jose Rivera Gonzalez
* Materia:Computacion Paralela y distribuida 
* Tema: Implementacion Posix (library)
* Programa principal para multiplicar 2 matrices sin variables globales
* Se requiere un diseño modular.
* El modulo implementará los hilo que harán el cálculo del 
* producto de la matrix.
**************************************************************/
#include "modulo.h"
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>

// Se define el numero de hilos segun configuración

#define MAX 4

// se implementa el principal 
int main(){
	int mA[MAX][MAX];
	int mB[MAX][MAX];
	// SE crean variables para los indices de las matrices
	int f1=MAX;
	int c1=MAX;
	int f2=MAX;
	int c2=MAX;
	
	//Se generan aleatorios para las matrices 
	for (int i=0; i<f1 ; i++){
		for (int j=0; j<f1 ; j++){
			mA[i][j]=rand()%10;	
			mB[i][j]=rand()%10;	
			}
	
	}
	
	for (int i=0; i<f1 ; i++){
		for (int j=0; j<f1 ; j++){
			printf(" %d ",mA[i][j]);	
			}
			printf("\n");
	
	
	}
	for (int i=0; i<f1 ; i++){
		for (int j=0; j<f1 ; j++){
			print(" %d ",mB[i][j]);	
			}
			printf("\n");
	
	
	}
	
	
	//Declarar un entero que tenga el producto fxc 
	int maxFC= f1*c1;
	//Se declaran el numero de 
	pthreads *hilos;
	
	hilos=(pthread_t *)malloc(maxFC * sizeof(pthread_t));
	int contador=0;
	int *dato = NULL;
	for (int i = 0 ; i<f1 ; i++){
		for(int j=0 ; j<c2 ; j++){
			dato = (int *)malloc()*sizeof(int));
		}
		for(int k= 0 ; k<c1;k++){
			dato[k+1]=mA[i][k];			
		}
		for(int k= 0 ; k<c1;k++){
			dato[k+1]=mB[i][k];
	}
	
		pthreads_create(&hilos[contador++],hilos,multiplicacion,(void *)(dato));
		
	
	
	
	return 0;
}
