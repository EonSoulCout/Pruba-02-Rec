#include "libro.h"

int Libro::getPaginas() const{
    return paginas;
}

void Libro::setPaginas(int newPaginas){
    paginas = newPaginas;
}

Libro::Libro(){

}

Libro::Libro(int numAut, string publ, string tittle):
    Documento(numAut),
    titulo(tittle){
    this->publicacion = publ;
}
string Libro::obtenerReferencia()
{
    return Documento::obtenerReferencia() +
            "| "+titulo + ", " +
            this->publicacion + ", " +
            to_string(paginas) + " pags. \n";
}

