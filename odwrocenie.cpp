#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
char napis[256], odwrocony[256];
int i;

cout << "Podaj tekst do odwrocenia: " << endl;
cin >> napis;

int dlugosc = strlen(napis);

for(i=0; i<dlugosc; i++){
		 odwrocony[i] = napis[dlugosc-i-1];
		 }

cout << "Odwrocony tekst:" << endl << odwrocony << endl;

system("PAUSE");
return 0;
}