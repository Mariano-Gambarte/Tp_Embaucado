#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

void obtenerNumeroNombreNaipe(int id, string &numeroNaipe, string &nombreNaipe,int &valor);
string obtenerNroNaipe(int id, int &valor);
void obetenerNumeroAleatorio(int rango);
void generarTirada(int v[], int tam);
int obtenerNumeroAleatorio(int rango);
void obtenerMano(int v[], int tam);
void mostrarMano(int v[], int tam,int &puntaje,string embaucado);
int contarNumeros(int v[], int tam, int comparacion);
bool verificarVector(int v[],  int tam);
bool verificarManos(int v1[],int v2[],int tam);
void establecerSemilla();
string generarEmbaucado();
#endif // FUNCIONES_H_INCLUDED
