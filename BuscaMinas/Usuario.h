#ifndef USUARIO_H
#define USUARIO_H

#include <string>

class Usuario {
private:
    std::string nombre;
    int puntajeMaximo;
    int partidasJugadas;
    int partidasGanadas;

public:
    Usuario(std::string nombre);
    std::string getNombre();
    int getPuntajeMaximo();
    int getPartidasJugadas();
    int getPartidasGanadas();
    void setPuntajeMaximo(int puntaje);
    void incrementarPartidasJugadas();
    void incrementarPartidasGanadas();
};

#endif
