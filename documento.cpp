#include "documento.h"

const vector<string> &Documento::getAutores() const
{
    return autores;
}
Documento::Documento(){

}
Documento::Documento(int numAut): numAutores(numAut){

}
bool Documento::agregarAutor(string name){
    autores.push_back(name);
    return true;
}

string Documento::obtenerReferencia(){
    string str = "";
    for(string s: autores){
        "| "+ str += s + ", ";
    }
    return str;
}
