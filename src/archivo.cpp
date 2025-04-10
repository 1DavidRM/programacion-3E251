#include <iostream>
using namespace std;
#include <fstream>
#include <string>

int main (int argc, char const *argv[])
{
    ofstream archivo("archivo.txt");
     if(!archivo.is_open()){
        cerr<<"Error al abrir el archivo para escritura"<<endl;
        return 1;
    }
    archivo<<"hola mundo!"<<endl;
    archivo.close();

    ifstream archivoLectura("archivo.txt");
    if(!archivoLectura.is_open()){
        cerr<<"Error al abrir el archivo para lectura"<<endl;
    }
    cout<<"Leyendo archivo..."<<endl;
    string linea;
    while (getline(archivoLectura,linea))
    {
        cout<<linea<<endl;
    }
    archivoLectura.close();
    return 0;
}