
/*
Nombre del programa :  Autodiccionario
Autor:Marcelo Lira
Lugar:ITV
*/
#include<string>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    
    char palabra[55][55];
    char significado[55][25];
    char bpalabra[55];
    char mpalabra[55];
    char epalabra[55];
    int o, j, salvarj=-1, salvari, ni=0;
    
    do{
      
        printf("----Bienvenido a su diccionario personal---\n");
        printf("1. Agregar palabra\n");
        printf("2. Mostrar palabras\n");
        printf("3. Buscar palabra\n");
        printf("4. Modificar palabra\n");
        printf("5. Eliminar palabra\n");
        printf("Seleccion: ");
        scanf("%d",&o);
      

        switch(o){
            case 1:
                j=salvarj;
                j=j+1;
                ni=ni+1;
                printf("Agregar palabra---\n\n");
                printf("Introduzca palabra: ");
                scanf("%s",palabra[j]);
                printf("Introduzca significado: ");
                scanf("%s",significado[j]);
                salvarj=j;
                break;
            case 2:
                printf("Todas las palabras\n\n");
                for(j=0;j<ni;j++){
                    printf("Palabra: %s\n",palabra[j]);
                    printf("Significado: %s\n\n",significado[j]);
                }
                getchar();
                break;
            case 3:
                printf("Buscar palabra---\n\n");
                printf("Introduzca la palabra: ");
                scanf("%s",bpalabra);
                for(j=0;j<ni;j++){
                    if((strcmp(palabra[j],bpalabra))==0){
                        printf("Palabra: %s\n",palabra[j]);
                        printf("Significado: %s\n",significado[j]);
                        getchar();
                    }
                }
                break;
            case 4:
                printf("Modificar palabra\n\n");
                printf("Introduzca la palabra: ");
                scanf("%s",mpalabra);
                for(j=0;j<ni;j++){
                    if((strcmp(palabra[j],mpalabra))==0){
                        printf("Introduzca nuevo significado: ");
                        scanf("%s",significado[j]);
                    }
                }
                break;
            case 5:
                printf("Eliminar palabra---\n\n");
                printf("Introduzca palabra: ");
                scanf("%s",epalabra);
                for(j=0;j<ni;j++){
                    if((strcmp(palabra[j],epalabra))==0){
                        salvari=j;
                        for(j=salvari;j<ni;j++){
                            strcpy(palabra[j],palabra[j+1]);
                            strcpy(significado[j],significado[j+1]);
                        }
                        ni=ni-1;
                        salvarj=j-2;
                    }
                }
                break;
        }getchar();
    }while(1);

    getchar();
    return 0;
}
