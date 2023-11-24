#include <iostream>
#include "libro.h"
#include "articulo.h"
#include "bibliografia.h"

using namespace std;

int main(){

    int op;
    Bibliografia bio;

    do{
        cout<<"\n ===Bienvenido=== "<<endl;
        cout<<"1.Ingresar un Libro"<<endl;
        cout<<"2.Ingresar un Articulo"<<endl;
        cout<<"3.Imprimir Referencias"<<endl;
        cout<<"4.Salir"<<endl;
        cout<<"Ingrese una opcion: ";
        cin>>op;

        switch(op){
        case 1:
            bio.agregarLibro();
            break;
        case 2:
            bio.agregarArticulo();
            break;
        case 3:
            bio.imprimirReferencias();
            break;
        case 4:
            cout<<"Fin del programa";
        default:
            cout<<"Error!...";
            break;
        }
    }while(op!=4);

    return 0;
}
