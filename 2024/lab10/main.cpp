// To jest przykład instrukcji do ćwiczeń - kompletna instrukcja 
// zawsze będzie zawarta w tym miejscu, tj. w pliku Main.cpp
//  
// Prosze uzupelnic niniejsze kody tak, aby program wykonywal się a wynik jego dzialania byl taki sam jak podany na końcu tego pliku.
//
// Pliku Main.cpp oraz funkcji zdefiniowanych juz w zalaczonych plikach cpp nie wolno modyfikowac.
//
// Uwaga: Poziomy dostepu do skladnikow klas powinny byc dobrane zgodnie z zasadami programowania obiektowego (hermetyzacja/ekapsulacja)  
// Staraj się nie powielać tego samego kodu w różnych miejscach. 
// Kazda klasa powinna byc zdefiniowana w oddzielnym pliku h (deklaracje funkcji, klas i metod, ewentualnie takze definicje jesli klasa szablonowa) i cpp (definicje).
//
// !!! W implementowanych klasach mozna uzywac tylko tablic dynamicznych !!! 

// Ostateczny program powinien byc przyjazny dla programisty
// (miec czytelny i dobrze napisany kod)
//
// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek,
// ani żadnych innych materialow (w tym własnych wczesniej
// przygotowanych plikow oprócz makefile, chyba że polecenie stanowi inaczej)
//
//
// Kody źródłowe muszą znajdować się w katalogu do którego nikt oprócz
// właściciela nie ma praw dostępu.
// Rozwiazanie (czyli dodane pliki i Main.cpp należy wgrać do UPEL 
// jako archiwum tar.gz o strukturze takiej jak w zadaniu na UPeL.
// UWAGA:
// * archiwum powinno zawierać katalog z zadaniem labNN/ (gdzie NN to nr laboratorium np. lab01)
// * katalog z zadaniem powinien zawierać podkatalog include/
//   w którym muszą znajdować się wszystkie niezbędne pliki nagłówkowe
// * katalog z zadaniem powinien zawierać podkatalog src/
//   w którym muszą znajdować się wszystkie niezbędne pliki z kodem źródłowym
// * katalog z zadaniem powinien zawierać podkatalog build/ 
//   w którym powinien znajdować się tylko i wyłącznie plik Makefile
// * tworzenie archiwum: tar -czvf nazwa.tar.gz zad/
//   np. tar -czvf lab01.tar.gz lab01/
// * rozpakowanie archiwum: tar -xvf nazwa.tar.gz
// * wszystkie funkcje w plikach *.h powinny być okomentowane zgodnie z wczesniej ustalonym wzorem (format pod Doxygena)
// * do szybkiej weryfikacji poprawnosci wyjscia mozna uzyc diff-a (np.: diff -B plik_z_outputem_z_main plik_z_outputem_z_programu > wyniki_porownania.out)



#include <iostream>
#include "Product.h"
#include "Shop.h"

using namespace std;


int main(int argc, char** argv) 
{
	Product e1(1, 5);
	e1.Print();
	Product e2(2, 3);
	Product e3(3, 17);
	Product e4(4, 9);
	Product e5(5, 1);
	Product e6(6, 7);
	Product e7(7, 4);
	Product e8(8, 2);
	Product e9(9);
	e9.Print();
	
	Product* t[3];
	t[0] = &e4;
	t[1] = &e5;
	t[2] = &e6;
	
	Product* v[3];
	v[0] = &e7;
	v[1] = &e8;
	v[2] = &e9;

	
	Shop S1;
	S1.Print();
	S1.Remove();
	
	Shop S2(e1);
	S2.Print();
	
	//Shop S3(2, e3);	// nie moze sie kompilowac po odkomentowaniu
	Shop S3(Product(2), e3);
	S3.Print();
	S3.Remove();
	S3.Print();
	S3.Remove();
	S3.Print();
	S3.Add(e3);
	S3.Add(e2);
	S3.Print();

	Shop S4(3, t);
	S4.Print();
	e5.SetCard(13);
	e5.Print();
	S4.Print();
	
	Shop* pS5 = new Shop(3, v);
	pS5->Print();
	v[0] = NULL; v[1] = NULL; v[2] = NULL;
	pS5->Print();
	
	Shop S6(S4);
	S4.Print();
	S6.Print();
	S4.Clear();
	S4.Print();
	S6.Print();

	Shop S7 = *pS5;
	delete pS5;
	S7.Print();
	S7.Add(e1);
	S7.Print();



	return 0;
}

/** Wynik dzialania programu:
typ: 1, ilosc sztuk: 5
typ: 9, ilosc sztuk: 9
---
# Zawartosc/sklad:
Pusto !
---
BLAD: Pusto !
---
# Zawartosc/sklad:
typ: 1, ilosc sztuk: 5
---
---
# Zawartosc/sklad:
typ: 2, ilosc sztuk: 2
typ: 3, ilosc sztuk: 17
---
---
# Zawartosc/sklad:
typ: 2, ilosc sztuk: 2
---
---
# Zawartosc/sklad:
Pusto !
---
---
# Zawartosc/sklad:
typ: 3, ilosc sztuk: 17
typ: 2, ilosc sztuk: 3
---
---
# Zawartosc/sklad:
typ: 4, ilosc sztuk: 9
typ: 5, ilosc sztuk: 1
typ: 6, ilosc sztuk: 7
---
typ: 5, ilosc sztuk: 13
---
# Zawartosc/sklad:
typ: 4, ilosc sztuk: 9
typ: 5, ilosc sztuk: 1
typ: 6, ilosc sztuk: 7
---
---
# Zawartosc/sklad:
typ: 7, ilosc sztuk: 4
typ: 8, ilosc sztuk: 2
typ: 9, ilosc sztuk: 9
---
---
# Zawartosc/sklad:
typ: 7, ilosc sztuk: 4
typ: 8, ilosc sztuk: 2
typ: 9, ilosc sztuk: 9
---
---
# Zawartosc/sklad:
typ: 4, ilosc sztuk: 9
typ: 5, ilosc sztuk: 1
typ: 6, ilosc sztuk: 7
---
---
# Zawartosc/sklad:
typ: 4, ilosc sztuk: 9
typ: 5, ilosc sztuk: 1
typ: 6, ilosc sztuk: 7
---
---
# Zawartosc/sklad:
Pusto !
---
---
# Zawartosc/sklad:
typ: 4, ilosc sztuk: 9
typ: 5, ilosc sztuk: 1
typ: 6, ilosc sztuk: 7
---
---
# Zawartosc/sklad:
typ: 7, ilosc sztuk: 4
typ: 8, ilosc sztuk: 2
typ: 9, ilosc sztuk: 9
---
---
# Zawartosc/sklad:
typ: 7, ilosc sztuk: 4
typ: 8, ilosc sztuk: 2
typ: 9, ilosc sztuk: 9
typ: 1, ilosc sztuk: 5
---
*/
