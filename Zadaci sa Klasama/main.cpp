#include <iostream>
#include<math.h>
using namespace std;
/*
	Realizovati klasu Tacka sa privatnim atributima x i y.
	Metode: inicijalizacija(a,b) koja postavlja vrednosti atributa na vrednosti koje dolazi kao argumenti, translacija(int dx,int dy) koja translira tacku za vrednosti dx po x, odnosno dy po y osi;
	pozicija() ispisuje trenutnu poziciju tacke u koordinatnom sistemu (njene x i y koordinate) 
*/
class Tacka
{
	private:
	int x;
	int y;
public:
	void Inic(int a,int b);
	void Trans(int dx, int dy);
	void pozicija();
	
}tacka1;

void Tacka::Inic(int a ,int b ){
	x=a;
	y=b;
}

void Tacka::Trans(int dx, int dy){
	x+=dx;
	y+=dy;
}

void Tacka::pozicija(){
	cout<<"(x,y)"<<x<<","<<y<<endl;
}
void main(){

Tacka t2;
tacka1.Inic(1,20);
tacka2.Inic(5,5);
cout<<"Tacka2";
tacka1.pozicija();

cout<<"Tacka1";
tacka2.pozicija();
tacka2.Trans(3,5);

cout<<"Tacka2";
tacka2.pozicija();
return 0;
}
