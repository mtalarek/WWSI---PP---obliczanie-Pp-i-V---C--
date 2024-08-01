#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void PC_V_walec() {

    double r, h, PP, PB, PC, V;
    cout << "Podaj r: " << endl;
    cin >> r;
    cout << "Podaj h: " << endl;
    cin >> h;
    if (r < 0 || h < 0) { cout << "bledne dane!"; }
    else {
        cout << "r: " << r << ", h: " << h << endl;
        PP = M_PI * r * r;
        PB = 2 * M_PI * r * h;
        PC = 2 * PP + PB;
        V = PP * h;
        cout.precision(2);
        cout << "Pole calkowite: " << fixed << PC << endl;
        cout << "Objetosc: " << V << endl;
    }
}

void PC_V_stozek() {
	double r, h, b, PP, PB, PC, V;
    cout << "Podaj r: " << endl;
    cin >> r;
    cout << "Podaj h: " << endl;
    cin >> h;
    if (r < 0 || h < 0) { cout << "bledne dane!"; }
    else {
        cout << "r: " << r << ", h: " << h << endl;
        b = sqrt((r*r)+(h*h));                          //d³ugoœæ boku
        PP = M_PI * r * r;
        PB = M_PI * r * b;
        PC = PP + PB;
        V = PP * h / 3;
        cout.precision(2);
        cout << "Pole calkowite: " << fixed << PC << endl;
        cout << "Objetosc: " << V << endl;
    }
}

void PC_V_kula() {
	double r, PC, V;
    cout << "Podaj r: " << endl;
    cin >> r;
    if (r < 0) { cout << "bledne dane!"; }
    else {
        cout << "r: " << r << endl;
        PC = 4 * M_PI * r * r;
        V = M_PI * r * r * r * 4 / 3;
        cout.precision(2);
        cout << "Pole calkowite: " << fixed << PC << endl;
        cout << "Objetosc: " << V << endl;
    }
}

int main()
{
    cout << "Wybierz bryle: walec <1>, stozek <2>, kula <3>";
    int wybor;
    cin >> wybor;
	switch (wybor) {
	case 1:PC_V_walec(); break;
	case 2:PC_V_stozek(); break;
	case 3:PC_V_kula(); break;
	default:cout << "Niepoprawny wybor";
	break;
	}
}


// Sprawdzenie:

// walec:
// r=(-1), h=5
// wynik z programu: b³êdne dane
// wynik z kalk. www: b³êdne dane

// r=(100), h=-5
// wynik z programu: b³êdne dane
// wynik z kalk. www: b³êdne dane

// r=(123), h=321
// wynik z programu: PC=343137.32, V=15256858.84
// wynik z kalk. www: PC=343137.32, V=15256858.84

// sto¿ek:
// r=(-1), h=5
// wynik z programu: b³êdne dane
// wynik z kalk. www: b³êdne dane

// r=(100), h=-5
// wynik z programu: b³êdne dane
// wynik z kalk. www: b³êdne dane

// r=(123), h=321
// wynik z programu: PC=180362.96, V=5085619.61
// wynik z kalk. www: PC=180362.96, V=5085619.61

// kula:
// r=(-10)
// wynik z programu: b³êdne dane
// wynik z kalk. www: b³êdne dane

// r=123
// wynik z programu: PC=190116.62, V=7794781.46
// wynik z kalk. www: PC=190116.62, V=7794781.46
