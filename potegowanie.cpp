#include <iostream>

using namespace std;

long long int l =3, p =6;

long long int poteguj_rekurencyjnie(long long int liczba, int potega){
    if(potega == 0)
        return 1;

    return liczba*poteguj_rekurencyjnie(liczba, potega-1);
}
long long int poteguj_iteracyjnie(long long int liczba, int potega){
    if(potega == 0)
        return 1;

    int liczba_podstawowa = liczba;
    for(int i=1; i < potega; i++)
        liczba *= liczba_podstawowa;

    return liczba;
}

int main()
{
    cout << poteguj_rekurencyjnie(l,p) << endl;
    cout << poteguj_iteracyjnie(l,p) << endl;

}
