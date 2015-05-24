#ifndef PUNKT_3D_H
#define PUNKT_3D_H
#include "Punkt_1D.h"
#include "Punkt_2D.h"

class Punkt_3D
    :public Punkt_2D
{
    int z;
public:
    Punkt_3D();
    Punkt_3D(int wspX,int wspY,int wspZ);
    void zapis_do_pliku ();
    void odczyt_z_pliku();
    ~Punkt_3D();
};


#endif // PUNKT_3D_H
