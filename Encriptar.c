#include <stdio.h>
#include <stdlib.h>
#define MAX 256
int encriptar(void);
int desencriptar(void);
FILE *arch1, *arch2, *arch3, *arch4;
char ch,nombre[MAX];
int clave1;

int main()
{
	printf("\n\n");
    	int menu;
    while(1)
    {	
	system("clear");
	printf("************************************************************************************************************************************* \n");
	printf("Programa de encriptación de texto elaborado por: Emmanuel Martínez Guerrero \n\n");
	printf("!!!ADVERTENCIA!!!: Para el funcionamiento del programa los archivos a encriptar o desencriptar debe estar en la carpeta del programa.\n\n");
        printf("Seleccione alguna acción que desee realizar:\n");
        printf("\n1. Encriptar un archivo de texto (.txt)\n");
        printf("2. Desencriptar y visualizar un archivo de texto (.txt)\n");
        printf("3. Salir\n" );
        printf("\n\n Ingrese su opción:\t");
        scanf("%d", &menu);
	printf("************************************************************************************************************************************* \n");
        switch(menu)
        {
            case 1: encriptar();
                break;
            case 2: desencriptar();
                break;
            case 3: exit(1);
        }
    }
    printf("\n\n");
return 0;
}
int encriptar()
{
	char ch,archivo[MAX];
	printf("\n");
        printf("Ingrese el nombre completo del archivo a encriptar (incluyendo la extensión .txt):\n\n");
        scanf("%s", archivo);
        arch1 = fopen(archivo, "r");
                                if(arch1 == NULL)
                                {
					printf("\n !!!El archivo no se encontro!!!, ¿que desea hacer?; 1=REINTENTAR, 0=SALIR AL MENU PRINCIPAL\n");
                                        int resp;
                                        scanf("%d",&resp);
                                                if(resp==1){
                                                        return encriptar();
                                                        }else{
                                                                	return 0;
									}
				}
	printf("\n\n");
        printf("Ingrese el número clave para la encriptación:\n");
        scanf("%d",&clave1);
	printf("\n\n");
        printf("Ingrese el nombre de salida del archivo encriptado (incluyendo la extensión .txt):\n");
        scanf("%s",nombre);
	printf("\n");
        arch2 = fopen(nombre,"w");
                                if(arch2 != NULL)
                                {
                                        printf("\n");
                                }
                while(1)
                {
                        ch = fgetc(arch1);
                        if(ch == EOF)
                {
                            printf("\nLa encriptación se ha realizado exitosamente!!!\n");
                                break;
                }
        		else
        			{
            				ch = ch - (8 * 5 - clave1);
            				fputc(ch, arch2);
        			}
    }
    fclose(arch1);
    fclose(arch2);
    printf("\n\n");
    return 0;
}
int desencriptar()
{
	char ch,archivo[MAX],nombre2[MAX];
	int clave2,resp;
	printf("\n");
        printf("Ingrese el nombre completo del archivo a desencriptar (incluyendo la extensión .txt):\n\n");
        scanf("%s", archivo);
	arch3 = fopen(archivo, "r");
                                if(arch3 == NULL)
                                {
					printf("\n El archivo no se encontro, ¿que desea hacer?; 1=REINTENTAR, 0=SALIR AL MENU PRINCIPAL\n");
                                        int resp1;
                                        scanf("%d",&resp1);
                                                if(resp1==1){
                                                        return desencriptar();
                                                        }else{
                                                                return 0;
                                                                }
                                }

	printf("\n\n");
	printf("!!!Precaución!!!: acontinuación se le pedirá la clave de desencriptado, si no es la correcta se presentara un texto de caracteres.\n");
	printf("\n\n");
	printf("¿Esta seguro que desea continuar?(1=SI, 0=NO):\t");
	scanf("%d",&resp);
	printf("\n");
		if(resp==0){
			return 0;
			}else{
 		       		printf("Ingrese la clave de desencriptado:\t");
        			scanf("%d",&clave2);
				printf("\n\n");
				system("clear");
				system("clear");
				system("clear");
				system("clear");
				system("clear");
				system("clear");
				printf("El archivo desencriptado se muestra acontinuación: \n");
				printf("\n\n");
        			arch3 = fopen(archivo, "r");
                               					if(arch3 != NULL)
                                						{
                                        						printf("\n");
                                						}
              							  while(1)
                							{
                        							ch = fgetc(arch3);
                       								 if(ch == EOF)
                								{
											printf("\n\n");
											 printf("\n Teclee 0 para salir al menu princpal:\t");
                             								           int resp3;
                                     								   scanf("%d",&resp3);
                                                							if(resp3==0){
													system("clear");
													system("clear");
													system("clear");
													system("clear");
													system("clear");
													system("clear");
                                                        						return 0;
                                                       									 }else{
                                                                       								 return desencriptar();
                                                                        							}
                                												break;
                														}
                        							else
                                						{
                                        						ch = ch + (8 * 5 - clave2);
											printf("%c",ch);
                                						}
    									}
				}
    fclose(arch3);
    printf("\n\n");
    return 0;
}
