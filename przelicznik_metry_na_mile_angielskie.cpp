#include <iostream>
using namespace std;
//Napisz program pozwalaj¹cy przeliczyæ d³ugoœæ zmierzona w wybranej 
//jednostce systemu SI (np. w metrach) na d³ugoœæ wyra¿on¹ w wybranych jednostkach anglosaskich 
//(np. w milach angielskich). Wykorzystaj zmienne cz³onkowskie 
//i funkcje samodzielnie zdefiniowanej klasy. Zdefiniowana klasa powinna 
//zawieraæ metodê "metryczka", w której zawarte bêd¹ informacje o uczniu autorze programu.
class Dl{
	public:
		double m, fml, przelicznik=0.000621371;
		void metryczka(){
			cout<<"====================================\n";
			cout<<"Autor:\tPatryk Debiak\n";
			cout<<"klasa:\t\t3Cg1\n";
			cout<<"====================================";
		}
		void pobierzDane(){
			cout<<"Podaj dlugosc w metrach: ";		cin>>m;
		}
		void przelicz(double m){
			fml = m*przelicznik;
			cout<<"Dlugosc w milach angielskich = "<<fml<<endl;
		}
		
};

int main() {
	Dl jd;
	jd.pobierzDane();
	jd.przelicz(jd.m);
	jd.metryczka();
	return 0;
}
