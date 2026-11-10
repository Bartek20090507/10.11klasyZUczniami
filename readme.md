# Opis programu

Program napisany w języku C++ służy do wprowadzania, wyświetlania i zapisywania danych trzech uczniów do pliku tekstowego.

Program składa się z dwóch klas:

- `uczen` – przechowuje imię, nazwisko i wiek ucznia. Zawiera konstruktor oraz funkcje do wprowadzania, wyświetlania i zapisywania danych.
- `klasa` – przechowuje tablicę trzech uczniów i umożliwia obsługę ich danych za pomocą pętli `for`.

## Działanie programu

1. Tworzy obiekty trzech uczniów.
2. Pobiera z klawiatury imię, nazwisko i wiek każdego ucznia.
3. Wyświetla wprowadzone dane na ekranie.
4. Zapisuje wszystkie dane do pliku `dane.txt`.

Program wykorzystuje biblioteki `iostream`, `fstream` i `string`.