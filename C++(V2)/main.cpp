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
int  main(){

Tacka t1,t2;
t1.Inic(1,20);
t2.Inic(5,5);
cout<<"Tacka2";
t1.pozicija();

cout<<"Tacka1";
t2.pozicija();
t2.Trans(3,5);

cout<<"Tacka2";
t2.pozicija();
return 0;
}


// TEST 555 333
