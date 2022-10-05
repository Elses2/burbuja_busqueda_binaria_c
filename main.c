///EStudio de lista simple, metodo burbuja, busqueda binaria y orodenamiento
#include <stdio.h>



int esta_rango(int num, int desde, int hasta){
	int result=1;
	if(num>hasta || num < desde){

		result=0;
	}
	return result;

}
int validacion(int num,int desde,int hasta){

	while(esta_rango( num,  desde, hasta)==0){
		printf("Valor fuera de rango ingrese un numero desde %d hasta %d \n", desde,hasta);
		scanf("%d", &num);
		
	}
	return num; 

}
void introduccion(){

	printf("1:Ingreso \n");
	printf("2:Modificar \n");
	printf("3:Eliminar \n");
	printf("4:Ordenar \n");
	printf("5:Mostrar \n");
	printf("6:Fin \n");

}

int main (void){
	int boton; 
	int dato;
	int desde=1;
	int hasta=5;
	int n=2;
	int lista_simple[tam]= {5,1,43,54,2,7,3,8,4,10};
	int aux=0;
	int cant_ingresada=0;
	///Lleno la lista con '0' para evitar errores
	//for(int i=0; i<tam; i++){

	//	lista_simple[i]=0;

	//}
	do{
	introduccion();
	printf("dame un numero entre el 1 y el 5 \n");
	scanf("%d",&boton);
	switch(validacion(boton, desde,hasta)){
		case 1
			break;
		case 2:
			break;
	 	case 3:
			break;
	 	case 4:
			///Ordenamiento Burbuja
			for(int i=0; i<tam; i++){
				for(int j=0;j<tam;j++){
					if(lista_simple[j]>lista_simple[j+1]){
						aux=lista_simple[j+1];
						lista_simple[j+1]=lista_simple[j];
						lista_simple[j]= aux;
						}
					}
				}
			///Mostrar en pantalla
			for(int i=0; i<tam; i++){

				printf("%d \t",lista_simple[i]);
		
				}
			break;
		case 5: 
			for (int i=0; i<tam ; i++){

				
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
