#ifndef PUNKT_2D_H
#define PUNKT_2D_H
#include "Punkt_1D.h"

class Punkt_2D
    :public Punkt_1D
{
    int y;
public:
    Punkt_2D();
    Punkt_2D(int wspX,int wspY);
    int czytaj_y();
    void zapis_do_pliku ();
    void odczyt_z_pliku();
    ~Punkt_2D();
};

#endif // PUNKT_2D_H
