#include <iostream>
#include <string.h>
using namespace std;


/*
	Realizovati klasu Tacka sa privatnim atributima x i y.
	Metode: inicijalizacija(a,b) koja postavlja vrednosti atributa na vrednosti koje dolazi kao argumenti, translacija(int dx,int dy) koja translira tacku za vrednosti dx po x, odnosno dy po y osi;
	pozicija() ispisuje trenutnu poziciju tacke u koordinatnom sistemu (njene x i y koordinate) 
*/

/*
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
 **

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


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



class Tacka
{
	int x;
	int y;
	public:
		Tacka(){
			x=2;
			y=3;
			cout<<"Palamudim nes"<<endl;
		}
		void Ispis()
		{
			cout<<"x= "<< x << " y= "<< y<<endl;
		}
};

int main(){
	Tacka t,t1;
	
	t1.Ispis();
	t.Ispis();

return 0;
} 




class  Student{

	char ime[20];
	char prezime[20];
	char index[20];
	
	public:
    Student(){
    strcpy(ime,"Zamo");
    
    strcpy(prezime,"Zvacete");
    
    strcpy(index,"555333");
    cout<<"Pozvao se konstruktor bez argumenata"<<endl;
	}
	Student(char *i,char *p,char *bi){
    strcpy(ime,i);
    
    strcpy(prezime,p);
    
    strcpy(index,bi);
    
    cout<<"Pozvao se konstruktor"<<endl;
	}
	
	void Ispis(){
		cout<<"Podaci o studenti su :"<< ime << " " << " Prezime :" << prezime<< "Index:" << index<<endl;
	}
	~Student(){
		cout<<"Pozvao se destruktor klase Student"<<endl;
	}
};


int main(){
	
	Student s1;
	Student s2("Halil","Zuri8","555333");
	
	s1.Ispis();
	
	s2.Ispis();
	
	return 0;
}




class Stack{
	private:
	char *s;
	int duzina;
	int top;
	public:
		Stack(int length){
			duzina= length;
			s=new char[duzina];
			top = -1;
			
		}
		Stack(const char  niz[],int length){
			duzina= length;
			s= new char[duzina];
			for(int i=0;i<duzina;i++){
				s[i]=niz[i];
			}
			
			top = duzina-1;
			
		}
		
		void Reset( ){
			top= -1;
		}
		void Push(char c){
		if(top<duzina){
			top++;
			s[top]=c;
		}
		else {
				cout<<"Ne mere"<<endl;
			}
		}
			
		char pop(){
			if(top>-1){
						//return s[top--];
				char c = s[top];
				top--;
				return c;
			}
			return " ";
			}
		char top_of(){
			if(top>-1){
						//return s[top--];
				char c = s[top];
				return c;
			}
			return " ";
		}
		
		bool empty(){
			if(top==-1){
				
				return true;
			}
			return false;
		}
		
		bool full(){
			if(top== duzina-1){
				
				return true;
			}
			return false;
			}
		};
		
		
		
};


int main(){
	Stack s1=5, s2("ABCD",4);
	
	for(int i = 0 ;i<4;i++){
		cout<<" Unesite element " << endl;
		char c;		
		cin>>c; 
		s1.push(c); 
	}
	
	cout<<"Na vrhu nalazi se"<<s1.top_of()<<endl;
	cout<<"Na vrhu nalazi se"<<s2.top_of()<<endl;
	
	while(!s1.empty()){
		cout<<" Element iz prvog  Stack-a" << s1.pop()<< endl;
	}
	
}




class Fibonaci{
public:
	int n;
	long *niz;
	public:
		Fibonaci(){
			n=10;
			Postavi();
		}
		
		Fibonaci(int n){
			this->n = n;
			Postavi();
		}
		
		Fibonaci(const Fibonaci &f){
			n=f.n;
			for(int i=0;i<n;i++){
				niz[i] = f[i];
			}
		}
	
		long suma(){
			long s = 0;
			
			for(int i =0; i<n;i++){
				s += niz[i];
				
			}
			return s;
		}
		
		
		long Vrednost (int i){
			if(i<n && i >-1){
				return niz[i];
			}
			
			cout<<" Ne postoji na " << i << "mestu"<< endl;
			return 0;
		}
		
		void Prosiri(int x ){
			n=x;
			delete[] niz;
			Postavi();
		}
		
		void Ispis(){
			cout<< "Prvih "<< n << "elemenata fibonacijevog niza su:"<< endl;
			
			for(int i = 0 ; i<n;i++){
				cout<< niz[i]<< " ";
				cout<< endl;
				
			}
		}
		
		~Fibonaci(){
			delete[] niz;
		}
	private:
		void Postavi(){
			niz= new long[n];
			niz[0]=1;
			niz[1]=1;
			for(int i=2;i<n;i++){
				niz[i]=niz[i-1]+niz[i-2];
			}
			
		}
};


int main(){
	Fibonaci  f1,f2(10);
	
	cout<< " Suma elementata fibonacijevog niza iznosi " << f1.suma()<<endl;
	f1.Prosiri(15);
	Fibonaci f3 = f1;
	f3.Ispis();
	f1.Ispis();
	f2.Ispis();
}


#include<iostream.h>
#include<string.h>

/*
	Realizovati klasu Student koja ima privatne atribute ime,prezime i broj indeksa.
	Metode: inicijalizacija(char* i,char* p,int b) postavlja vrednosti atribute na vrednosti koje dolazi kao argumenti i ispis koja ispisuje vrednosti atributa.


class Student
{
	char ime[10];
	char prezime[20];
    int	br_indeksa;
public:
	void inic(char* i,char* p,int b);          //prototip metor=de za inicijalizaciju podataka o studentu
	void ispis();                                       //protip f-je za ispis  podataka
} ;
/**
 * Definicije metoda ciji su prototipovi navedeni u f-ji
 * povratni_tip ime_klase::ime_metode(tip1 arg1,tip2 agr2,..){ naredbe;}
 *

void Student::inic(char* i,char* p,int b){
   strcpy(ime,i); //f-ja iz biblioteke string.h koja kopira string i u string ime
   strcpy(prezime,p);
   br_indeksa=b;
}
void Student::ispis(){
	cout<<ime<<" "<<prezime<<" "<<br_indeksa<<endl;
}

void main(){
  Student informaticar;
  informaticar.inic("Miki","Maus",9);
  informaticar.ispis();

}


*/


/**
 * unutar metode adresa objekta koji je pozvao  je dostupna preko  kljucne reci this
 * this- adresa ojekta koji je pozvao metodu
 * *this-sam objekat
 **/

/*
	Realizovati klasu Automobil sa javnim atributima rezervoar i potrosnja
	Metode: inicijalizacija(gorivo,potrosnja),predji(km) koja pokrece automobil i prelazi km kilometara, pri cemu se smanjuje nivo gorivo u zavinosti od potrosnje i predjenih km
	ispis() ispisuje podatke o Automobilu;adresa() ispisuje adresu objekta koji je pozvao ovu metodu
*/
/*
class Automobil
{
public:
	int rezervoar;
    int	potrosnja;
public:
	void inic(int gorivo,int p);          //prototip metor=de za inicijalizaciju podataka o studentu
	void predji(int km);                  //prototip metode za pokretanje automobila za km kilometara i praznjenje rezervoara
	void ispis();                         //prototip metode za ispis  podataka
	void adresa();                        //prototip f-je za vracanje adrese objekta koji je pozvao metodu
	
} ;
*
 * Definicije metoda ciji su prototipovi navedeni u f-ji
 * povratni_tip ime_klase::ime_metode(tip1 arg1,tip2 agr2,..){ naredbe;}
 *
void Automobil::adresa(){ 
	cout<<this<<endl;
	}
//pristup podacima klase preko objekta *this 
void Automobil::inic(int gorivo,int p){
	
    rezervoar=gorivo;
	potrosnja=p;
}
void Automobil::predji(int km){
    rezervoar-=potrosnja*km;
}
void Automobil::ispis(){
	cout<<rezervoar<<" l goriva, potrosnja= "<<potrosnja<<"l/km "<<endl;
}
void main(){
  Automobil dzip;
  dzip.inic(20,9);
  cout<<"Objekat dzip se nalazi na adresi "<<&dzip<<endl;
  cout<<"Ovo ptvrdjuje i nasa metoda adresa :";
  dzip.adresa();
}
*/


main() {
//	int a,b,c;
//	cout<<"Unesite a i b"<<endl;
//	cin>>a>>b;
//	c=a+b;
//	cout<<"Zbir brojeva a i b iznosi "<<c<<endl;
	
	
//	int a,b,c;
//	a=5;
//	b=5;
//	cout<<"a = "<<a<<"\n"<<"b= "<<b<<endl;
//	c=a+b;
//	cout<<"Zbir a+b iznosi c="<<a<<"+"<<b<<"=>"<<c<<endl;


//	int a,b,c;
//	
//	cout<<"Unesite vrednosti za a i b"<<endl;
//	
//	cin>>a>>b;
//
//	(a>5)?c=a+b:c=a-b;
//	
//	cout<<"a= " <<a<<"b= " <<b<<"c= " <<c<<endl;
//	

//	int i1=18,i2=(12),i3(7),i4(9);
//	
//	cout<<i1<<" "<<i2<<" "<<i3<<" "<<i4<<endl;
//	
//
//	cout<<"\n i1+i2 = "<<i1<<" "<<i2<<" "<<(i1+i2)<<endl;
//	
//	cout<<"\n i1-i2 = "<<i1 <<" "<<i2<<" "<<(i1-i2 )<<endl;
//	
//	cout<<"\n -i1/i3 = "<<i1 <<" "<<i3<<" "<<(-i1/i3)<<endl;
//	
//	cout<<"\n i1% - i3 = "<<i1 <<" "<<i3<<" "<<(i1% - i3)<<endl;
//	
//	cout<<"\n i1* ++ i3 = "<<i1 <<" "<<i3<<" "<<(i1* ++ i3)<<endl;
//	
//	cout<<"\n i2*i4++ = "<<i2 <<" "<<i4<<" "<<(i2*i4++)<<endl;
//	
//	cout<<"\n i2*i3++ = "<<i2<<" "<<i3<<" "<<(i2*i3++)<<endl;
//	
//	cout<<"\n i3*i4 = "<<i3 <<" "<<i4<<" "<<(i3*i4)<<endl;


// 1.
//
//	int a,b;
//	
//	cout<<"Unesite a i b"<<endl;
//	
//	cin>>a>>b;
//	
//	cout<<"a+b ="<< a+b<<"\na-b ="<< a-b<<"\na*b ="<< a*b<<"\na/b ="<< a/b<<"\na%b ="<< a%b<<endl;


// 2.
	
//	const int Cena_Po_Satu = 44;
//	int delovi,sati,rad,ukupno;
//	
//	cout<<"Unesite cenu delova :";
//	cin>>delovi;
//	cout<<endl;
//	
//	
//	cout<<"Unesite broj potrosenih sati:";
//	cin>>sati;
//	cout<<endl;
//	
//	rad = Cena_Po_Satu  * sati ;
//	
//	ukupno = rad+delovi;
//	
//	cout<<"Cena delova iznosi: "<<delovi<<"\n Ukupno je potroseno sati : "<<sati<<"\nCena radova iznosi:"<<rad<<"\nCena po satu iznosi:"<<Cena_Po_Satu<<"\nUkupan iznos je: "<< ukupno<<endl;
	
	
//	3.
//	int god,m,d;
//	
//	cout<<"Unesite godinu i mesec:"<<endl;
//	cin>>god>>m;
//	
//	cout<<"Uneti mesec ima u "<< god<<".godini";
//	switch(m){
//		case 1: case 3: case 5:case 7:case 8: case 10: case 12:
//			cout<<"31 dan.";
//			break;
//		case 2:
//			d= (god%4 == 0)?29:28;
//				cout<<d<<"dana.";
//			break;
//		default:
//			cout<<"30 dan.";
//	}

//  4.

//	const double Stopa_Poreza = 0.0825;
//	
//	double nabavna_cena,porez,cena;
//	
//	
//	cout<<"Unesite nabavnu cenu: ";
//	cin>>nabavna_cena;
//	cout<<endl;
//	
//	
//	porez= nabavna_cena*Stopa_Poreza;
//	cena = porez + nabavna_cena;
//	
//	cout<<"Porez na robu od : "<< nabavna_cena <<"din, iznosi: "<<porez<<endl;
//	cout<<"Ukupna cena uracunata sa porezom iznosi: "<<cena<<endl;
	
	
// 	5.


	const double Stopa_Poreza = 0.0825;
	
	double cena_obroka,iznos_poreza,ukupno,dati_iznos,kusur;
	
	
	cout<<"Stopa poreza iznosi: "<< Stopa_Poreza<<endl;
	
	cout<<"Unesite cenu obroka: ";
	cin>> cena_obroka;
	cout<< endl;
	
	cout<<"Unesite kolicinu novca koju zelite dati : ";
	cin>>dati_iznos;
	cout<< endl;
	
	
	iznos_poreza= cena_obroka * Stopa_Poreza;
	ukupno = iznos_poreza  + cena_obroka;
	
	kusur= dati_iznos - ukupno;
	
	cout<<"Iznos poreza na cenu obroka iznosi: "<<iznos_poreza<<"\nUkupna cena obroka iznosi: "<< ukupno<<endl;
	
	if(ukupno<dati_iznos){
		cout<<"Kusur iznosi:"<<kusur<<endl;		
	}else{
		cout<<"Nedovoljno novca, dodajte jos:"<<kusur<<endl;
	}
	
	return 0; 
}












