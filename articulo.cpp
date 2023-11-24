#include "articulo.h"

bool Articulo::getJournal() const{
    return journal;
}

void Articulo::setJournal(bool newJournal){
    journal = newJournal;
}

string Articulo::obtenerReferencia(){
    return Documento::obtenerReferencia() +
            "| "+revista + " " +
            this->publicacion + ", Journal: " +
            (this->journal ? "Si" : "No");
}
Articulo::Articulo(){

}
Articulo::Articulo(int numAutores, string publ, string revista):
    Documento(numAutores), revista(revista){
    this->publicacion = publ;
}
