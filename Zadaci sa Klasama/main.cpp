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



*/


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







