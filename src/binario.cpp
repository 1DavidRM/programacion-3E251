#include <iostream>
using namespace std;
#include <fstream>
#include <string>

struct Persona {
    char nombre[50];
    int edad;
};

int main(){
    ofstream archivo("binario.bin", ios::binary);
    if(!archivo.is_open()){
        cerr<<"Error al abrir el archivo para escritura"<<endl;
        return 1;
    }
    cout<<"Escribiendo archivo..."<<endl;
    Persona p1 ={"Tommy",2};
    Persona p2 ={"Nathaly",22};
    Persona p3 ={"David",21};

    archivo.write(reinterpret_cast<char*>(&p1), sizeof(Persona));
    archivo.write(reinterpret_cast<char*>(&p2), sizeof(Persona));
    archivo.write(reinterpret_cast<char*>(&p3), sizeof(Persona));
    archivo.close();
    ifstream archivoLectura("binario.bin", ios::binary);
    if(!archivoLectura.is_open()){
        cerr<<"Error al abrir el archivo para lectura"<<endl;
    }
    cout<<"Leyendo archivo..."<<endl;
    Persona p;
    while (archivoLectura.read
        (reinterpret_cast<char*>(&p), sizeof(Persona)))
    {
        cout<<"Nombre:"<<p.nombre<<", Edad: "<<p.edad<<endl;
    }
    archivoLectura.close();

    
    return 0;

}