#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <sstream>
#include <vector>
#include "mergeSort.h"
#include "bubbleSort.h"
#include "ShellSort.h"
#include "quicksort.h"
#define tam 1000000

using namespace std;
void escribir ();
void leer (int);
int ar[tam];
int main()
{
    //escribir ();
    leer (ar[tam]);

    return 0;
}
void escribir ()
{
    int i=0;
    clock_t tiempo;
    tiempo=clock();

    ofstream archivo;

    archivo.open("texto.txt",ios::out);// SE ABRE EL ARCHIVO

    if(archivo.fail())
    {
        cout<<"No se pudo abrir el archivo"<<endl;
        exit(1);
    }
    while(i<10000000)
    {
        archivo<<rand()<<endl;
        i++;
    }
    archivo.close();// SE CIERRA EL ARCHIVO
}
void leer (int)
{
    int i=0;
    ifstream archivo;
    string numeros;
    archivo.open("texto.txt",ios::in);// ABRIMOS EL ARCHIVO EN MODO LECTURA
    if(archivo.fail())
    {
        cout<<"No se pudo abrir el archivo"<<endl;
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
}
