#include <iostream> // zalaczanie biblioteki iostream

//napisac program ktory bedzie wykonywal iteracyjnie i rekurencyjnie obliczenia z zastosowaniem funkcji
//Grupa 1 (rekuracyjnie silnie), iteracyjnie (potegowanie)

using namespace std; // uzywanie przestrzeni nazw

long long int poteguj_iteracyjnie(long long int liczba, long long int potega){ // deklarowanie funkcji zwracajacej wartosc typu long long int i przyjmujaca 2 wartosci
    if(potega == 0)//warunek poczatkowy
        return 1; // zwracanie 1

    int liczba_podstawowa = liczba;
    for(int i=1; i < potega; i++) // petla ktora wykonuje sie od 1 poniewaz bedzie mnozyc przez ta liczbe wiec jak by bylo 0 to caly zwracany wynik byl by zerem
        liczba *= liczba_podstawowa; // liczba = liczba * liczba_podstawowa

    return liczba;
}
long long int silnia_rekurencyjnie(long long int s)
{
	if(s == 0) // warunek poczatkowy
		return 1;
	
	return s*silnia_rekurencyjnie(s-1); // silnia np z 5! => to 5 * 4!
}
void autor(){
	cout << "=================================================" << endl;
	cout << "\t Autorem programu jest Norbert Fila z 3ab " << endl;
}
int main() {
	int wybor;
	autor(); // wywolywanie funkcji
	while(true)//petla z warunkiem zawsze prawzdiwym
	{
	cout << "Podaj [1] aby wykonac silnie metoda rekurencyjna " << endl;
	cout << "Podaj [2] aby wykonac potegowanie metoda iteracyjna " << endl;
	cout << "Wybor: ";
	cin>>wybor; // wczytywanie danych od uzytkownika
	switch(wybor)// switch operujacy na zmiennej wybor
	{
		case 1: // w przypadku gdy wybor == 1
			{
				int s;
				cout << "Podaj liczbe z ktorej chcesz wyznaczyc silnie: ";
				cin>>s;
				if(s >=0 ) // Najmniejsza liczba z jakiej mozna wyznaczyc silnie to 0!
					cout << "Silnia z liczby: " << s << " wynosi: " << silnia_rekurencyjnie(s) << endl;
				else
					cout << "Najmniejsza liczba z jakiej mozna wyznaczyc silnie to 0! " << endl;
					
				break; // gdyby nie break switch wykonal to co w case 2
			}
		case 2:
			{
				int liczba, potega;
				cout << "Podaj liczbe jaka chcesz potegowac: ";
				cin>>liczba;
				cout << "Podaj liczbe do jakiej chcesz podniesc liczbe(" << liczba << "): ";
				cin>>potega;
				cout << "Liczba: " << liczba << " do potegi " << potega << " wynosi: " << poteguj_iteracyjnie(liczba, potega) << endl;
				break;
			}
		default: // gdy wybor != 1 || wybor != 2
			{
				cout << "Podales bledny znak! " << endl;
				break;
			}
	}
	}
	
	
}