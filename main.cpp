#include <iostream>
#include <cstdlib>
#include "Punkt_1D.h"
#include "Punkt_2D.h"
#include "Punkt_3D.h"
using namespace std;

int menu()
{
    int k;
    cout << endl;
    cout << "Wylosuję x, y i z. W tej aplikacji możesz:" << endl <<
            "  1.Wylosować i zapisać do pliku wylosowaną zmienną x, a następnie ją przeczytać" << endl <<
            "  2.Wylosować i zapisać do pliku wylosowane zmienne x i y, a następnie ją przeczytać" << endl <<
            "  3.Wylosować i zapisać do pliku wylosowane zmienne x,y i z, a następnie ją przeczytać" << endl <<
            "  4.Podać i zapisać do pliku zmienną x, a następnie ją przeczytać" << endl <<
            "  5.Podać i zapisać do pliku zmienne x i y, a następnie je przeczytać" << endl <<
            "  6.Podać i zapisać do pliku zmienne x,y i z, a następnie je przeczytać" << endl <<
            "Co chcesz zrobić?: ";
    cin >> k;
    return k;
}

int main()
{
    srand( time( NULL ) );

    int k,r,e,w;
    k=menu();
    switch(k)
    {
    case 1:
    {
        Punkt_1D P1;
        P1.zapis_do_pliku();
        P1.odczyt_z_pliku();
        break;
    }
    case 2:
    {
        Punkt_1D P1;
        Punkt_2D P2;
        P2.zapis_do_pliku();
        P2.odczyt_z_pliku();
        break;
    }
    case 3:
    {
        Punkt_1D P1;
        Punkt_2D P2;
        Punkt_3D P3;
        P3.zapis_do_pliku();
        P3.odczyt_z_pliku();
        break;
    }
    case 4:
    {
        cout << "Podaj współrzędną x: ";
        cin >> r;
        Punkt_1D P1(r);
        P1.zapis_do_pliku();
        P1.odczyt_z_pliku();
        break;
    }
    case 5:
    {
        cout << "Podaj współrzędną x: ";
        cin >> r;
        cout << "Podaj współrzędną y:";
        cin >> e;
        Punkt_2D P2(r,e);
        P2.zapis_do_pliku();
        P2.odczyt_z_pliku();
        break;
    }
    case 6:
    {
        cout << "Podaj współrzędną x: ";
        cin >> r;
        cout << "Podaj współrzędną y: ";
        cin >> e;
        cout << "Podaj współrzędną z: ";
        cin >> w;
        Punkt_3D P3(r,e,w);
        P3.zapis_do_pliku();
        P3.odczyt_z_pliku();
        break;
    }
    }


    return 0;
}
