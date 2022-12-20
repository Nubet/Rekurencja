#include <iostream> 

//Grupa 2 ITERACYJNIE  - silnia, REKURENCYJNIE  - potegowanie

using namespace std;

long long int silnia(long long liczba)
{
	if(liczba == 0) 
		return 1;
	
	int silnia = 1;
	for(int i =1; i <= liczba; i++){
		silnia *= i;
	}
	return silnia;
}
long long poteguj(long long liczba, int potega){ 
    if(potega == 0)
        return 1; 
    else if  (potega == 1)
    	return liczba;
    	
    return liczba*poteguj(liczba, potega -1 );
		
}


int main() {
	char znak_zadania;
	int liczba, potega;
	while(true)
	{
		cout << "Wprowadz 's' aby obliczyc silnie przy uzyciu metody iteracyjnej " << endl;
		cout << "Wprowadz 'p' aby wykonac potegowanie przy uzyciu metody rekurencyjnej " << endl;
		cin>>znak_zadania; 
		switch(znak_zadania)
		{
			case 's': 
				{
					cout << "Podaj liczbe ktorej silnie mam wyznaczyc: ";
					cin>>liczba;
					cout << "Silnia z liczby: " << liczba << " wynosi: " << silnia(liczba) << endl;
					break; 
				}
			case 'p':
			{
	
				cout << "Podaj liczbe ktora chcesz podniesc do potegi: ";
				cin>>liczba;
				cout << "Podaj potege: ";
				cin>>potega;
				cout << liczba << "^" << potega << " = " << poteguj(liczba, potega) << endl;
				break;
			}
			default:
			{
				cout << "Podaj 's' aby wykonac zad 1 albo podaj 'p' aby wykonac zad 2" << endl;
				break;
			}
		}
	}
	
	
}