#include <iostream>
using namespace std;
#include <cstdlib>
#include "menu.h"
#include "funciones.h"


void jugarJuego(){
   int manoJugador1[5];
   int puntajeJugador1=0;
   int manoJugador2[5];
   int puntajeJugador2=0;
   string embaudado;
   establecerSemilla();
   int opcion;
    do {
        mostrarMenu();
        cin >> opcion;
        switch (opcion) {
            case 1:
                embaudado=generarEmbaucado();
                do{
                obtenerMano(manoJugador1,5);
                }while(verificarVector(manoJugador1,5) !=true);
                mostrarMano(manoJugador1,5,puntajeJugador1,embaudado);
                cout << "------------" <<endl;
                cout << "CARTA DEL EMBAUCADO: " << embaudado <<endl;
                cout << "------------" <<endl;
                do{
                obtenerMano(manoJugador2,5);
                }while(verificarVector(manoJugador2,5) !=true || verificarManos(manoJugador1,manoJugador2,5) !=true);
                mostrarMano(manoJugador2,5,puntajeJugador2,embaudado);
                cout << "puntaje del jugador 1: " << puntajeJugador1 <<endl;
                cout << "puntaje del jugador 2: " << puntajeJugador2 <<endl;
                break;
            case 2:
                cout << "Opciones del juego" << endl;
                // Aquí puedes mostrar las opciones del juego
                break;
            case 3:
                cout << "Saliendo del juego..." << endl;
                break;
            default:
                cout << "Opcion invalida. Por favor, seleccione una opcion valida." << endl;
                break;
        }
        cout << endl;
    } while (opcion !=3);
}


