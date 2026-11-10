#include <iostream>
#include <fstream>
#include <string>

using namespace std;


// Klasa uczen
class uczen
{
    int age;
    string firstName, lastName;

public:

    // Konstruktor
    uczen()
    {
        age = 0;
        firstName = "";
        lastName = "";
    }

    // Wprowadzanie danych
    void wprowadz()
    {
        cout << "Podaj imie: ";
        cin >> firstName;

        cout << "Podaj nazwisko: ";
        cin >> lastName;

        cout << "Podaj wiek: ";
        cin >> age;
    }

    // Wyswietlanie danych
    void wypisz()
    {
        cout << firstName << " " << lastName << " " << age << endl;
    }

    // Zapis do pliku
    void zapisz(ofstream &file)
    {
        file << firstName << " " << lastName << " " << age << endl;
    }
};


// Klasa klasa
class klasa
{
    uczen t[3];

public:

    // Wprowadzanie danych trzech uczniow
    void wprowadz()
    {
        for(int i = 0; i < 3; i++)
        {
            cout << "\nUczen " << i + 1 << endl;
            t[i].wprowadz();
        }
    }

    // Wyswietlanie danych
    void wypisz()
    {
        for(int i = 0; i < 3; i++)
        {
            t[i].wypisz();
        }
    }

    // Zapisywanie danych do pliku
    void zapisz()
    {
        ofstream file("dane.txt");

        for(int i = 0; i < 3; i++)
        {
            t[i].zapisz(file);
        }

        file.close();
    }
};


// Funkcja glowna
int main()
{
    klasa group;

    group.wprowadz();

    cout << "\nDane uczniow:\n";
    group.wypisz();

    group.zapisz();

    cout << "\nDane zapisano do pliku dane.txt";

    return 0;
}
