#include <iostream>
using namespace std;

//  Szablon funkcji MinTab
template<typename T>
T MinTab(T tab[], int size) {
    T min = tab[0];
    for (int i = 1; i < size; ++i) {
        if (tab[i] < min) {
            min = tab[i];
        }
    }
    return min;
}

// Szablon funkcji Zamiana
template<typename T>
void Zamiana(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

// Szablon klasy Schowek
template<typename T>
class Schowek {
private:
    T wart;
public:
    void wczytaj() {
        std::cout << "Podaj wartosc: ";
        std::cin >> wart;
    }

    T wartosc() {
        return wart;
    }
};

int main() {

    cout << "Zadanie 1" << endl;
    cout << "\n";
    int tablicaInt[] = { 4, 6, 10, 1, 8, 9, 3 };
    double tablicaDouble[] = { 5.56, 3.328, 0.326, 89.336, 1.414, 12.56, 2.23 };
    char tablicaChar[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g'};

    cout << "Najmniejsza wartosc w tablicy int: " << MinTab(tablicaInt, 7) << endl;
    cout << "Najmniejsza wartosc w tablicy double: " << MinTab(tablicaDouble, 7) << endl;
    cout << "Najmniejsza wartosc w tablicy char: " << MinTab(tablicaChar, 7) << endl;

    // Zadanie 2: Test funkcji Zamiana
    cout << "\n";
    cout << "Zadanie 2" << endl;
    cout << "\n";
    int a_int = 3, b_int = 23;
    double a_double = 5.181, b_double = 8.212;
    char a_char = 'A', b_char = 'B';

    Zamiana(a_int, b_int);
    Zamiana(a_double, b_double);
    Zamiana(a_char, b_char);

    cout << "a_int: " << a_int << ", b_int: " << b_int << endl;
    cout << "a_double: " << a_double << ", b_double: " << b_double << std::endl;
    cout << "a_char: " << a_char << ", b_char: " << b_char << endl;

    
    cout << "\n";
    cout << "Zadanie 3" << endl;
    cout << "\n";
    Schowek<int> schowekInt;
    Schowek<double> schowekDouble;
    Schowek<char> schowekChar;

    schowekInt.wczytaj();
    schowekDouble.wczytaj();
    schowekChar.wczytaj();

    cout << "Wartosc w schowku typu int: " << schowekInt.wartosc() << endl;
    cout << "Wartosc w schowku typu double: " << schowekDouble.wartosc() << endl;
    cout << "Wartosc w schowku typu char: " << schowekChar.wartosc() << endl;

    cout << "\n";
    cout << "Zadanie 4" << endl;
    cout << "\n";
    Schowek<int> schowek1, schowek2;
    schowek1.wczytaj();
    schowek2.wczytaj();
    cout << "Wartosci przed zamiana: " << schowek1.wartosc() << " i " << schowek2.wartosc() << endl;
    Zamiana(schowek1, schowek2);
    cout << "Wartosci po zamianie: " << schowek1.wartosc() << " i " << schowek2.wartosc() << endl;

    return 0;
}
