#include <stdio.h>
#include <stdlib.h>
//#include <cstdlib>
#include <time.h>
//#include <vector>
#include "mergeSort.h"
#include "bubbleSort.h"
#include "ShellSort.h"
#include "quicksort.h"
//#include "funciones complementarias.h"
#define tam 10000


//void escribir ();
//void leer (int *ar);
int *ar;
int n=10000;
int imprimeArreglo(int ar[],int n){
	int i;
	for (i=0; i<n;i++){
		printf("%d ", ar[i]);
	}
	return 0;
}
/*void escribir (int *ar)
{
    int i=0;
    clock_t tiempo;
    tiempo=clock();

    FILE archivo;

    archivo.open("texto.txt",ios::out);// SE ABRE EL ARCHIVO

    if(archivo.fail())
    {
        printf("No se pudo abrir el archivo\n");
        exit(1);
    }
    while(i<10000000)
    {
        archivo<<rand()<<endl;
        i++;
    }
    archivo.close();// SE CIERRA EL ARCHIVO
}*/
/*void leer (int *ar)
{

    int i=0;
    FILE *archivo;
    //string numeros;
    archivo=fopen("texto.txt","r");// ABRIMOS EL ARCHIVO EN MODO LECTURA
    if(archivo.fail())
    {
        printf("No se pudo abrir el archivo\n");
        exit(1);
    }
    while(archivo.is_open())
    {
    string linea;
        while(getline(archivo,linea))
        {
            stringstream ss(linea);
            string temp;
            vector<string> items;
            while(getline(ss,temp,'\n'))
            {
                items.push_back(temp);
            }
            ar[i]=atoi(items[0].c_str());
            //cout<<ar[i]<<endl;
            i++;
            if(i==tam)
            {
                break;
            }
        }
        cout<<"aaa"<<endl;
        archivo.close();
    }
}*/

void LeerArchivo(int *ar,int n){

    FILE *documento;
    documento=fopen("texto.txt","r");
    if(documento==NULL) exit(1);
    int i;
    for(i = 0; i <n; i++){
     fscanf(documento,"%d",&ar[i]);
    }
    fclose(documento);
}
int main()
{
    //escribir ();
    //leer (ar);
	//escribir(ar);
	LeerArchivo(ar,n);
	imprimeArreglo(ar,n);
    return 0;
}
