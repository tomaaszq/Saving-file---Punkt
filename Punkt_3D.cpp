#include "Punkt_3D.h"
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;


Punkt_3D::Punkt_3D()
{
    cout << "Konstruktor klasy Punkt_3D" << endl;
    z = (rand()% 11) + 0;
}

Punkt_3D::Punkt_3D(int wspX,int wspY, int wspZ) :Punkt_2D(wspX,wspY)
{
     cout << "Konstruktor klasy Punkt_3D" << endl;
    z = wspZ;
}

void Punkt_3D::zapis_do_pliku()
{
    fstream plik;
    string sciezka;
    cout << "Podaj ścieżkę i nazwę pliku do której zostanie zapisana zmienna x,y i z: ";
    cin >> sciezka;
    plik.open(sciezka.c_str(), ios::out);
    plik << czytaj_x() << czytaj_y() << z;
    plik.close();
}
void Punkt_3D::odczyt_z_pliku()
{
    int tmp;
    fstream plik;
    string sciezka, s;
    cout << "Podaj ścieżkę i nazwę pliku z którego chcesz odczytać zmienną x,y i z: ";
    cin >> sciezka;
    plik.open(sciezka.c_str(), ios::in);
    plik >> tmp;
    plik.close();
// zamiana typu int na string,aby dostać się do konkretnego elementu
    string str;
    ostringstream temp;
    temp<<tmp;
    str=temp.str();
    cout << "W pliku znajduje się x: " << str[0] << ", y: " << str[1] << " oraz z: " << str[2] << endl << endl;
}

Punkt_3D::~Punkt_3D()
{
    cout << "Destruktor klasy Punkt_3D" << endl;
}
