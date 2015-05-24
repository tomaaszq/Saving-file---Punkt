#include "Punkt_2D.h"
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>
using namespace std;

Punkt_2D::Punkt_2D()
{
    cout << "Konstruktor klasy Punkt_2D" << endl;
    y = (rand()% 11) + 0;
}

Punkt_2D::Punkt_2D(int wspX,int wspY) :Punkt_1D(wspX)
{
     cout << "Konstruktor klasy Punkt_2D" << endl;
    y = wspY;
}

int Punkt_2D::czytaj_y()
{
    return y;
}

void Punkt_2D::zapis_do_pliku()
{
    fstream plik;
    string sciezka;
    cout << "Podaj ścieżkę i nazwę pliku do której zostanie zapisana zmienna x i y: ";
    cin >> sciezka;
    plik.open(sciezka.c_str(), ios::out);
    plik << czytaj_x() << y;
    plik.close();
}
void Punkt_2D::odczyt_z_pliku()
{
    int tmp;
    fstream plik;
    string sciezka;
    cout << "Podaj ścieżkę i nazwę pliku z którego chcesz odczytać zmienną x i y: ";
    cin >> sciezka;
    plik.open(sciezka.c_str(), ios::in);
    plik >> tmp;
    plik.close();
// zamiana typu int na string,aby dostać się do konkretnego elementu
    string str;
    ostringstream temp;
    temp<<tmp;
    str=temp.str();
    cout << "W pliku znajduje się x: " << str[0] << " oraz y: " << str[1] << endl << endl;
}


Punkt_2D::~Punkt_2D()
{
    cout << "Destruktor klasy Punkt_2D" << endl;
}

