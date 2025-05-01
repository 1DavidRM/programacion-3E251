#include <iostream>
#include <string>
#include <map>
using namespace std;

enum TipoPokemon
{
    FUEGO,
    AGUA,
    ELECTRICO,
    PLANTA,
};

class Pokemon
{
private:
    string nombre;
    int ataque;
    TipoPokemon tipo;
public:
    Pokemon(string nombre, int ataque, TipoPokemon tipo) {
        this->nombre = nombre;
        this->ataque = ataque;
        this->tipo = tipo;
    }
};

int main (int argc, char *argv[]) {
    map<int, Pokemon> pokedex;   
    pokedex[1]= Pokemon("Bulbasaur", 1, TipoPokemon::PLANTA);
    pokedex[2]= Pokemon("Ivysaur", 2, TipoPokemon::PLANTA);
    pokedex[3]= Pokemon("Venusaur", 3, TipoPokemon::PLANTA);
    pokedex[4]= Pokemon("Charmander", 1, TipoPokemon::FUEGO);
    pokedex[5]= Pokemon("Charmeleon", 2, TipoPokemon::FUEGO);
    pokedex[6]= Pokemon("Charizard", 3, TipoPokemon::FUEGO);
    pokedex[7]= Pokemon("Squirtle", 1, TipoPokemon::AGUA);
    pokedex[8]= Pokemon("Wartortle", 2, TipoPokemon::AGUA);
    pokedex[9]= Pokemon("Blastoise", 3, TipoPokemon::AGUA);

    map<string, string> diccionario
    diccionario["programa"] = "Serie de instrucciones que se ejecutan en un ordenador";
    return 0;
}