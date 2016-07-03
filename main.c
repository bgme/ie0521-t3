#include <stdio.h>

int operacion(int num1, int num2, int num3, int num4, int num5, int num6, int num7);

int main(int argc, char *argv[]){

	int resultado;
	resultado = operacion(1, 1, 1, 1, 1, 1, 1);
	//printf("El resultado es: %i \n",resultado);
	
   return 0;
}

int operacion(int num1, int num2, int num3, int num4, int num5, int num6, int num7){

	int resultado;

  if (num7 > 4){
    
	  resultado = num1 + num2 + num3 + num4 - num5 - num6;

    }else{

       	 resultado = num1 + num2 + num3 + num4 + num5 - num6;
    }

	return resultado;
}

