#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <string.h>

//int[100] decToBin(int dec, int binario[]);
//void imprimeBin(int binario[]);

int main(){
	
	int binario[8], i=0, j=0, dec;
    printf("Ingresa un valor decimal:\t");
    
    //Limpiamos el buffer de entrada antes de leer el dato
	fflush(stdin);
    scanf("%d", &dec);
    
    //decToBin(dec, binario[]);-----------------------------funcion 1--------------------------
    //Convierte de decimal a binario
	for(i = 8; i > 0; i--)
    {
    	//Utilizanndo el hack de modulos con AND
        binario[i] = dec & 1;
        dec = dec/2;
	}
	
	printf("Transformacion a binario:\t");
    
   // imprimeBin(binario[8]);------------------------------funcion 2----------------------------
    //Imprime el número binario
    for(i = 1; i <= 8; i++)
    {
        if(binario[i] == 1)
        {
            for(j = i; j <= 8; j++)
            {
                printf("%d",binario[j]);
            }
            break;
        }
    }
    
    printf("\nComplemento a 1:\t\t");
    
    //Complemento a 1---------------------------------------funcion 3----------------------------
    for(i = 8; i > 0; i--)
    {
    	//Negamos todos los valores de binario[]
        if(binario[i] == 0)
        {
        	binario[i] = 1;
		}
		else
		{
			binario[i] = 0;
		}
	}
	
	//Imprime el número binario----------------------------llamar funcion 2-----------------------
    for(i = 1; i <= 8; i++)
    {
        if(binario[i] == 1)
        {
            for(j = i; j <= 8; j++)
            {
                printf("%d",binario[j]);
            }
            break;
        }
    }
    
    
	printf("\n");
    
	system("pause");
	
	return 0;
}

/*int[100] decToBin(int dec, int binario[])
{
	//Convierte de decimal a binario
	for(i = 100; i > 0; i--)
    {
    	//Utilizanndo el hack de modulos con AND
        binario[i] = dec & 1;
        dec = dec/2;
	}
	
	return binario[]
}


void imprimeBin(int binario[])
{
	int i = 0;
	int j = 0;
	//Imprime el número binario
    for(i = 1; i <= 100; i++)
    {
        if(binario[i] == 1)
        {
            for(j = i; j <= 100; j++)
            {
                printf("%d",binario[j]);
            }
            break;
        }
    }
}
*/


