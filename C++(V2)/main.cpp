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

*/


/*
   Realizovati klasu Trougao koja ima tri privatna atributa a,b i c (realne vrednosti)
   i metode: inicijalizacija(a,b,c) postavlja vrednosti atributa na vrednosti argumenata;
   pisi - metoda koja ispisuje podatke o atributima a,b i c;
   P() - metoda koja racuna povrsinu trougla; O() racuna i vraca obim trougla;





class Trougao{
    float a;
    float b;
    float c;
public:
    void Inic(float a,float b, float c);
    void Pisi();
    float Pov();
    double Obim();

};

void Trougao::Inic(float a,float b, float c){
    this->a=a;
    this->b=b;
    this->c=c;
}

void Trougao::Pisi(){
    cout<<"Duzina stranica su:"<<a<<" "<<b<<" "<<c<<endl;

}


float Trougao::Pov(){
    float S=(a+b+c)/2;
    return sqrt(S*(S-a)*(S-b)*(S-c));

}


double Trougao::Obim(){
return a+b+c;

}


int main()
{
    Trougao t;

    t.Inic(5.2,5.1,10.2);
    t.Pisi();
    cout<<"O="<<t.Obim()<<"\nP="<<t.Pov()<<endl;
}

*/

////////////////////////////////////////////////////////////////////

// KONSTRUKTOR  I DESTRUKTOR


//////////////////////////////////////////////////////////////
/*

class Tacka
{
  int x;
  int y;
  public:
      Tacka();
      void Inic(int a,int b);
      void Trans(int dx, int dy);
      void Pozicija();
}tacka1;

Tacka::Tacka(){
    x=0;
    y=0;
    cout<<"U telu smo konstruktor metode"<<endl;

}


void Tacka::Inic(int a, int b)
{
    this->x= a;
    this->y= b;
}

void Tacka::Trans(int dx,int dy)
{
    x+=dx;
    y+=dy;
}

void Tacka::Pozicija()
{
    cout<<"(x,y)"<<x<<" "<<y<<endl;
}

int main()
{
    Tacka tacka2;

    cout<<"Tacka 2:";
    tacka2.Pozicija();
    tacka1.Inic(5,10);
    tacka2.Inic(6,7);
    cout<<"Tacka1:";
    tacka1.Pozicija();
    cout<<"Tacka2:";
    tacka2.Pozicija();
    tacka2.Trans(3,6);
    cout<<"Tacka2:";
    tacka2.Pozicija();


}
*/
/*


class Tacka
{
    int x,y;
public:
    Tacka();
    Tacka(int a,int b);
    void Translacija(int dx,int dy);
    void Pozicija();\
    ~Tacka();
};

Tacka::Tacka()
{
    x=0;
    y=0;
    cout<<"U telu smo konstruktora i na adresi smo:"<<this<<endl;
}

Tacka::Tacka(int a ,int b=0 )
{
    x=a;
    y=b;
}
void Tacka::Translacija(int dx , int dy)
{
    x+=dx;
    y+=dy;
}

void Tacka::Pozicija()
{
    cout<<"(x,y)"<<x<<","<<y<<endl;
}

Tacka::~Tacka(){
    cout<<"Desturuktor metoda koja uklanja objekat sa pozicije:"<<this<<endl;
}

int main()
{
    Tacka tacka1= Tacka(5,5);
    Tacka tacka2(1,20);
    Tacka tacka3(7);
    Tacka tacka4;
    cout<<"Tacka1:";
    tacka1.Pozicija();
    cout<<"Tacka2:";
    tacka2.Pozicija();
    cout<<"Tacka3:";
    tacka3.Pozicija();
    cout<<"Tacka4:";
    tacka4.Pozicija();

}



class Clan
{
private:
    int cbroj;
    char imeprezime[30];
    double stanje;
    int pocasni;
public:
    Clan()
    {
        cbroj= 123;
        strcpy(imeprezime,"Halil Saciroivc");
        stanje = 5000;
        pocasni = 0;
    }

    Clan(int cb,char *ip,double s,int p)
    {
        cbroj=cb;
        strcpy(imeprezime,ip);
        stanje =s;
        pocasni=p;
    }
    void setCbroj(int cbr){cbroj=cbr;}
    void setIP(char *ip){strcpy(imeprezime,ip);}
    void setStanje(float stanje){ this->stanje = stanje; }
    void setPocasni(int p){pocasni=p;}
    int getCbroj(){return cbroj;}
    char* getIP(){return imeprezime;}
    double getStanje(){return stanje;}
    int getPocasni(){return pocasni;}

    void naplata()
    {
        if(!pocasni)
        {
            stanje -=500;
        }
    }

};

int main()
{
    Clan c;
    c.setCbroj(5);
    c.naplata();
    cout<<"Stanje clana nakon naplate je:"<<c.getStanje()<<endl;
    return 0;
}





class Niz
{
public:
    int *elementi;
    int n;

public:
    Niz()
    {
        int i;
        int n=10;
        elementi = new int[n];
        for(i=0;i<n;i++)
        {
            elementi[i]=0;
        }
        cout<<"Elementi:"<<elementi<<endl;
        cout<<"Podrazumevani konstruktor koji pravi niz od 10 nula\n";
    }
    Niz(int broj_el)
    {
        n=broj_el;
        elementi=new int[n];

        cout<<"Elementi:"<<elementi<<endl;
        cout<<"Konstruktor sa argumentima\n";
    }

    void ucitaj_elemente()
    {
        int i;
        cout<<"Unesite "<<n<<"celobrojnih elemenata niza\n";
        for(i=0;i<n;i++)
        {
            cin>>elementi[i];
        }
    }

    Niz(const Niz& niz1)
    {
        int i;
        n=niz1.n;
        elementi = new int[n];
        for(i=0;i<n;i++)
        {
            elementi[i]=niz1.elementi[i];
            cout<<"Copy Konstruktor\n";

        }

    }
    ~Niz()
    {
        delete [] elementi;
        cout<<"Destruktor"<<endl;

    }
  int max(){
			 int i,m=elementi[0];
			  for(i=0;i<n;i++)
			  if(elementi[i]>m)
			  m=elementi[i];
			 return m;


		  }


		  void ispisi(){
			  int i;
			  cout<<"Elementi niza su :";
			  for(i=0;i<n;i++)
			  cout<<elementi[i]<<" ";
			  cout<<endl;}

                   int sr_vr(){
			  int i,s=0;
			  for(i=0;i<n;i++){
				  s+=elementi[i];
			  }
			  return s/n;
		  }
                   //n1(1,2,3,4)+ n2(4,5)= n3(5,7,3,4)
                   //n3=n1.dodaj(n2)    n1(n,elementi)                                       //  n2(n2.n,n2.elementi[i])
                   Niz  dodaj(const Niz& n2){

                       Niz n3(n);
                       int i;
                       for(i=0;i<n;i++)
                        n3.elementi[i]=elementi[i];
                       for(i=0;i<n2.n;i++)
                         n3.elementi[i]+=n2.elementi[i];


                       return n3;

                   }
                   //n1(1,2,3,4), n2(4,5)= n3(1,2,3,4,4,5)
                   //n3=n1.dopisi(n2)    n1(n,elementi)                                       //  n2(n2.n,n2.elementi[i])

                    Niz  dopisi(const Niz& n2){
                       Niz n3(n+n2.n);
                       int i;
                      for(i=0;i<n;i++)
                         n3.elementi[i]=elementi[i];
                       for(i=0;i<n2.n;i++)
                         n3.elementi[n+i]=n2.elementi[i];
                       return n3;

                   }

                   //Podniz niza koji sadrzi samo parne elemente
                   //  n2 =n1.podnizpar();
                   Niz podnizpar(){
                       int i,k=0;
                       for(i=0;i<n;i++)
                           if(elementi[i]%2==0)
                            k++;
                       Niz n2(k);
                       k=0;
                       for(i=0;i<n;i++)
                           if(elementi[i]%2==0){
                            n2.elementi[k]=elementi[i];
                            k++;}
                       return n2;

                   }


		 };
		 main()
		 {

		 int i,k,l(1);
		 cin>>k;
		 Niz n,n1(k);
                 n1.ucitaj_elemente();
		 Niz n2=n1;
                 n2.elementi[0]=9;
		 int max2=n2.max();
		  int max1=n1.max();
		  cout<<"Maksimalni element niza n1 je "<<max1<<endl;
		 cout<<"Maksimalni element niza n2 je "<<max2<<endl;
		 cout<<"Srednja vrednoist  elementa niza n2 je "<<n2.sr_vr()<<endl;
		 n.ispisi();
		 n1.ispisi();
		 n2.ispisi();
                 Niz n3=n1.dodaj(n2);
                 n3.ispisi();
                 Niz n4=n3.dopisi(n2);
                 n4.ispisi();
                 n1.dodaj(n2).ispisi();
                 n3.dopisi(n2).ispisi();
		 }

#include <iostream>
#include <string>
using namespace std;

class Bankovni_Racun {
    string broj_racuna;
    double stanje_na_racunu;
    double kamatna_stopa;

public:
    double Stanje(double st);
    string Racun(string br);
    double Kamata(double ks);
    Bankovni_Racun(string br, double sr, double ks);
    double Izracunaj_Kamatu();
};

Bankovni_Racun::Bankovni_Racun(string br, double sr, double ks) {
    broj_racuna = br;
    stanje_na_racunu = sr;
    kamatna_stopa = ks;
}

double Bankovni_Racun::Izracunaj_Kamatu() {
    return kamatna_stopa * stanje_na_racunu;
}

double Bankovni_Racun::Stanje(double st) {
    stanje_na_racunu = st;
    return stanje_na_racunu;
}

string Bankovni_Racun::Racun(string br) {
    broj_racuna = br;
    return broj_racuna;
}

double Bankovni_Racun::Kamata(double ks) {
    kamatna_stopa = ks;
    return kamatna_stopa;
}

int main() {
    string br;
    double sr, ks;

    cout << "\nUnesite broj racuna: ";
    cin >> br;

    cout << "\nUnesite stanje na racunu: ";
    cin >> sr;

    cout << "\nUnesite kamatnu stopu: ";
    cin >> ks;

    Bankovni_Racun test(br, sr, ks);

    cout << "Kamata iznosi: " << test.Izracunaj_Kamatu() << endl;

    return 0;
}




class Bankovni_Racun {
    string broj_racuna;
    double stanje_na_racunu;
    double kamatna_stopa;


public:
    void Stanje(double st);
    void Racun(string br);
    void Kamata(double ks);
    Bankovni_Racun(); // Dodan konstruktor bez argumenata
    double Izracunaj_Kamatu();
};

Bankovni_Racun::Bankovni_Racun() {
    broj_racuna = "";
    stanje_na_racunu = 0.0;
    kamatna_stopa = 0.0;
}

double Bankovni_Racun::Izracunaj_Kamatu() {
    return kamatna_stopa * stanje_na_racunu;
}

void Bankovni_Racun::Stanje(double st) {
    stanje_na_racunu = st;
    cout<<stanje_na_racunu<<endl;

}

void Bankovni_Racun::Racun(string br) {
    broj_racuna = br;
    cout<<broj_racuna<<endl;
}

void Bankovni_Racun::Kamata(double ks) {
    kamatna_stopa = ks;
    cout<<kamatna_stopa<<endl;

}

int main() {
    Bankovni_Racun banka_racun;

    cout << "\nUnesite broj racuna: ";
    banka_racun.Racun("555333XD");

    cout << "\nUnesite stanje na racunu: ";
    banka_racun.Stanje(3562);

    cout << "\nUnesite kamatnu stopu: ";
    banka_racun.Kamata(0.08);



    cout << "Kamata iznosi: " << banka_racun.Izracunaj_Kamatu() << endl;

    return 0;
}

// SAD RADIIII KONTAMM



#include <iostream>
using namespace std;

class Bankovni_Racun {
    string broj_racuna;
    double stanje_na_racunu;
    double kamatna_stopa;
    double kamata_test;
    double sa_kamatom;


public:
    Bankovni_Racun(string br, double sr, double ks);
    double Izracunaj_Kamatu();
    double Prosledi_Stanje();
    double Stanje_Sa_Kamatom();
    string Prosledi_Broj_Racuna();
    void Uplata(double);
    bool Isplata(double);
    void Pisi();
};

Bankovni_Racun::Bankovni_Racun(string br, double sr, double ks)
{
    broj_racuna = br;
    stanje_na_racunu = sr;
    kamatna_stopa = ks;
}

double Bankovni_Racun::Prosledi_Stanje()
{
    return stanje_na_racunu;
}

double Bankovni_Racun::Stanje_Sa_Kamatom()
{
    sa_kamatom = kamata_test + stanje_na_racunu;
    return sa_kamatom;
}
string Bankovni_Racun::Prosledi_Broj_Racuna()
{
    return broj_racuna;
}

double Bankovni_Racun::Izracunaj_Kamatu()
{
    kamata_test = kamatna_stopa * stanje_na_racunu;
    return kamata_test;
}

void Bankovni_Racun::Uplata(double iznos)
{
    stanje_na_racunu += iznos;
}

bool Bankovni_Racun::Isplata(double iznos)
{
    bool dopusteno;
    if (iznos <= stanje_na_racunu)
    {
        stanje_na_racunu -= iznos;
        dopusteno = true;
    }
    else {
        dopusteno = false;
        cout << "Nedovoljno novca" << endl;
    }
    return dopusteno;
}

int main()
{
    Bankovni_Racun Racun1("15255", 2530, 0.34);

    cout << "\nBroj racuna: ";
    cout << Racun1.Prosledi_Broj_Racuna() << endl;

    cout << "Stanje na racunu: ";
    cout << Racun1.Prosledi_Stanje() << endl;

    cout << "Izracunata kamata: ";
    cout << Racun1.Izracunaj_Kamatu() << endl;

     cout << "Stanje sa  kamatom: ";
    cout << Racun1.Stanje_Sa_Kamatom() << endl;

    cout << "Uplata na racun: ";
    Racun1.Uplata(500);

    cout << "Stanje na racunu posle uplate: ";
    cout << Racun1.Prosledi_Stanje() << endl;

    cout << "Isplata sa racuna: ";
    Racun1.Isplata(1326);

    cout << "Stanje na racunu posle isplate: ";
    cout << Racun1.Prosledi_Stanje() << endl;

    return 0;
}



// hmm


class Tacka2
{
public:
    int x;
    int y;

    Tacka2()
    {
        cout<<"Tacka2: Napravlje je objekat na adresi:"<<this<<endl;

    }

    Tacka2(int x,int y)
    {
        this->x=x;
        this->y=y;
        cout<<"Tacka2(argumenti):Napravlje je objekat na adresi:"<<this<<endl;
        cout<<"X="<<this->x<<endl;
        cout<<"Y="<<this->y<<endl;
    }
};

class Tacka3
{
    int x;
    int y;
    int z;
public:
    Tacka3()
    {

        cout<<"Tacka3:Napravlje je objekat na adresi:"<<this<<endl;
    }
    Tacka3(int x,int y,int z)
    {
         this->x=x;
        this->y=y;
        this->z=z;
        cout<<"Tacka3(argumenti):Napravlje je objekat na adresi:"<<this<<endl;
         cout<<"X="<<this->x<<endl;
        cout<<"Y="<<this->y<<endl;
         cout<<"Z="<<this->z<<endl;

    }

    Tacka3(Tacka2 t, int z)
    {
        this->x=t.x;
        this->y=t.y;
        this->z=z;
        cout<<"Tacka3(Tacka2,argument):Napravlje je objekat na adresi:"<<this<<endl;
         cout<<"X="<<this->x<<endl;
        cout<<"Y="<<this->y<<endl;
         cout<<"Z="<<this->z<<endl;

    }
};


int main()
{
    Tacka3 teme,teme1(1,2,3);
    Tacka2 teme2(4,5);
    Tacka3 teme3(teme2,6);
}



class Tacka
{
    int x;
    int y;

public:
    void Inic(int a,int b);
    void Trans(int dx,int dy);
    void Pozicija();
};

void Tacka::Inic(int a,int b)
{
    x=a;
    y=b;

}


void Tacka::Trans(int dx,int dy)
{
    x +=dx;
    y +=dy;

}

void Tacka::Pozicija()
{
    cout<<"(x,y) =>"<<"("<<x<<","<<y<<")"<<endl;

}


int main()
{

    Tacka t;
    cout<<"Pozicija pre translacije:";
    t.Inic(5,6);
    t.Pozicija();

    cout<<"Pozicija posle translacije:";
    t.Trans(10,12);
    t.Pozicija();
}


class Student
{
    char ime_prezime[30];
    int index;

public:
    void Inic(char* i,int x);
    void Ispis();
};

void Student::Inic(char* i,int x)
{
    strcpy(ime_prezime,i);
    index=x;
}

void Student::Ispis()
{
    cout<<"Student:"<<ime_prezime<<"\nBroj Indexa:"<<index<<endl;
}


int main()
{
    Student halil,zex;

    halil.Inic("Halil Sacirovic",11);
    halil.Ispis();
    zex.Inic("Zeljko Timotijevic",125);
    zex.Ispis();
}



class Automobil
{
public:
    float rezervoar;
    float potrosnja;

public:
    void Inic(float gorivo,float potrosnja);
    double Predji(int km);
    void Ispis();
    void Adresa();
};


void Automobil::Adresa(){
    cout<<"Auto se nalazi na adresi:"<<this<<endl;
}

void Automobil::Inic(float gorivo,float potrosnja)
{
    rezervoar = gorivo;
    this->potrosnja = potrosnja;
}

double Automobil::Predji(int km)
{
    cout<<"Automobil je presao:"<<km<<endl;

    float predji =potrosnja*(km/100.0);
    rezervoar -= predji;

    return  rezervoar;
}

void Automobil::Ispis()
{
    cout<<"Rezervoar:"<<rezervoar<<"\nPotrosnja:"<<potrosnja<<endl;
}


int main()
{
    Automobil audi;

    audi.Adresa();
    audi.Inic(60,7.32);
    audi.Ispis();
    audi.Predji(100);
    audi.Ispis();
    audi.Predji(350);
    audi.Ispis();

    return 0;
}




class DvaZnaka
{
public:
    char c1;
    char c2;

public:
    void Inic(char z1,char z2);
    void Uvecaj();
    void Ispis();
    void Adresa();

};


void DvaZnaka::Adresa(){
    cout<<"Znak se nalazi na adresi:"<<this<<endl;
}

void DvaZnaka::Inic(char z1,char z2)
{
   this->c1=z1;
   this->c2=z2;
}

void DvaZnaka::Uvecaj()
{
    c1++;
    c2++;

    cout<<"Znakovi su uvecati"<<endl;
}

void DvaZnaka::Ispis()
{
    cout<<"Prvi Znak:"<<c1<<"\nDrugi Znak:"<<c2<<endl;
}

int main()
{
    DvaZnaka dz;
    dz.Adresa();
    dz.Inic('A','B');
    dz.Ispis();
    dz.Uvecaj();
    dz.Ispis();
}

#include<math.h>


class Trougao
{
    float a;
    float b;
    float c;
public:
    void Inic(float a,float b,float c);
    void Pisi();
    float Pov();
    float Obim();
};

void Trougao::Inic(float a,float b,float c)
{
    this->a=a;
    this->b=b;
    this->c=c;
}

void Trougao::Pisi()
{
    cout<<"a:"<<a<<"\nb:"<<b<<"\nc:"<<c<<endl;
}

float Trougao::Pov()
{
    float s;
    s=(a+b+c)/2;
    float p;
    p=sqrt(s*(s-a)*(s-b)*(s-c));
    return p;
}

float Trougao::Obim()
{
    return a+b+c;
}

int main()
{
    Trougao t;

    t.Inic(5.2,6.3,1.2);
    t.Pisi();
    cout<<"Povrsina Iznosi:"<<t.Pov()<<endl;
    cout<<"Obim iznosi:"<<t.Obim()<<endl;
}



class Tacka
{
    int x;
    int y;
public:
    Tacka();
    void Inic(int a,int b);
    void Trans(int dx,int dy);
    void Pozicija();
};

Tacka::Tacka()
{
    x=0;
    y=0;
    cout<<"__Konstruktor__"<<endl;

}

void Tacka::Inic(int a,int b)
{
    x=a;
    y=b;
}
void Tacka::Trans(int dx,int dy)
{
    x +=dx;
    y +=dy;
}

void Tacka::Pozicija()
{
    cout<<"(x,y) =>"<<"("<<x<<","<<y<<")"<<endl;
}

int main()
{
    Tacka t1,t2;

    cout<<"Tacka1 pre translacije =>";
    t1.Inic(5,8);
    t1.Pozicija();
    cout<<"Tacka1 posle translacije =>";
    t1.Trans(2,3);
    t1.Pozicija();

    cout<<"Tacka2 pre translacije =>";
    t2.Inic(5,3);
    t2.Pozicija();

    cout<<"Tacka2 posle translacije =>";
    t2.Trans(5,2);
    t2.Pozicija();
}

*/


class Tacka
{
    int x;
    int y;

public:
    Tacka();
    Tacka(int a,int b);
    void Trans(int dx,int dy);
    void Pozicija();
    ~Tacka();
};


Tacka::Tacka()
{
    x=0;
    y=0;
    cout<<"__Konstruktor__"<<endl;

}

Tacka::Tacka(int a,int b=0)
{
    x=a;
    y=b;
}
void Tacka::Trans(int dx,int dy)
{
    x +=dx;
    y +=dy;
}

void Tacka::Pozicija()
{
    cout<<"(x,y) =>"<<"("<<x<<","<<y<<")"<<endl;
}

Tacka::~Tacka()
{

    cout<<"__Destruktor__";
}


int main()
{
    Tacka t1(5,5),t2(1,20),t3(7),t4;

    cout<<"Tacka1:";
    t1.Pozicija();

    cout<<"Tacka2:";
    t2.Pozicija();

    cout<<"Tacka3:";
    t3.Pozicija();

    cout<<"Tacka4:";
    t4.Pozicija();

}
