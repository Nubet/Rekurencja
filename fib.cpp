#include <iostream>

using namespace std;

unsigned long long int fib_iteracyjnie(int ktora){
    unsigned long long int fib1 = 1, fib2 = 1;
    unsigned long long int bufor;

    if(ktora < 3)
        return 1;

    for(int i=1; i <= ktora-2; i++){ //-2 poniewaz pierwsze 2 liczby ciagu fib to 1 i 1 a program zaczyna tak jakby z 2 pozycji gdy juz mamy te 2 liczby
        bufor = fib2;

        fib2 = fib1+fib2;
        fib1 = bufor;
    }
    return fib2;
}
unsigned long long int fib_rekurencyjnie(int ktora){
   if(ktora<3)
	return 1;

   return fib_rekurencyjnie(ktora-2)+fib_rekurencyjnie(ktora-1);
}


int main()
{
   cout << fib_rekurencyjnie(7) << endl;
   cout << fib_iteracyjnie(7) << endl;

}
