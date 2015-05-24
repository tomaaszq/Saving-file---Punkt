#include "Punkt_1D.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

Punkt_1D::Punkt_1D()
{
    cout << "Konstruktor klasy Punkt_1D" << endl;
    x = (rand()% 10) + 0;
}

Punkt_1D::Punkt_1D(int wsp)
{
     cout << "Konstruktor klasy Punkt_1D" << endl;
    x = wsp;
}

int Punkt_1D::czytaj_x()
{
    return x;
}

void Punkt_1D::zapis_do_pliku()
{
    fstream plik;
    string sciezka;
    cout << "Podaj ścieżkę i nazwę pliku do której zostanie zapisana zmienna x: ";
    cin >> sciezka;
    plik.open(sciezka.c_str(), ios::out);
    plik << x;
    plik.close();
}
void Punkt_1D::odczyt_z_pliku()
{
    int tmp;
    fstream plik;
    string sciezka;
    cout << "Podaj ścieżkę i nazwę pliku z którego chcesz odczytać zmienną x: ";
    cin >> sciezka;
    plik.open(sciezka.c_str(), ios::in);
    plik >> tmp;
    plik.close();

    // zamiana typu int na string,aby dostać się do konkretnego elementu
    string str;
    ostringstream temp;
    temp<<tmp;
    str=temp.str();
    cout << "W pliku znajduje się zmienna x: " << str[0] << endl << endl;
}

Punkt_1D::~Punkt_1D()
{

    cout << "Destruktor klasy Punkt_1D" << endl;
}
