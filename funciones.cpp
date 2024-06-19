#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
void establecerSemilla()
{
    srand(time(nullptr));
}

string obtenerNroNaipe (int id, int &valor)
{
    string numeroNaipe;
    switch (id)
    {
    case 1:
        numeroNaipe="10";
        valor = 10;
        break;
    case 2:
        numeroNaipe="J";
        valor = 11;
        break;
    case 3:
        numeroNaipe="Q";
        valor = 12;
        break;
    case 4:
        numeroNaipe="K";
        valor = 15;
        break;
    case 5:
        numeroNaipe="A";
        valor = 20;
        break;
    }
    return (numeroNaipe);
}

void obtenerNumeroNombreNaipe(int id, string &numeroNaipe, string &nombreNaipe,int &valor)
{
    if(id < 6)
    {
        nombreNaipe = "Corazon";
    }
    else if(id < 11)
    {
        nombreNaipe = "Diamante";
        id -= 5;

    }
    else if(id < 16)
    {
        nombreNaipe = "Pica";
        id -= 10;
    }
    else
    {
        nombreNaipe = "Trebol";
        id -= 15 ;
    }
    numeroNaipe=obtenerNroNaipe(id,valor);
}

int obtenerNumeroAleatorio(int rango)
{
    return rand()%rango + 1;
}

void obtenerMano(int v[], int tam)
{
    int i;
    int rango = 20;
    for(i = 0; i <tam;  i++)
    {
        v[i] = obtenerNumeroAleatorio(rango);
    }
}
void mostrarMano(int v[], int tam,int &puntaje, string embaucado)
{
    int i, valor;
    string palo, numero;
    for(i = 0; i <tam;  i++)
    {
        obtenerNumeroNombreNaipe(v[i], numero, palo, valor);
        cout << numero << " " << palo << endl;
        if(palo!= embaucado){
        puntaje+=valor;
        }
    }
    cout << endl;
}
int contarNumeros(int v[], int tam, int comparacion)
{
    int contar = 0;
    int i;
    for (i = 0; i < tam; i++)
    {
        if(v[i]==comparacion)
        {
            contar++;
        }
    }
    return contar;
}
bool verificarVector(int v[],  int tam)
{
    int i;
    for(i = 0; i < tam; i++)
    {
        if(contarNumeros(v, tam, v[i]) > 1)
        {
            return false;
        }
    }
    return true;
}
bool verificarManos(int v1[],int v2[],int tam)
{
    for(int i=0; i<tam; i++)///para cada carta de la mano 1
    {

        for(int x=0; x<tam; x++)///veo la carta de la mano 2
        {
          if(v1[i]==v2[x]){
            return false;

          }
        }
    }
    return true;
}
string generarEmbaucado(){
    int idEmbaucado=obtenerNumeroAleatorio(4);
    string palo;
    switch (idEmbaucado)
    {
    case 1:
        palo="Corazon";
        break;
    case 2:
        palo="Diamante";
        break;
    case 3:
        palo="Pica";
        break;
    case 4:
        palo="Trebol";
        break;
    }
    return palo;

}

