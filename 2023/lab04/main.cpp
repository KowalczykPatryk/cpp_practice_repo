#include <iostream>
#include "SnowCannon.h"
#include "Service.h"
using namespace std;


int main(int argc, char** argv) 
{
	SnowCannon MySnowCannon1;
	
	MySnowCannon1.SetID(1);
	MySnowCannon1.SetState(false);
	MySnowCannon1.SetCapacity(1000.0);
	//MySnowCannon1.SetConsumption(0.4);
	MySnowCannon1.SetConsumption(0.5);
	MySnowCannon1.SetWater(0.0);

	MySnowCannon1.Presentation();
	
	MySnowCannon1.Make(-5);
	MySnowCannon1.Make(100);
	MySnowCannon1.Start();
	MySnowCannon1.Reload(100);
	MySnowCannon1.Make(150);
	MySnowCannon1.Start();
	MySnowCannon1.Make(150);
	MySnowCannon1.Reload(5000);
	MySnowCannon1.Stop();
	MySnowCannon1.Reload(-10);
	MySnowCannon1.Reload(5000);
	MySnowCannon1.Start();
	MySnowCannon1.Make(150);
	MySnowCannon1.Make(200);
	MySnowCannon1.Stop();

	MySnowCannon1.Presentation();
	
//////////////////////////////////////	

	SnowCannon * pMySnowCannon1 = &MySnowCannon1;
	
//////////////////////////////////////	

	Service SnowCannonService;
	
	SnowCannonService.Test(&MySnowCannon1, 100.0);
	MySnowCannon1.Presentation();

	SnowCannonService.Test(pMySnowCannon1, 300.0);	
	MySnowCannon1.Presentation();

	SnowCannonService.TestCopy(MySnowCannon1, 200.0);
	MySnowCannon1.Presentation();

//////////////////////////////////////	
	

	return 0;
}

/** Wynik dzialania programu:

### Prezentacja ###
Identyfikator armatki snieznej: 1
Armatka sniezna jest wylaczona
Pojemnosc zbiornika armatki wynosi 1000 metrow szesciennych
Srednia wydajnosc wynosi 0.5 metrow szesciennych wody na 1 metr szescienny sniegu
W zbiorniku armatki jest 0 metrow szesciennych wody

### Robienie sniegu ###
BLAD: Niepoprawna ilosc metrow szesciennych

### Robienie sniegu ###
BLAD: Wlacz armatke sniezna

### Uruchomienie armatki snieznej ###
BLAD: Brak wody, dolej do zbiornika zasilajacego

### Uzupelnienie zbiornika armatki snieznej woda ###
Uzupelniles 100 metrow szesciennych wody

### Robienie sniegu ###
BLAD: Wlacz armatke sniezna

### Uruchomienie armatki snieznej ###
Armatka sniezna zostala wlaczona --

### Robienie sniegu ###
Zrobiles 150 metrow szesciennych sniegu

### Uzupelnienie zbiornika armatki snieznej woda ###
BLAD: Wylacz armatke sniezna przed uzupelnieniem wody

### Zatrzymanie armatki snieznej ###
Armatka sniezna zostala wylaczona

### Uzupelnienie zbiornika armatki snieznej woda ###
BLAD: Niepoprawna ilosc wody

### Uzupelnienie zbiornika armatki snieznej woda ###
Uzupelniles 975 metrow szesciennych wody

### Uruchomienie armatki snieznej ###
Armatka sniezna zostala wlaczona

### Robienie sniegu ###
Zrobiles 150 metrow szesciennych sniegu

### Robienie sniegu ###
Zrobiles 200 metrow szesciennych sniegu

### Zatrzymanie armatki snieznej ###
Armatka sniezna zostala wylaczona

### Prezentacja ###
Identyfikator armatki snieznej: 1
Armatka sniezna jest wylaczona
Pojemnosc zbiornika armatki wynosi 1000 metrow szesciennych
Srednia wydajnosc wynosi 0.5 metrow szesciennych wody na 1 metr szescienny sniegu
W zbiorniku armatki jest 825 metrow szesciennych wody

#############################################################
### Test serwisowy ###

1. Uzupelnij zbiornik do pelna:
### Uzupelnienie zbiornika armatki snieznej woda ###
Uzupelniles 175 metrow szesciennych wody
2. Przebieg testowy: 100 metrow szesciennych:
### Uruchomienie armatki snieznej ###
Armatka sniezna zostala wlaczona

### Robienie sniegu ###
Zrobiles 100 metrow szesciennych sniegu

### Zatrzymanie armatki snieznej ###
Armatka sniezna zostala wylaczona

### Koniec testu serwisowego ###
#############################################################

### Prezentacja ###
Identyfikator armatki snieznej: 1
Armatka sniezna jest wylaczona
Pojemnosc zbiornika armatki wynosi 1000 metrow szesciennych
Srednia wydajnosc wynosi 0.5 metrow szesciennych wody na 1 metr szescienny sniegu
W zbiorniku armatki jest 950 metrow szesciennych wody

#############################################################
### Test serwisowy ###

1. Uzupelnij zbiornik do pelna:
### Uzupelnienie zbiornika armatki snieznej woda ###
Uzupelniles 50 metrow szesciennych wody
2. Przebieg testowy: 300 metrow szesciennych:
### Uruchomienie armatki snieznej ###
Armatka sniezna zostala wlaczona

### Robienie sniegu ###
Zrobiles 300 metrow szesciennych sniegu

### Zatrzymanie armatki snieznej ###
Armatka sniezna zostala wylaczona

### Koniec testu serwisowego ###
#############################################################

### Prezentacja ###
Identyfikator armatki snieznej: 1
Armatka sniezna jest wylaczona
Pojemnosc zbiornika armatki wynosi 1000 metrow szesciennych
Srednia wydajnosc wynosi 0.5 metrow szesciennych wody na 1 metr szescienny sniegu
W zbiorniku armatki jest 850 metrow szesciennych wody

#############################################################
### Test serwisowy na egzemplarzu fabrycznym o identycznych parametrach ###

1. Uzupelnij zbiornik do pelna:
### Uzupelnienie zbiornika armatki snieznej woda ###
Uzupelniles 150 metrow szesciennych wody
2. Przebieg testowy: 200 metrow szesciennych:
### Uruchomienie armatki snieznej ###
Armatka sniezna zostala wlaczona

### Robienie sniegu ###
Zrobiles 200 metrow szesciennych sniegu

### Zatrzymanie armatki snieznej ###
Armatka sniezna zostala wylaczona

### Koniec testu serwisowego ###
#############################################################

### Prezentacja ###
Identyfikator armatki snieznej: 1
Armatka sniezna jest wylaczona
Pojemnosc zbiornika armatki wynosi 1000 metrow szesciennych
Srednia wydajnosc wynosi 0.5 metrow szesciennych wody na 1 metr szescienny sniegu
W zbiorniku armatki jest 850 metrow szesciennych wody

*/
