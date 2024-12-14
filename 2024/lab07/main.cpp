// To jest przykład instrukcji do ćwiczeń - kompletna instrukcja 
// zawsze będzie zawarta w tym miejscu, tj. w pliku Main.cpp
//  
// Prosze uzupelnic niniejsze kody tak, aby program wykonywal się a wynik jego dzialania byl taki sam jak podany na końcu tego pliku.
// Wszystkie zamieszczone w pliku Struct.h struktury danych musza byc alokowane i dealokowane WYŁĄCZNIE za pomoca operatorow
// wybranych spośród następującej listy: new, new [], delete, delete []

//
// Pliku Main.cpp oraz funkcji zdefiniowanych juz w zalaczonych plikach cpp nie wolno modyfikowac.
//
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



#include <iostream>
#include "Struct.h"
using namespace std;


int main(int argc, char** argv) 
{
    int V = 5;
    Map* map = createMap(V);
    addHighway(map, 0, 1);
    addHighway(map, 0, 4);
    addHighway(map, 1, 2);
    addHighway(map, 1, 3);
    addHighway(map, 1, 4);
    addHighway(map, 2, 3);
    addHighway(map, 3, 4);

    DFS(map, 0);

    cout << "\nSearching for highway beetwen cities 1 and 3: ";
    if( searchHighway(map, 1, 3) )
    	cout << "Found\n";
	else
		cout << "Not Found\n";
		
    deleteHighway(map, 1, 3);

    cout << "\nSearching for highway beetwen cities 1 and 3: ";
    if( searchHighway(map, 1, 3) )
    	cout << "Found\n";
	else
		cout << "Not Found\n";
		
    DFS(map, 0);

    cout << "\nSearching for highway beetwen cities 2 and 3: ";
    if( searchHighway(map, 2, 3) )
    	cout << "Found\n";
	else
		cout << "Not Found\n";

    deleteHighway(map, 2, 3);

    cout << "\nSearching for highway beetwen cities 2 and 3: ";
    if( searchHighway(map, 2, 3) )
    	cout << "Found\n";
	else
		cout << "Not Found\n";

    DFS(map, 0);
    
    
    deleteMap(map);


	return 0;
}

/** Wynik dzialania programu:
Highways beetwen cities: [0,4] [4,3] [3,4] [3,2] [2,3] [2,1] [1,4] [1,3] [1,2] [1,0] [3,1] [4,1] [4,0] [0,1]

Searching for highway beetwen cities 1 and 3: Found

Searching for highway beetwen cities 1 and 3: Not Found

Highways beetwen cities: [0,4] [4,3] [3,4] [3,2] [2,3] [2,1] [1,4] [1,2] [1,0] [4,1] [4,0] [0,1]

Searching for highway beetwen cities 2 and 3: Found

Searching for highway beetwen cities 2 and 3: Not Found

Highways beetwen cities: [0,4] [4,3] [3,4] [4,1] [1,4] [1,2] [2,1] [1,0] [4,0] [0,1]
*/
