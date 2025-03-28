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
// !!! W wersji na najwyzsza liczbe punktow w implementowanych klasach mozna uzywac tylko tablic dynamicznych 

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
#include "Point.h"
#include "Polygon.h"
using namespace std;


int main(int argc, char** argv) 
{
	Point p1;
	p1.Presentation();
	p1.SetName("A");
	p1.Presentation();
	Point p2("B");
	p2.Presentation();
	p2.SetX(4);
	p2.SetY(21.3); 
	p2.Presentation();
	Point p3("C", 7.1, 2.5);
	p3.Presentation();
	Point p4("D", 1.9, 11.2);
	p4.Presentation();
	Point p5;
	p5 = p3;
	p5.SetName("E");
	p5.SetY(52.7);
	p5.Presentation();
	Point p6;
	p6 = p5;
	p6.SetName("F");
	p6.SetX(17);
	p6.Presentation();
	
	Polygon poly1; 
	poly1.Presentation();
	poly1.SetName("Zerokat");
	poly1.Presentation();
	Polygon poly2("Nastepny zerokat"); 
	poly2.Presentation();
	Polygon poly3("Trojkat", p1, p2, p3); 
	poly3.Presentation();
	Polygon poly4("Czworokat", p1, p2, p3, p4); 
	poly4.Presentation();
	
	Point points[6]; 
	points[0] = p1;
	points[1] = p2;
	points[2] = p3;
	points[3] = p4;
	points[4] = p5;
	points[5] = p6;

	Polygon * pPoly5 = new Polygon("Szesciokat", 6, points); 
	pPoly5->Presentation();
	
	Point * pPoints = pPoly5->GetVertices();
	
	Polygon poly6("Nastepny szeciokat", 6, pPoints); 
	poly6.Presentation();

	poly1.SetNewVertices(6, pPoints);
	poly1.SetName("Oryginalny zerokat");
	poly1.Presentation();
	
	delete pPoly5;
	
	poly6.Presentation();
	poly1.Presentation();
	
	poly3.SetVertice(1, "G", 45.1, 11.99);
	poly3.Presentation();
	
	poly4.SetVertice(0, "H", 23, 32.4);
	poly4.Presentation();
	poly3.SetVertice(4, "I", 13, -4.876);
	poly3.Presentation();


	return 0;
}

/** Wynik dzialania programu:

### Prezentacja punktu ###
Nazwa:
Wspolrzedna X: 0
Wspolrzedna Y: 0

### Prezentacja punktu ###
Nazwa: A
Wspolrzedna X: 0
Wspolrzedna Y: 0

### Prezentacja punktu ###
Nazwa: B
Wspolrzedna X: 0
Wspolrzedna Y: 0

### Prezentacja punktu ###
Nazwa: B
Wspolrzedna X: 4
Wspolrzedna Y: 21.3

### Prezentacja punktu ###
Nazwa: C
Wspolrzedna X: 7.1
Wspolrzedna Y: 2.5

### Prezentacja punktu ###
Nazwa: D
Wspolrzedna X: 1.9
Wspolrzedna Y: 11.2

### Prezentacja punktu ###
Nazwa: E
Wspolrzedna X: 7.1
Wspolrzedna Y: 52.7

### Prezentacja punktu ###
Nazwa: F
Wspolrzedna X: 17
Wspolrzedna Y: 52.7

### Prezentacja wielokata ###
Nazwa:
Liczba wierzcholkow: 0

### Prezentacja wielokata ###
Nazwa: Zerokat
Liczba wierzcholkow: 0

### Prezentacja wielokata ###
Nazwa: Nastepny zerokat
Liczba wierzcholkow: 0

### Prezentacja wielokata ###
Nazwa: Trojkat
Liczba wierzcholkow: 3
Wierzcholek - nazwa: A, X = 0, Y = 0
Wierzcholek - nazwa: B, X = 4, Y = 21.3
Wierzcholek - nazwa: C, X = 7.1, Y = 2.5

### Prezentacja wielokata ###
Nazwa: Czworokat
Liczba wierzcholkow: 4
Wierzcholek - nazwa: A, X = 0, Y = 0
Wierzcholek - nazwa: B, X = 4, Y = 21.3
Wierzcholek - nazwa: C, X = 7.1, Y = 2.5
Wierzcholek - nazwa: D, X = 1.9, Y = 11.2

### Prezentacja wielokata ###
Nazwa: Szesciokat
Liczba wierzcholkow: 6
Wierzcholek - nazwa: A, X = 0, Y = 0
Wierzcholek - nazwa: B, X = 4, Y = 21.3
Wierzcholek - nazwa: C, X = 7.1, Y = 2.5
Wierzcholek - nazwa: D, X = 1.9, Y = 11.2
Wierzcholek - nazwa: E, X = 7.1, Y = 52.7
Wierzcholek - nazwa: F, X = 17, Y = 52.7

### Prezentacja wielokata ###
Nazwa: Nastepny szeciokat
Liczba wierzcholkow: 6
Wierzcholek - nazwa: A, X = 0, Y = 0
Wierzcholek - nazwa: B, X = 4, Y = 21.3
Wierzcholek - nazwa: C, X = 7.1, Y = 2.5
Wierzcholek - nazwa: D, X = 1.9, Y = 11.2
Wierzcholek - nazwa: E, X = 7.1, Y = 52.7
Wierzcholek - nazwa: F, X = 17, Y = 52.7

### Prezentacja wielokata ###
Nazwa: Oryginalny zerokat
Liczba wierzcholkow: 6
Wierzcholek - nazwa: A, X = 0, Y = 0
Wierzcholek - nazwa: B, X = 4, Y = 21.3
Wierzcholek - nazwa: C, X = 7.1, Y = 2.5
Wierzcholek - nazwa: D, X = 1.9, Y = 11.2
Wierzcholek - nazwa: E, X = 7.1, Y = 52.7
Wierzcholek - nazwa: F, X = 17, Y = 52.7

### Prezentacja wielokata ###
Nazwa: Nastepny szeciokat
Liczba wierzcholkow: 6
Wierzcholek - nazwa: A, X = 0, Y = 0
Wierzcholek - nazwa: B, X = 4, Y = 21.3
Wierzcholek - nazwa: C, X = 7.1, Y = 2.5
Wierzcholek - nazwa: D, X = 1.9, Y = 11.2
Wierzcholek - nazwa: E, X = 7.1, Y = 52.7
Wierzcholek - nazwa: F, X = 17, Y = 52.7

### Prezentacja wielokata ###
Nazwa: Oryginalny zerokat
Liczba wierzcholkow: 6
Wierzcholek - nazwa: A, X = 0, Y = 0
Wierzcholek - nazwa: B, X = 4, Y = 21.3
Wierzcholek - nazwa: C, X = 7.1, Y = 2.5
Wierzcholek - nazwa: D, X = 1.9, Y = 11.2
Wierzcholek - nazwa: E, X = 7.1, Y = 52.7
Wierzcholek - nazwa: F, X = 17, Y = 52.7

### Prezentacja wielokata ###
Nazwa: Trojkat
Liczba wierzcholkow: 3
Wierzcholek - nazwa: G, X = 45.1, Y = 11.99
Wierzcholek - nazwa: B, X = 4, Y = 21.3
Wierzcholek - nazwa: C, X = 7.1, Y = 2.5

### Prezentacja wielokata ###
Nazwa: Czworokat
Liczba wierzcholkow: 4
Wierzcholek - nazwa: A, X = 0, Y = 0
Wierzcholek - nazwa: B, X = 4, Y = 21.3
Wierzcholek - nazwa: C, X = 7.1, Y = 2.5
Wierzcholek - nazwa: D, X = 1.9, Y = 11.2

### Prezentacja wielokata ###
Nazwa: Trojkat
Liczba wierzcholkow: 3
Wierzcholek - nazwa: G, X = 45.1, Y = 11.99
Wierzcholek - nazwa: B, X = 4, Y = 21.3
Wierzcholek - nazwa: C, X = 7.1, Y = 2.5
*/
