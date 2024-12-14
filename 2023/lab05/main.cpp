#include <iostream>
#include "Course.h"
#include "Student.h"
using namespace std;

int main(int argc, char** argv) 
{
	Course p1;
	p1.Presentation();
	p1.SetName("Informatyka");
	p1.Presentation();
	Course p2("Biologia");
	p2.Presentation();
	p2.SetX(4);
	p2.SetY(21.3); 
	p2.Presentation();
	Course p3("Chemia", 7.1, 2.5);
	p3.Presentation();
	Course p4("Historia", 1.9, 11.2);
	p4.Presentation();
	Course p5;
	p5 = p3;
	p5.SetName("Jezyk polski");
	p5.SetY(52.7);
	p5.Presentation();
	Course p6;
	p6 = p5;
	p6.SetName("Jezyk kenijski");
	p6.SetX(17);
	p6.Presentation();
	
	Student poly1; 
	poly1.Presentation();
	poly1.SetName("Jan K.");
	poly1.Presentation();
	Student poly2("Franciszek C."); 
	poly2.Presentation();
	Student poly3("Gerwazy W.", p1, p2, p3); 
	poly3.Presentation();
	Student poly4("Janusz J.", p1, p2, p3, p4); 
	poly4.Presentation();
	
	Course points[6]; 
	points[0] = p1;
	points[1] = p2;
	points[2] = p3;
	points[3] = p4;
	points[4] = p5;
	points[5] = p6;

	Student * pPoly5 = new Student("Kazimierz P.", 6, points); 
	pPoly5->Presentation();
	
	Course * pCourses = pPoly5->GetCourses();
	
	Student poly6("Honorata T.", 6, pCourses); 
	poly6.Presentation();

	// poly1.SetNewCourses(6, pCourses);
	// poly1.SetName("Leokadia Z.");
	// poly1.Presentation();
	
	// delete pPoly5;
	
	// poly6.Presentation();
	// poly1.Presentation();
	
	// poly3.SetCourse(1, "Jezyk wegierski", 45.1, 11.99);
	// poly3.Presentation();
	
	// poly4.SetCourse(0, "Wychowanie fizyczne", 23, 32.4);
	// poly4.Presentation();
	// poly3.SetCourse(4, "Kurs kucharski", 13, -4.876);
	// poly3.Presentation();

	return 0;
}

/** Wynik dzialania programu:

Wywolanie konstruktora Course...

### Prezentacja kursu ###
Nazwa:
Liczba punktow wewnetrznych za kurs: 0
Liczba punktow ECTS za kurs: 0

### Prezentacja kursu ###
Nazwa: Informatyka
Liczba punktow wewnetrznych za kurs: 0
Liczba punktow ECTS za kurs: 0

Wywolanie konstruktora Course...

### Prezentacja kursu ###
Nazwa: Biologia
Liczba punktow wewnetrznych za kurs: 0
Liczba punktow ECTS za kurs: 0

### Prezentacja kursu ###
Nazwa: Biologia
Liczba punktow wewnetrznych za kurs: 4
Liczba punktow ECTS za kurs: 21.3

Wywolanie konstruktora Course...

### Prezentacja kursu ###
Nazwa: Chemia
Liczba punktow wewnetrznych za kurs: 7.1
Liczba punktow ECTS za kurs: 2.5

Wywolanie konstruktora Course...

### Prezentacja kursu ###
Nazwa: Historia
Liczba punktow wewnetrznych za kurs: 1.9
Liczba punktow ECTS za kurs: 11.2

Wywolanie konstruktora Course...

### Prezentacja kursu ###
Nazwa: Jezyk polski
Liczba punktow wewnetrznych za kurs: 7.1
Liczba punktow ECTS za kurs: 52.7

Wywolanie konstruktora Course...

### Prezentacja kursu ###
Nazwa: Jezyk kenijski
Liczba punktow wewnetrznych za kurs: 17
Liczba punktow ECTS za kurs: 52.7

Wywolanie konstruktora Student...

### Prezentacja studenta ###
Imie i nazwisko:
Liczba realizowanych kursow: 0

### Prezentacja studenta ###
Imie i nazwisko: Jan K.
Liczba realizowanych kursow: 0

Wywolanie konstruktora Student...

### Prezentacja studenta ###
Imie i nazwisko: Franciszek C.
Liczba realizowanych kursow: 0

Wywolanie konstruktora Student...

Wywolanie konstruktora Course...

Wywolanie konstruktora Course...

Wywolanie konstruktora Course...

Wywolanie destruktora Course...

Wywolanie destruktora Course...

Wywolanie destruktora Course...

### Prezentacja studenta ###
Imie i nazwisko: Gerwazy W.
Liczba realizowanych kursow: 3
Kurs - nazwa: Informatyka, liczba punktow wewnetrznych za kurs = 0, liczba punktow ECTS za kurs = 0
Kurs - nazwa: Biologia, liczba punktow wewnetrznych za kurs = 4, liczba punktow ECTS za kurs = 21.3
Kurs - nazwa: Chemia, liczba punktow wewnetrznych za kurs = 7.1, liczba punktow ECTS za kurs = 2.5

Wywolanie konstruktora Student...

Wywolanie konstruktora Course...

Wywolanie konstruktora Course...

Wywolanie konstruktora Course...

Wywolanie konstruktora Course...

Wywolanie destruktora Course...

Wywolanie destruktora Course...

Wywolanie destruktora Course...

Wywolanie destruktora Course...

### Prezentacja studenta ###
Imie i nazwisko: Janusz J.
Liczba realizowanych kursow: 4
Kurs - nazwa: Informatyka, liczba punktow wewnetrznych za kurs = 0, liczba punktow ECTS za kurs = 0
Kurs - nazwa: Biologia, liczba punktow wewnetrznych za kurs = 4, liczba punktow ECTS za kurs = 21.3
Kurs - nazwa: Chemia, liczba punktow wewnetrznych za kurs = 7.1, liczba punktow ECTS za kurs = 2.5
Kurs - nazwa: Historia, liczba punktow wewnetrznych za kurs = 1.9, liczba punktow ECTS za kurs = 11.2

Wywolanie konstruktora Course...

Wywolanie konstruktora Course...

Wywolanie konstruktora Course...

Wywolanie konstruktora Course...

Wywolanie konstruktora Course...

Wywolanie konstruktora Course...

Wywolanie konstruktora Student...

Wywolanie konstruktora Course...

Wywolanie konstruktora Course...

Wywolanie konstruktora Course...

Wywolanie konstruktora Course...

Wywolanie konstruktora Course...

Wywolanie konstruktora Course...

### Prezentacja studenta ###
Imie i nazwisko: Kazimierz P.
Liczba realizowanych kursow: 6
Kurs - nazwa: Informatyka, liczba punktow wewnetrznych za kurs = 0, liczba punktow ECTS za kurs = 0
Kurs - nazwa: Biologia, liczba punktow wewnetrznych za kurs = 4, liczba punktow ECTS za kurs = 21.3
Kurs - nazwa: Chemia, liczba punktow wewnetrznych za kurs = 7.1, liczba punktow ECTS za kurs = 2.5
Kurs - nazwa: Historia, liczba punktow wewnetrznych za kurs = 1.9, liczba punktow ECTS za kurs = 11.2
Kurs - nazwa: Jezyk polski, liczba punktow wewnetrznych za kurs = 7.1, liczba punktow ECTS za kurs = 52.7
Kurs - nazwa: Jezyk kenijski, liczba punktow wewnetrznych za kurs = 17, liczba punktow ECTS za kurs = 52.7

Wywolanie konstruktora Student...

Wywolanie konstruktora Course...

Wywolanie konstruktora Course...

Wywolanie konstruktora Course...

Wywolanie konstruktora Course...

Wywolanie konstruktora Course...

Wywolanie konstruktora Course...

### Prezentacja studenta ###
Imie i nazwisko: Honorata T.
Liczba realizowanych kursow: 6
Kurs - nazwa: Informatyka, liczba punktow wewnetrznych za kurs = 0, liczba punktow ECTS za kurs = 0
Kurs - nazwa: Biologia, liczba punktow wewnetrznych za kurs = 4, liczba punktow ECTS za kurs = 21.3
Kurs - nazwa: Chemia, liczba punktow wewnetrznych za kurs = 7.1, liczba punktow ECTS za kurs = 2.5
Kurs - nazwa: Historia, liczba punktow wewnetrznych za kurs = 1.9, liczba punktow ECTS za kurs = 11.2
Kurs - nazwa: Jezyk polski, liczba punktow wewnetrznych za kurs = 7.1, liczba punktow ECTS za kurs = 52.7
Kurs - nazwa: Jezyk kenijski, liczba punktow wewnetrznych za kurs = 17, liczba punktow ECTS za kurs = 52.7

Wywolanie konstruktora Course...

Wywolanie konstruktora Course...

Wywolanie konstruktora Course...

Wywolanie konstruktora Course...

Wywolanie konstruktora Course...

Wywolanie konstruktora Course...

### Prezentacja studenta ###
Imie i nazwisko: Leokadia Z.
Liczba realizowanych kursow: 6
Kurs - nazwa: Informatyka, liczba punktow wewnetrznych za kurs = 0, liczba punktow ECTS za kurs = 0
Kurs - nazwa: Biologia, liczba punktow wewnetrznych za kurs = 4, liczba punktow ECTS za kurs = 21.3
Kurs - nazwa: Chemia, liczba punktow wewnetrznych za kurs = 7.1, liczba punktow ECTS za kurs = 2.5
Kurs - nazwa: Historia, liczba punktow wewnetrznych za kurs = 1.9, liczba punktow ECTS za kurs = 11.2
Kurs - nazwa: Jezyk polski, liczba punktow wewnetrznych za kurs = 7.1, liczba punktow ECTS za kurs = 52.7
Kurs - nazwa: Jezyk kenijski, liczba punktow wewnetrznych za kurs = 17, liczba punktow ECTS za kurs = 52.7

Wywolanie destruktora Student...

Wywolanie destruktora Course...

Wywolanie destruktora Course...

Wywolanie destruktora Course...

Wywolanie destruktora Course...

Wywolanie destruktora Course...

Wywolanie destruktora Course...

### Prezentacja studenta ###
Imie i nazwisko: Honorata T.
Liczba realizowanych kursow: 6
Kurs - nazwa: Informatyka, liczba punktow wewnetrznych za kurs = 0, liczba punktow ECTS za kurs = 0
Kurs - nazwa: Biologia, liczba punktow wewnetrznych za kurs = 4, liczba punktow ECTS za kurs = 21.3
Kurs - nazwa: Chemia, liczba punktow wewnetrznych za kurs = 7.1, liczba punktow ECTS za kurs = 2.5
Kurs - nazwa: Historia, liczba punktow wewnetrznych za kurs = 1.9, liczba punktow ECTS za kurs = 11.2
Kurs - nazwa: Jezyk polski, liczba punktow wewnetrznych za kurs = 7.1, liczba punktow ECTS za kurs = 52.7
Kurs - nazwa: Jezyk kenijski, liczba punktow wewnetrznych za kurs = 17, liczba punktow ECTS za kurs = 52.7

### Prezentacja studenta ###
Imie i nazwisko: Leokadia Z.
Liczba realizowanych kursow: 6
Kurs - nazwa: Informatyka, liczba punktow wewnetrznych za kurs = 0, liczba punktow ECTS za kurs = 0
Kurs - nazwa: Biologia, liczba punktow wewnetrznych za kurs = 4, liczba punktow ECTS za kurs = 21.3
Kurs - nazwa: Chemia, liczba punktow wewnetrznych za kurs = 7.1, liczba punktow ECTS za kurs = 2.5
Kurs - nazwa: Historia, liczba punktow wewnetrznych za kurs = 1.9, liczba punktow ECTS za kurs = 11.2
Kurs - nazwa: Jezyk polski, liczba punktow wewnetrznych za kurs = 7.1, liczba punktow ECTS za kurs = 52.7
Kurs - nazwa: Jezyk kenijski, liczba punktow wewnetrznych za kurs = 17, liczba punktow ECTS za kurs = 52.7

### Prezentacja studenta ###
Imie i nazwisko: Gerwazy W.
Liczba realizowanych kursow: 3
Kurs - nazwa: Jezyk wegierski, liczba punktow wewnetrznych za kurs = 45.1, liczba punktow ECTS za kurs = 11.99
Kurs - nazwa: Biologia, liczba punktow wewnetrznych za kurs = 4, liczba punktow ECTS za kurs = 21.3
Kurs - nazwa: Chemia, liczba punktow wewnetrznych za kurs = 7.1, liczba punktow ECTS za kurs = 2.5

### Prezentacja studenta ###
Imie i nazwisko: Janusz J.
Liczba realizowanych kursow: 4
Kurs - nazwa: Informatyka, liczba punktow wewnetrznych za kurs = 0, liczba punktow ECTS za kurs = 0
Kurs - nazwa: Biologia, liczba punktow wewnetrznych za kurs = 4, liczba punktow ECTS za kurs = 21.3
Kurs - nazwa: Chemia, liczba punktow wewnetrznych za kurs = 7.1, liczba punktow ECTS za kurs = 2.5
Kurs - nazwa: Historia, liczba punktow wewnetrznych za kurs = 1.9, liczba punktow ECTS za kurs = 11.2

### Prezentacja studenta ###
Imie i nazwisko: Gerwazy W.
Liczba realizowanych kursow: 3
Kurs - nazwa: Jezyk wegierski, liczba punktow wewnetrznych za kurs = 45.1, liczba punktow ECTS za kurs = 11.99
Kurs - nazwa: Biologia, liczba punktow wewnetrznych za kurs = 4, liczba punktow ECTS za kurs = 21.3
Kurs - nazwa: Chemia, liczba punktow wewnetrznych za kurs = 7.1, liczba punktow ECTS za kurs = 2.5

Wywolanie destruktora Student...

Wywolanie destruktora Course...

Wywolanie destruktora Course...

Wywolanie destruktora Course...

Wywolanie destruktora Course...

Wywolanie destruktora Course...

Wywolanie destruktora Course...

Wywolanie destruktora Course...

Wywolanie destruktora Course...

Wywolanie destruktora Course...

Wywolanie destruktora Course...

Wywolanie destruktora Course...

Wywolanie destruktora Course...

Wywolanie destruktora Student...

Wywolanie destruktora Course...

Wywolanie destruktora Course...

Wywolanie destruktora Course...

Wywolanie destruktora Course...

Wywolanie destruktora Student...

Wywolanie destruktora Course...

Wywolanie destruktora Course...

Wywolanie destruktora Course...

Wywolanie destruktora Student...

Wywolanie destruktora Student...

Wywolanie destruktora Course...

Wywolanie destruktora Course...

Wywolanie destruktora Course...

Wywolanie destruktora Course...

Wywolanie destruktora Course...

Wywolanie destruktora Course...

Wywolanie destruktora Course...

Wywolanie destruktora Course...

Wywolanie destruktora Course...

Wywolanie destruktora Course...

Wywolanie destruktora Course...

Wywolanie destruktora Course...
*/
