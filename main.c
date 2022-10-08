///Estudio de lista simple, metodo burbuja, busqueda binaria y orodenamiento
#include <stdio.h>



int esta_rango(int num, int desde, int hasta){
	int result=1;
	if(num>hasta || num < desde){

		result=0;
	}
	return result;

}
int validacion(int num,int desde,int hasta){

	do {
		printf("Valor fuera de rango ingrese un numero desde %d hasta %d \n", desde,hasta);
		scanf("%d", &num);
		
	}while(esta_rango( num,  desde, hasta)==0);
	return num; 

}
void introduccion(){

	printf("1:Ingreso \n");
	printf("2:Modificar \n");
	printf("3:Eliminar NO LO HICE \n");
	printf("4:Ordenar \n");
	printf("5:Mostrar \n");
	printf("6:Fin \n");

}

int busqueda_binaria(int tam, int arreglo[], int num){
		///inicio medio y fin se refieren a los indices del arreglo
		int inicio, medio, fin;
		inicio=0; 
		fin= tam; 
		while(inicio<=fin){
		medio=(inicio+fin)/2;
		if(arreglo[medio]==num) break;
	
		if(arreglo[medio]>num){
			inicio= medio+1;
			
			}
		if(arreglo[medio]<num){
			
			fin=medio-1;
			}

		}
	if(arreglo[medio]==num){

		return medio;
		}
	else{

		return -1;
		}
	}


int main (void){
	int ingreso=0;
	int boton; 
	int dato;
	int desde=1;
	int hasta=6;
	int n=2;
	int tam=10;
	int lista_simple[10]= {5,1,43,100,2,7,3,8,4,10};
	int aux=0;
	int cant_ingresada=0;
	///Lleno la lista con '0' para evitar errores
	//for(int i=0; i<tam; i++){

	//	lista_simple[i]=0;

	//}
	do{
	introduccion();
	printf("dame un numero entre el 1 y el 6 \n");
	scanf("%d",&boton);
	if(esta_rango(boton,desde,hasta) == 0){
		boton=validacion(boton,desde,hasta);
		}
	switch(boton){
		case 1:
			
			for(int i=0; i<tam ; i++){
				printf("Valor de la pocicion %d: \n", i);
				scanf("%d", &lista_simple[i]);
				}
			break;
		case 2:

			printf("Ingrese el valor que quiere modificar: \n");
			scanf("%d",&ingreso);
			printf("El indice es: %d\n",busqueda_binaria(10,lista_simple,ingreso));
			
			if(ingreso!=-1){
				printf("Ingrese el valor que quiere remplazar: \n");
				scanf("%d",&lista_simple[ingreso]);

				}
			else{
				printf("El  valor que quiere remplazar no existe \n");
				}
			
			
			break;
	 	case 3:
			break;
	 	case 4:
			///Ordenamiento Burbuja
			for(int i=0; i<tam; i++){
				for(int j=0;j<(tam-1);j++){
					if(lista_simple[j]>lista_simple[j+1]){
						aux=lista_simple[j+1];
						lista_simple[j+1]=lista_simple[j];
						lista_simple[j]= aux;
						}
					}
				}
					
			///Mostrar en pantalla

			
			for(int i=0; i<tam; i++){
				if( i != tam-1){
				printf("%d \t",lista_simple[i]);
					}
				else{
					printf("%d \n",lista_simple[i]);
					}	
				}
			
			break;
		case 5: 
			for(int i=0; i<tam; i++){
				if( i != tam-1){
				printf("%d \t",lista_simple[i]);
					}
				else{
					printf("%d \n",lista_simple[i]);
					}	
				}
			break; 
		case 6:
			printf("Gracias por usarnos \n");
			n=3;
			break;
	 	default:
			printf("Valor fuera de rango");
			break;
	} 		
	} while(n==2);
	

	return 0; 

}
