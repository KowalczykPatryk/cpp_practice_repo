// Proszę dopisać kod, dodać nowe pliki, tak aby program wykonywał się,
// a wynik jego działania był zgodny z podanym na końcu tego pliku.
//
// Proszę zaimplementować:
// 1. Bazową klasę `Measurement`:
//    - Przechowuje wartość liczbową `value`.
//    - Zawiera metody `GetValue()` i `SetValue()`.
//    - Definiuje konwersję NIEJAWNĄ do `double`.
// 2. Klasy pochodne:
//    - `Length`:
//        - Reprezentuje długość w metrach.
//        - Definiuje JAWNĄ konwersję do `Measurement`.
//    - `Weight`:
//        - Reprezentuje masę w kilogramach.
//        - Definiuje NIEJAWNĄ konwersję do `Measurement`.
// 3. Przeciążenia operatorów:
//    - Operator `+` umożliwiający dodawanie `Measurement`.
//    - Operator `<<` dla std::ostream do wyświetlania wartości.
//
// Pliku `Main.cpp` nie wolno modyfikować.
//
// Ostateczny program powinien być czytelny, zgodny z zasadą D.R.Y.
// oraz odpowiednio zarządzać pamięcią.
//
// Przy wykonaniu zadania nie wolno korzystać z internetu, notatek,
// ani żadnych innych materiałów.
//
// Kody źródłowe muszą znajdować się w katalogu, do którego nikt oprócz
// właściciela nie ma praw dostępu. Rozwiązanie (czyli dodane pliki i Main.cpp)
// należy wgrać do UPEL jako archiwum tar.gz.
//
// UWAGA:
// * Archiwum powinno zawierać katalog z zadaniem, np. lab_2/
// * Archiwum nie powinno zawierać katalogu build/

#include "Measurement.h"
#include "Length.h"
#include "Weight.h"
#include <iostream>

int main() {
    Length l1(5.0);
    Weight w1(70.0);
    Measurement m1 = l1;  // Jawna konwersja
    Measurement m2 = w1;  // Niejawna konwersja

    std::cout << "Length: " << l1 << " meters\n";
    std::cout << "Weight: " << w1 << " kg\n";
    std::cout << "Measurement from Length: " << m1 << "\n";
    std::cout << "Measurement from Weight: " << m2 << "\n";
    
    Measurement sum = m1 + m2;
    std::cout << "Sum of measurements: " << sum << "\n";
    
    return 0;
}