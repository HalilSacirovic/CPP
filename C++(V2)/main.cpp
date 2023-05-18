#include <iostream>
#include<math.h>
#include<string.h>

using namespace std;
/*
	Realizovati klasu Tacka sa privatnim atributima x i y.
	Metode: inicijalizacija(a,b) koja postavlja vrednosti atributa na vrednosti koje dolazi kao argumenti, translacija(int dx,int dy) koja translira tacku za vrednosti dx po x, odnosno dy po y osi;
	pozicija() ispisuje trenutnu poziciju tacke u koordinatnom sistemu (njene x i y koordinate)
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
*/


/*
	Realizovati klasu Student koja ima privatne atribute ime,prezime i broj indeksa.
	Metode: inicijalizacija(char* i,char* p,int b) postavlja vrednosti atribute na vrednosti koje dolazi kao argumenti i ispis koja ispisuje vrednosti atributa.




class Student{
    char ime[10];
    char prezime[20];
    long index;

 public:
     void Inic(char* i,char* p, int b);
     void Ispis();
};


void Student::Inic(char* i,char* p, int b){
    strcpy(ime,i);
    strcpy(prezime,p);
    index=b;
}

void Student::Ispis(){
cout<<"Ime:"<<ime<<"\nPrezime:"<<prezime<<"\nBroj Indexa:"<<index<<endl;
}

int main(){
Student s;

s.Inic("Halil","Sacirovic",150);
s.Ispis();

return 0;
}
*/





/*
	Realizovati klasu Automobil sa javnim atributima rezervoar i potrosnja
	Metode: inicijalizacija(gorivo,potrosnja),predji(km) koja pokrece automobil i prelazi km kilometara, pri cemu se smanjuje nivo gorivo u zavinosti od potrosnje i predjenih km
	ispis() ispisuje podatke o Automobilu;adresa() ispisuje adresu objekta koji je pozvao ovu metodu



class Automobil{
public:
    int rezervoar;
    int potrosnja;
public:
    void Inic(int g,int p);
    void Predji(int km);
    void Ispis();
    void Adresa();
};

void Automobil::Adresa(){
    cout<<this<<endl;
}

void Automobil::Inic(int g,int p){
    rezervoar= g;
    potrosnja = p;

}

void Automobil::Predji(int km){
rezervoar=rezervoar-(potrosnja*km/100);
}
void Automobil::Ispis()
{
    cout<<"\nTrenutno Goriva"<<rezervoar<<"|goriva;\npotrosnja = "<<potrosnja<<" (l/100km) "<<endl;
}

int main()
{

    Automobil dzip;
    dzip.Inic(20,9);
    dzip.Ispis();
    dzip.Predji(10);
    dzip.Ispis();

    return 0;
}
*/




/*
	Reazlivati klasu DvaZnaka koja ima dva javna atributa koji su tipa karakteri
	Metode: inicijalizacija(z1,z2),uvecaj() koja uvecava znakove tj dobijamo sledece karaktere u ASCII tabeli;
	ispis() metoda koja ispisuje koji su trenutni znaci
	adresaoObjekta() ispisuje adresu objekta koji je pozvao
*/



class DvaZnaka
{
  public:
      char c1;
      char c2;
  public:
    void Inic(char z1,char z2);
    void Ispis();
    void Uvecaj();
    void adresaObjekta();
};


void DvaZnaka::adresaObjekta()
{
    cout<<"Adresa"<<this<<endl;

}

void DvaZnaka::Inic(char z1, char z2){
    c1=z1;
    c2=z2;
}

void DvaZnaka::Uvecaj()
{
    this->c1++;
    this->c2++;
}

void DvaZnaka::Ispis()
{
    cout<<"\nZnak1= "<<this->c1<<"\nZnak2="<<this->c2<<endl;
}

int main()
{
    DvaZnaka dz;

    dz.Inic('U','H');
    cout<<"Ovo su znakovi pre uvecenja:";
    dz.Ispis();
    dz.Uvecaj();

    cout<<"Ovo je adresa:";
    dz.adresaObjekta();


    cout<<"Ovo je adresa:"<<&dz<<endl;

    cout<<"Ovo su znakovi posle uvecenja:";
    dz.Ispis();

    return 0;
}

