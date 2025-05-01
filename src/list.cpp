#include <iostream>
#include <string>
#include <list>
using namespace std;

class Persona
{
private:
    string nombre;
    string edad;
public:
    Persona(string nombre, string edad) {
        this->nombre = nombre;
        this->edad = edad;
    }
};


int main() {
    list<string> nombres;
    nombres.push_back("Drauz");
    nombres.push_back("Nathaly");
    nombres.push_back("Tommy");
    nombres.push_back("Benji");
    list<int > edades;
    edades.push_back(21);
    edades.push_back(22);
    edades.push_back(2);
    edades.push_back(15);
    list<Persona> personas;
    for (auto it = nombres.begin() ; it != nombres.end(); it++) {
        
        personas.push_back(Persona(*it,5));
    }   

    return 0;
}