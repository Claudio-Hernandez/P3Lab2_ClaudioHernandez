#include <iostream>
#include <ctime>
#include <string>
#include <stdlib.h>
#include <math.h>
#include <cmath>
#include<time.h>
using std::cout;
using std::cin;
using std::string;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int menu();
void sumatoria();
void codigo();
int triangulo(int,int[],int[],int);
int main(int argc, char** argv) {

	int opcion2;
	while(opcion2!=4) {
		switch(opcion2= menu()) {
			case 1: {
				int  res_anterior[100];
				int salida[100];
				for(int i=0; i<100; i++) {
					res_anterior[i] = 0;
					salida[i]=0;

				}
				int n=0;
				cout<<"ingrese el maximo de n: ";
				int maxn = 0;
				cin>>maxn;
				triangulo(n,res_anterior,salida,maxn);
				break;
			}
			case 2: {
				sumatoria();


				break;
			}
			case 3: {
				codigo();
				break;
			}
		
		}
	}


}
int  triangulo(int n,int res[], int salida[],int maxn) {
	if(n==maxn) {
		for(int i = 0; i<100; i++) {
			if(salida[i]!=0){
			cout<<salida[i]<<" ";

			}
		}
		return 0;

	} else if(n!=maxn) {
		
		salida[0]=1;
		for(int i = 0; i<100; i++) {
			if(salida[i]!=0){
			cout<<salida[i]<<" ";

			}
		}
		for(int j = 0;j<n+1;j++){
			int n2 =  salida[0]+salida[j+1];
			salida[j+1]=n2;
		}
	
		
		cout<<"\n";
		n++;
		return triangulo(n,res,salida,maxn);
	}
	return 0;
}
void sumatoria() {
	int arreglo[20];
	srand(time(NULL));
	for(int i = 0; i<20; i++) {
		arreglo[i]=rand()%(20-1+1)+1;
	}
	cout<<"Arreglo:";
	for(int i = 0; i<20; i++) {
		cout<<arreglo[i]<<",";
	}

	cout<<"\n===============\n";


	double u;
	double suma1=0;
	for(int j=0; j<20; j++) {
		suma1+=arreglo[j];
	}
	u =  suma1/20.0;
	double miniSuma = 0;
	for(int k = 0; k<20; k++) {
		double num =  arreglo[k]-u;
		miniSuma+= pow(abs(num),2);
	}
	miniSuma/=20;
	double respuesta = sqrt(miniSuma);

	cout<<" el resultado de la desviacion estandar es:"<<respuesta;
	//return respuesta;
}
void codigo() {
	int arreglo1[10];
	int arreglo2[10];
	srand(time(NULL));

	for(int i = 0; i<10; i++) {
		arreglo1[i]=rand()%(20-1+1)+1;
	}
	for(int i = 0; i<10; i++) {
		arreglo2[i]=rand()%(20-1+1)+1;
	}
	cout<<"\n=======================\n";
	for(int i = 0; i<10; i++) {
		cout<<arreglo1[i]<<",";
	}
	cout<<"\n=======================\n";
	for(int i = 0; i<10; i++) {
		cout<<arreglo2[i]<<",";
	}
	cout<<"\n=========================\n";
	cout<<"\n";
	int cont =1;
	for(int i = 0; i<10; i++) {
		cout<<cont<<":";
		cont++;
		for(int j = 0; j<arreglo1[i]; j++) {
			cout<<(char)177<<" ";
		}
		cout<<"\n";
		cout<<"  ";
		for(int k = 0; k<arreglo2[i]; k++) {
			cout<<(char)178<<" ";
		}


		cout<<"\n\n\n";

	}


}

int menu() {
	int opcion=0;


	while(opcion!=4) {
		cout<<"\n=============MENU==========\n1.Triangulo de pascal\n2.Sumatoria\n3.codigo de barras\n4.Salir\nOpcion:";
		cin>>opcion;
		if(opcion<=4&&opcion>=1) {
			//return opcion;
			break;
		}

	} 
	return opcion;


}
