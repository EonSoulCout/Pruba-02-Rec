#include "bibliografia.h"
#include <iostream>
using namespace std;

Bibliografia::Bibliografia(){

}

bool Bibliografia::agregarLibro(){

        int tamanio;
        string name;
        string publ;
        string tittle;
        int numpag;
        cout<<"Ingrese el numero de autores: ";
        cin>>tamanio;
        cout<<"Ingrese la publicacion: ";
        getline(cin>>ws,publ);
        cout<<"Ingrese el titulo: ";
        getline(cin>>ws,tittle);
        cout<<"Ingrese el numero de paginas: ";
        cin>>numpag;

        Libro* lib = new Libro(tamanio,publ,tittle);
        for (int i=0;i<tamanio;i++){
            cout<<"Ingrese el autor "<<i+1<<"/"<<tamanio<<": ";
            getline(cin>>ws,name);
            lib->agregarAutor(name);
        }
        lib->setPaginas(numpag);

        referencias.push_back(lib);

    return true;
}

bool Bibliografia::agregarArticulo(){

    int tamanio;
    string name;
    string publ;
    string mag;
    char journal;

    cout<<"Ingrese el numero de autores: ";
    cin>>tamanio;

    cout<<"Ingrese el nombre de la revista: ";
    getline(cin>>ws,mag);

    cout<<"Ingrese si se ha ingresando al journal (S/N): ";
    cin>>journal;

    cout<<"Ingrese la publicacion de la revista: ";
    getline(cin>>ws,publ);

     Articulo* artc = new Articulo(tamanio,publ,mag);
     for (int i=0;i<tamanio;i++){
             cout<<"Ingrese el autor "<<i+1<<"/"<<tamanio<<": ";
             getline(cin>>ws,name);
             artc->agregarAutor(name);
     }

     if(journal=='S'){
         artc->setJournal(true);
     }else{
         artc->setJournal(false);
     }

    referencias.push_back(artc);

    return true;
}
void Bibliografia::imprimirReferencias()
{
 int size=referencias.size();
    for(int i=0;i<size;i++){
        cout<<referencias[i]->obtenerReferencia();
    }
}
