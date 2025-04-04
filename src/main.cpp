#include "Serie.hpp"
#include <ftxui/screen/screen.hpp>
#include <ftxui/dom/elements.hpp>
using namespace ftxui;
#include <iostream>
#include <string>
#include <thread>
using namespace std;


int main(int argc, char const *argv[])
{
     auto pantalla = ftxui::Screen::Create(
        Dimension::Full(),Dimension::Full()
    );

    
    float hi=5;

   
    // string resetPosition;
     while(true){
      int fotograma = 0;
      float t = fotograma/10;
      float g = 9.81;
      float desp=(g*t*t)/2;
      float hf=hi-desp;
      float hi=hf;
      cout<<hf<<endl;
      // auto documento = vbox(
      //   spinner(21, fotograma)
      // );
      // Render(pantalla, documento);
      // cout << resetPosition;
      // resetPosition = pantalla. ResetPosition();
      // pantalla.Print();
      fotograma++;
      std::this_thread::sleep_for(.04s);
     }

     // Serie serienavidena;
     // serienavidena.ApagarTodo();
     // serienavidena.Imprimir();
     // serienavidena.EncenderTodo();
     // serienavidena.Imprimir();
     // serienavidena.ApagarCantidad(8);
     // serienavidena.Imprimir();
     // serienavidena.EncenderCantidad(3);
     // serienavidena.Imprimir();
     // serienavidena.AlternarEncendido();
     // serienavidena.Imprimir();
     // serienavidena.RecorrerDerecha();
     // serienavidena.Imprimir();
     // serienavidena.RecorrerIzquierda();
     // serienavidena.Imprimir();

     return 0;
}