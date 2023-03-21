#include <iostream>
using namespace std;


/*
	Realizovati klasu Tacka sa privatnim atributima x i y.
	Metode: inicijalizacija(a,b) koja postavlja vrednosti atributa na vrednosti koje dolazi kao argumenti, translacija(int dx,int dy) koja translira tacku za vrednosti dx po x, odnosno dy po y osi;
	pozicija() ispisuje trenutnu poziciju tacke u koordinatnom sistemu (njene x i y koordinate) 
*/
class Tacka
{
	int x;
	int y;
public:
	void inic(int a,int b);          //prototip metor=de za inicijalizaciju koordinata
	void translacija(int dx,int dy); //prototip funkcije za translaciju
	void pozicija();                 //protip f-je za ispis  pozicije
} tacka1;
/**
 * Definicije metoda ciji su prototipovi navedeni u f-ji
 * povratni_tip ime_klase::ime_metode(tip1 arg1,tip2 agr2,..){ naredbe;}
 **/

void Tacka::inic(int a,int b){
   x=a;
   y=b;
}
void Tacka::translacija(int dx, int dy){
   x+=dx;
   y+=dy;
}
void Tacka::pozicija(){
  cout<<"(x,y)=("<<x<<","<<y<<")"<<endl;
}

int main(){
Tacka tacka2;
tacka1.inic(1,20);
tacka2.inic(5,5);
cout<<"Tacka2";
tacka1.pozicija();
cout<<"Tacka1";
tacka2.pozicija();
tacka2.translacija(3,5);
cout<<"Tacka2";
tacka2.pozicija();

return 0;
}
