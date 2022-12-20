#include <iostream>

using namespace std;

unsigned long long int silnia_rekurencyjnie(int s){
    if(s == 0)
        return 1; // silnia z zera wynosi 1

    return s*silnia_rekurencyjnie(s-1); // 4! -> 3! * 2

}
unsigned long long silnia_iteracyjnie(int s){
    int wynik = 1; // wynik musi rownac sie 1 zeby pod czas mnozenia nie wychodzilo zero
    for(int i=s; i > 0; i--) // gdy np silnia = 3 petla zrobi nastepujace obroty: 3,2,1
       wynik *= i;

    return wynik;
}
int main()
{
    int liczba;
    cout << silnia_rekurencyjnie(5) << endl;
    cout << silnia_iteracyjnie(5) << endl;

}
