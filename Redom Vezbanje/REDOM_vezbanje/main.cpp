#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;



// KLASE ZADACIIIIIIIIIIIIIIIIIIIIIII
/*
class Tacka
{
    int x;
    int y;
public:
    void Inic(int a,int b)
    {
        x = a;
        y= b;
    }

    void Translacija(int dx,int dy)
    {
        x +=dx;
        y +=dy;
    }

    void Pozicija()
    {
        cout<<"(x,y) = >"<<x<<","<<y<<endl;
    }
};



int main()
{
        Tacka t;

        t.Inic(5,6);
        t.Pozicija();

        t.Translacija(3,2);
        t.Pozicija();
}





class Student
{
    char ime[10];
    char prezime[20];
    int index;
public:

    void Inic(char *i,char *p,int x)
    {
        strcpy(ime,i);
        strcpy(prezime,p);
        index = x;
    }

    void Ispis()
    {
        cout<<"Ime:"<<ime<<"\nPrezime:"<<prezime<<"\nBroj indeksa:"<<index<<endl;
    }
};

int main()
{
    Student halil;

    halil.Inic("Halil","Sacirovic",15);
    halil.Ispis();
}




class Automobil
{
public:
    double rezervoar;
    int potrosnja;
public:
    void Inic(int gorivo,int p)
    {
        rezervoar = gorivo;
        potrosnja = p;
    }

    double Predji(double km)
    {
        rezervoar -= (potrosnja*km/100.0);
        cout<<"Potrosnja Automobila:"<<potrosnja*km/100.0<<endl;
        return rezervoar;
    }

    void Ispis()
    {
        cout<<"Rezervoar:"<<rezervoar<<"\nPotrosnja:"<<potrosnja<<endl;
    }
};


int main()
{
    Automobil audi;

    audi.Inic(62,8);
    audi.Ispis();

    audi.Predji(50.5);
    audi.Ispis();

}



class DvaZnaka
{
    char c1;
    char c2;
public:
    void Inic(char z1,char z2)
    {
        this->c1=z1;
        this->c2= z2;

    }

    void Uvecaj()
    {
        c1++;
        c2++;
    }
    void Ispis()
    {
        cout<<"c1:"<<c1<<"\nc2:"<<c2<<endl;
    }
};


int main()
{
    DvaZnaka dz;

    dz.Inic('A','B');
    dz.Ispis();

    dz.Uvecaj();
    dz.Ispis();
}
*/


// KONSTRUKTOR I DESTRUKTOR

/*

class Tacka
{
    int x;
    int y;
public:
    Tacka()
    {
        x=0;
        y=0;
    }

    Tacka(int a , int b )
    {
        x=a;
        y=b;
    }


    void Translacija(int dx,int dy)
    {
        x +=dx;
        y +=dy;
    }

    void Ispis()
    {
        cout<<"(x,y)=>"<<x<<","<<y<<endl;
    }
};


int main ()
{
    Tacka t1,t2(5,2);


    t1.Ispis();

    t1.Translacija(2,3);


    t1.Ispis();


    t2.Ispis();


    t2.Translacija(2,3);

    t2.Ispis();




}



#include <iostream>
using namespace std;

class Tacka2 {
    public:
    int x;
    int y;
public:
    Tacka2(int x, int y) {
        this->x = x;
        this->y = y;
        cout << "Tacka2:\nX=" << this->x << endl;
        cout << "Y=" << this->y << endl;
    }
};

class Tacka3 {
    int x;
    int y;
    int z;
public:
   Tacka3()
   {
    cout<<"Napravljen je objekat na adresi"<<this<<endl ;
    }
  Tacka3(int x,int y,int z)
      {this->x=x;
       this->y=y;
       this->z=z;
       cout<<"Napravljen je objekat na adresi"<<this<<endl;
       cout<<"Tacka3:\nX="<<this->x<<endl;
       cout<<"Y="<<this->y<<endl;
       cout<<"Z="<<this->z<<endl;
       }

   Tacka3(Tacka2 t, int z) {
        this->x = t.x;
        this->y = t.y;
        this->z = z;


       cout<<"Tacka3:\nX="<<this->x<<endl;
       cout<<"Y="<<this->y<<endl;
       cout<<"Z="<<this->z<<endl;

    }

};

int main() {
    Tacka2 teme1(1, 2); // Tacka3(), Tacka3 *this=&teme
    Tacka2 teme2(4, 5);
    Tacka3 teme3(teme2, 6);
}


class Tacka
{
    int x;
    int y;
public:
    Tacka()
    {
        x=0;
        y=0;
    }

    Tacka(int a, int b=0)
    {
        x=a;
        y=b;
    }

    void Translacija(int dx,int dy)
    {
        x +=dx;
        y +=dy;
    }

    ~Tacka()
    {
        cout<<"Destruktor"<<endl;
    }

    void Ispis()
    {
        cout<<"\nx,y => "<<x<<","<<y<<endl;
    }
};

int main ()
{
    Tacka t,t1(5,3),t2(5);

    cout<<"Tacka :"<<endl;
    t.Ispis();
    t.Translacija(3,8);
    t.Ispis();


    cout<<"Tacka 1:"<<endl;


    t1.Ispis();
    t1.Translacija(7,15);
    t1.Ispis();

    cout<<"Tacka 2:"<<endl;


    t2.Ispis();
    t2.Translacija(13,2);
    t2.Ispis();
}

*/


// SET I GET METODE SA PRIVATNIM ATRIBUTIMA;

/*


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
        cbroj = 123;
        strcpy(imeprezime,"Halil Sacirovic");
        stanje = 5000;
        pocasni = 0;
    }

    Clan(int cb,char *ip,double s,int p)
    {
        cbroj = cb;
        strcpy(imeprezime,ip);
        stanje = s;
        pocasni = p;
    }

    void setBroj(int cb){cbroj = cb;}
    void setIP(char *ip){strcpy(imeprezime,ip);}
    void setStanje(double s){stanje = s;}
    void setPocasni(int p){pocasni =p;}

    int getCbroj(){return cbroj;}
    char* getIP(){return imeprezime;}
    double getStanje(){return stanje;}
    int getPocasni(){return pocasni;}


    void Naplata()
    {
        if(pocasni != 0)
        {
            stanje = stanje-500;
        }
    }
};


int main()
{
    Clan c1,c2;

    c1.setBroj(5);
    c1.Naplata();

    c2.setBroj(6);
    c2.setIP("Halil Sacirovic");
    c2.setPocasni(5);
    c2.setStanje(1600);
    c2.Naplata();

    cout<<"Stanje za Clana 1 posle naplate:"<<c1.getStanje()<<endl;

    cout<<"Stanje za Clana 1:"<<c2.getIP()<<" posle naplate:"<<c2.getStanje()<<endl;
    cout<<c2.getPocasni();
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
        n=10;
        elementi = new int[n];

        for(i =0; i<n;i++)
        {
            elementi [i]=0;
            cout<<"\nKonstruktor koji daje niz od 10 nula"<<endl;
        }
    }
    Niz(int broj_el)
    {
        n = broj_el;
        elementi = new int[n];
    }

    void Ucitaj_Elemente()
    {
        int i;
        cout<<"Unesite elemente niza:";
        for(i=0;i<n;i++)
        {
            cin>>elementi[i];
        }
    }

    Niz(const Niz& niz1)
    {
        int i;
        n = niz1.n;
        elementi= new int[n];
        for(i=0;i<n;i++)
        {
            elementi[i]=niz1.elementi[i];

        }
        cout<<"Kopy konstruktor"<<endl;
    }
    ~Niz()
    {
        delete [] elementi;
    }

    int Max()
    {
        int i;
        int m= elementi[0];
        for(i=0;i<n;i++)
        {
            if(m<elementi[i])
            {
                m = elementi[i];
            }
        }
        return m;
    }

    void Ispis()
    {
        int i;
        cout<<"Elementi niza su:";
        for(i=0;i<n;i++)
        {
            cout<<elementi[i]<<" ";
        }
    }

    int Srednja()
    {
        int i;
        double suma=0;
        double sr_vr;
        for(i=0;i<n;i++)
        {
            suma += elementi[i];
        }

        sr_vr = suma/n;
        return sr_vr;
    }


    Niz dodaj(const Niz& n2)
    {
        Niz n3(n);
        int i;

        for(i=0;i<n;i++)
        {
            n3.elementi[i]= elementi[i];

        }
        for(i=0;i<n2.n;i++)
        {
            n3.elementi[i] +=n2.elementi[i];
        }

        return n3;
    }


};


int main()
{
    Niz n1,n2(5),n3(n2);



    n1.Ispis();
    cout<<endl;

    n2.Ucitaj_Elemente();
    n2.Ispis();
    cout<<endl;


    n3.Ucitaj_Elemente();
    n3.Ispis();
    cout<<endl;

    cout<<"Najveci element niza 2:"<<n2.Max()<<endl;



    cout<<endl;


    cout<<"Sredja vrednost  niza 2:"<< n2.Srednja()<<endl;



    cout<<endl;

     cout<<"Sredja vrednost  niza 3:"<< n3.Srednja()<<endl;


    cout<<endl;



    cout<<"Najveci element niza 3:"<<n3.Max()<<endl;



}



class Polinom
{
    int n;
    double *koeficijent;
public:
    Polinom(int n1)
    {
        n = n1;
        koeficijent = new double[n];

    }

    Polinom()
    {
        n=0;
        koeficijent = new double[n+1];
        for(int i=0;i<n;i++)
        {
            koeficijent[i] = 1;
        }
    }

    Polinom(const Polinom &poly)
    {
        n = poly.n;
        koeficijent = new double[n+1];
        for(int i=0;i<n+1;i++)
        {
            koeficijent[i] = poly.koeficijent[i];
        }
    }

    void Ucitaj()
    {
     cout<<"Unesite koeficijente za polinom stepena "<<n<<endl;
     for(int i=0;i<n+1;i++)
         cin>>koeficijent[i];

    }

    void Ispis()
    {
        cout<<"p="<<koeficijent[0];
        for(int i=1;i<n+1;i++)
        cout<<" + "<<koeficijent[i]<<"x^"<<i;
        cout<<endl;

    }

    int Izracunaj(int x)
    {
        int v_polinom = koeficijent[0];
        int stepenx=1;
        for(int i=1;i<n+1;i++)
        {
            stepenx *=x;
        v_polinom  +=koeficijent[i]*stepenx;
        }

        return v_polinom;
    }


};

int main(){
int x;
Polinom p,p1(3);
p;
p1.Ucitaj();
Polinom p2=p1;
p.Ispis();
p1.Ispis();
p2.Ispis();
cout<<"Unesite x";
cin>>x;
cout<<"Vrednost polinom p2 u tacki x= "<<x<<"  je"<<p2.Izracunaj(x)<<endl;
}



// OBJEKT KLASE KAO ATRIBUT





class Prava
{
    int x1,y1,x2,y2,d;
public:
    Prava()
    {
        x1=0;
        y1=0;
        x2=0;
        y2=0;
    }
    Prava(int x1,int y1,int x2,int y2)
    {
        this->x1=x1;
        this->y1=y1;
        this->x2=x2;
        this->y2=y2;
    }

    void setX1(int x1){this->x1=x1;}
    void setY1(int y1){this->y1=y1;}
    void setX2(int x2){this->x2=x2;}
    void setY2(int y2){this->y2=y2;}


    int getX1(){return x1;}
    int getY1(){return y1;}
    int getX2(){return x2;}
    int getY2(){return y2;}

    int RacunajDuzinu()
    {
        d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
        return d;
    }

    void Ispis()
    {
        cout<<"\nx1:"<<x1<<"\ny1:"<<y1<<"\nx2:"<<x2<<"\ny2:"<<x1<<endl;
    }

};


class Kvadrat
{
    Prava vrh;
    Prava dno;
public:
    Kvadrat()
    {
        vrh.setX1(1);
        vrh.setY1(1);
        vrh.setX2(2);
        vrh.setY2(2);

        dno.setX1(3);
        dno.setY1(3);
        dno.setX2(4);
        dno.setY2(4);

    }

    Kvadrat(Prava po1, Prava po2){
    vrh.setX1(po1.getX1());
    vrh.setY1(po1.getY1());
    vrh.setX2(po1.getX2());
    vrh.setY2(po1.getY2());
    dno.setX1(po2.getX1());
    dno.setY1(po2.getY1());
    dno.setX2(po2.getX2());
    dno.setY2(po2.getY2());
    }

    float Povrsina()
    {
        return pow(vrh.RacunajDuzinu(),2);
    }

    float Obim()
    {
        return 4*vrh.RacunajDuzinu();
    }

    void Ispis()
    {
        cout<<"Povrsina:"<<Povrsina()<<"\nObim:"<<Obim()<<endl;
    }


};


int main()
{
    Prava p1(0,10,10,50),p2;
    Kvadrat k(p1,p2),k1;

    k.Ispis();
    k1.Ispis();

    p1.Ispis();
    p2.Ispis();
}


class Ocena
{
    char ime_predmeta[30];
    int ocena;
    char datum[20];
public:
    Ocena()
    {
        strcpy(ime_predmeta,"OOP");
        ocena = 10;
        strcpy(datum,"16.06.2023");
    }

    Ocena(char *ip,int o,char *d)
    {
        strcpy(ime_predmeta,ip);
        ocena = o;
        strcpy(datum,d);
    }

    bool jeLiPolozio()
    {
        if(ocena>5)
        {
            return true;
        }
        else{
            return false;
        }
    }

    void Ispis()
    {
        cout<<"Ime Predmeta"<<ime_predmeta<<"\nOcena:"<<ocena<<"\nDatum:"<<datum<<endl;
    }

    void setip(char *ip){strcpy(ime_predmeta,ip);}

    void setOcena(int o){ocena =o;}

    void setDatum(char *d){strcpy(datum,d);}


    char* getip(){return ime_predmeta;}
    int getOcena(){return ocena;}
    char* getDatum(){return datum;}

};


class Student
{
    char imep[30];
    int index;
    Ocena o1,o2,o3;
public:
    Student()
    {
     strcpy(imep,"Halil Sacirovic");
     o1.setip("ORT");
     o1.setOcena(7);
     o1.setDatum("25.02.2023");

     o2.setip("OP");
     o2.setOcena(6);
     o2.setDatum("23.03.2023");

     o3.setip("LA");
     o3.setOcena(10);
     o3.setDatum("21.02.2023");
    }

    Student(char *ip,Ocena oc1,Ocena oc2,Ocena oc3)
    {
          strcpy(imep,ip);

        o1=oc1;
        o2=oc2;
        o3=oc3;

    }

    int UkupnoPolozenih()
    {
        int s=0;

        if(o1.jeLiPolozio() == true)
        {
            s++;
        }
        if(o2.jeLiPolozio() == true)
        {
            s++;
        }
        if(o3.jeLiPolozio() == true)
        {
            s++;
        }

        return s;
    }

    float Prosek()
    {
        float suma =0;

        suma = o1.getOcena() + o2.getOcena() + o3.getOcena();

        return suma/3;
    }

    void Ispis()
    {
        cout<<"Student "<<imep<<"je polozio:"<<UkupnoPolozenih()<<"ispita"<<endl;

        cout<<"Ocene studenta su:";
        o1.Ispis();
        o2.Ispis();
        o3.Ispis();
    }
};

int main()
{
    Ocena o1,o2("aMatematicka Analiza",7,"15.6.2023"),o3("Elektrotehnika",6,"21.06.2023");

    Student s1,s2("Hanefija Catovic",o2,o3,o1);


    o1.Ispis();
    cout<<endl;
    o2.Ispis();
    cout<<endl;
    o3.Ispis();
    cout<<endl;


    s1.Ispis();
    cout<<endl;
    s2.Ispis();
    cout<<endl;
}


// FRIEND FUNCTION


enum Zanr  {POP,REP,ROK};

class Izvodjac
{
    string naziv;
    Zanr zanr;
public:
    string getZanr()
    {
          if (zanr == POP)
        {
            return "POP";
        }
        else if (zanr == REP)
        {
            return "REP";
        }
        else if (zanr == ROK)
        {
            return "ROK";
        }
        else
        {
            return "Nepoznat zanr";
        }
    }

    Izvodjac(string n, Zanr z)
    {
        naziv = n;
        zanr = z;
    }

    Izvodjac()
    {
        naziv = "Micko";
        zanr = POP;
    }

    void Pisi()
    {
        cout<<naziv<<"("<<getZanr()<<")"<<endl;
    }
};


class Pesma
{
    int minut,sek;
    string naziv;
    Izvodjac *izv;
    int br,kap;

public:
    Pesma(int m , int s,string naz,int k)
    {
        minut =m;
        sek = s;
        naziv = naz;
        kap = k;

        izv = new Izvodjac[kap];
        br =0;
    }
    ~Pesma() { delete [] izv; }


void dodaj(Izvodjac *i) {
if (br < kap)
izv[br++] = *i;
}
int dohvSek() const { return sek; }
int dohvMin() const { return minut; }
void pisi() const;
friend bool duze(const Pesma &p1,
 const Pesma &p2) {
if (p1.minut > p2.minut ||
 p1.minut == p2.minut && p1.sek > p2.sek)
 return true;
else return false;
}
};

void Pesma::pisi() const {
cout << "P(" << naziv << " - "
 << minut << ":" << sek << ")" << endl;
cout << "Izvodjaci: ";
for (int i = 0; i < br; i++)
izv[i].Pisi();  }
int main() {
Izvodjac iz1("Micko", POP), iz2("Uki",ROK), iz3("Jocke", REP);
Pesma p1(2, 55, "Pesma", 2), p2(3, 23, "Pesma2", 1), p3(2, 49, "Pesma3", 1);
iz1.Pisi();iz2.Pisi();iz3.Pisi();
p1.dodaj(&iz1);p1.dodaj(&iz2);p2.dodaj(&iz3);
p1.pisi();p2.pisi();p3.pisi();


return 0;
}




// PREKLAPANJE OPERATORA




class Vektor
{
    int niz[3];
public:
    Vektor(const int v[])
    {
        for(int i=0;i<3;i++)
        {
            niz[i] =v[i];
        }
    }

    void setX(int x){niz[0] = x;}
    void setY(int y){niz[1]=y;}
    void setZ(int z){niz[2]=z;}

    int getX(){return niz[0];}
    int getY(){return niz[1];}
    int getZ(){return niz[2];}

    void Ispis()
    {
        cout<<"x=>"<<getX()<<"\ny =>"<<getY()<<"\nz =>"<<getZ()<<endl;
    }

    Vektor dodaj(Vektor v);

    Vektor operator +(Vektor v);

    Vektor pomnozi(int k);

    Vektor operator *(int k);

    const Vektor& operator =(const Vektor &v);

    Vektor operator ++();
    Vektor operator ++(int);

    Vektor operator -();
    int & operator [](int i);

};


Vektor Vektor::operator+(Vektor v1)
{
    Vektor v2 = *this;

    for(int i = 0;i<3;i++)
    {
        v2.niz[i] +=v1.niz[i];
    }

    return v2;
}


Vektor Vektor::operator*(int k)
{
        Vektor v2 = *this;

        for(int i = 0; i<3;i++)
        {
            v2.niz[i] *=k;
        }

        return v2;
}


const Vektor& Vektor::operator=(const Vektor& v1)
{
    if(&v1 == this) return *this;

    for(int i=0;i<3;i++)
    {
        niz[i] = v1.niz[i];
    }
    return *this;
}

Vektor Vektor::operator++(int)
{
    for(int i= 0;i<3;i++)
    {
        niz[i]++;

    }
    return *this;
}


Vektor Vektor::operator ++()
{
    for(int i=0;i<3;i++)
    {
        niz[i]++;
    }
    return *this;
}


Vektor Vektor::operator -()
{
    Vektor t=*this;
    for(int i=0;i<3;i++)
    {
        t.niz[i]*= -1;
    }
    return t;
}


int & Vektor::operator[](int i)
{
    return niz[i];
}

int main()
{
    int a[] = {5,2,3};


    Vektor niz(a);

    int b[] = {5,2,3};

    Vektor n(b);


    Vektor dodaj = niz.dodaj(n);
    niz.Ispis();

    cout<<endl;

    Vektor zbir = niz+niz; zbir.Ispis();


    cout<<endl;
    (niz*2).Ispis();


    cout<<endl;
    niz=niz=zbir;

    zbir.Ispis();

    cout<<endl;

    (-niz).Ispis();

    cout<<endl;
    cout<<niz[2];

    cout<<endl;

}


// OVI operatori zapravo sluze da se definisu neke operacije kao sto je naprimer +
/*

naprimer da bi bilo moguce sabiranja jedne klase sa drugom odnosno elemente jedne klase sa elementima druge klase moze
se uraditi pomocu operatora
tako sto se definise operator i znak +  i posle u toj funkciji se napise kod kako zapravo to treba da radi
gore je navedeno naprimer Da se dobija argument nekog drugog niza iz klase ili tako nesto i posle dole navedes
jos jednu Klasu i posle ih saberes na nacin preko for petlje i vratis posle taj Vektor v2




// NASLEDIVANJE



class Datum
{
      public:
      int d,m,g;
      public:
      Datum()
      {       d=1;       m=1;       g=2018;      }
      Datum(int d,int m,int g)
      {        this->d=d;        this->m=m;        this->g=g;      }
      void ispis()
      {
           cout<<"Danas je datum "<<d<<"."<<m<<"."<<g<<endl;
      }


    Datum uporedi(Datum dat)
      {
            Datum pom; // pomocni datum u kom se cuva razlika ova dva datuma
            if(d >= dat.d)
              pom.d = d - dat.d;
            else
              {
                switch(m)
                {
                  case 2:case 4:case 6:case 8:case 9:
                       case 11:case 1: pom.d = 31+d - dat.d;
                     break;
                  case 5:case 7:case 10:case 12:
                       pom.d = 30+d - dat.d;
                       break;
                   case 3:
                   if((g % 4 == 0 && g % 100 != 0) || (g % 400 == 0))
                   pom.d = 29+d - dat.d;
                   else
                   pom.d = 28+d - dat.d;
                   break;
                    }
                    m --;
                  }
                    if(m == 0)
                     {
                       m = 12;
                       g --;
                     }
                    if(m >= dat.m)

                                        {
                  pom.m = m - dat.m;
                }
                else
                {
                  pom.m = 12 + m - dat.m;
                  g --;
                }
                pom.g = g - dat.g;
      return pom;
      }
};


class Rodjendan : public Datum
// posto je Rodjendan nasledila Datum ona samim tim ima atribute d,m,g
{
      public:
      char ime[15];
      char prezime[20];
      public:
      Rodjendan()
      {        strcpy(ime,"Lazar");
        strcpy(prezime,"Antonijevic");
        d = 28;        m = 10;        g = 2003;      }
      Rodjendan(char *i,char *p,int d,int m,int g)
      {        strcpy(ime,i);        strcpy(prezime,p);
       this->d = d;        this->m = m;        this->g = g;
       }

       bool daLiJe(Datum dat)
      { // proveravamo da li su dani i meseci isti, godine ne moraju biti iste
           if(dat.d == d && dat.m == m)
             return true;
           return false;
      }
      void ispisSlavljenika(Datum dat)
      {          if(daLiJe(dat) == true)
             cout<<"Danas je "<<ime<<"u rodjendan. Cestitamo!"<<endl;
          else
          {            Datum pom=uporedi(dat);
            cout<<"Do rodjendana ima jos: "<<pom.d<<" dana i ";
            cout<<pom.m<<" meseci"<<endl;
         }
      }


     int godine(Datum dat)
     {
         if(daLiJe(dat)==true)
         {
             return dat.g - g;
         }
         else{
            if(dat.m > m)
            {
                return dat.g - g;
            }
            else if(dat.m == m)
            {
                if(dat.d > d)
                {
                    return dat.g -g;
                }
                else
                {
                    return dat.g - 1 - g;
                }
            }else
            {
                return dat.g - 1 - g;
            }

         }
     }

};
      int main()
      {
        Rodjendan Lazar;
        Datum dat(29,5,2023);
        cout<<"Lazar ima "<<Lazar.godine(dat)<<endl;
        Lazar.ispisSlavljenika(dat);
         return 0;
      }

      // Ovo ko uradi sam svaka mu dala







class Kvadar
{
protected:
    int a;
    int b;
    int c;
public:
    Kvadar()
    {
        a =1;
        b= 1;
        c= 1;

    }

    Kvadar(int a, int b ,int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;

    }

    void Ispis()
    {
        cout<<"\na:"<<a<<"\nb:"<<b<<"\nc:"<<c<<endl;

    }


};



class Bazen: public Kvadar
{
    int d;
public:
    Bazen():Kvadar()
    {
        d = 5;
    }

    void Ispis()
    {
      cout<<"\na:"<<a<<"\nb:"<<b<<"\nc:"<<c<<"\nDubina:"<<d<<endl;
    }
};


int main()
{
    Bazen b;
    Kvadar kv,kv1(5,6,7);

    cout<<"Kvadar:";
    kv.Ispis();
    cout<<"\nKvadar1:";


    kv1.Ispis();

    cout<<"\nBazen1:";


    b.Ispis();
}
*/


// VISESTRUKO NASLEDIVANJE


/*


class Proizvod
{
    protected:
    int barKod;
    int cena;
    int kolicina;
public:
    Proizvod()
    {
        barKod = 111;
        cena = 500;
        kolicina = 5;
    }

    Proizvod(int bk,int c,int k)
    {
        barKod = bk;
        cena=c;
        kolicina = k;
    }

    void Ispis()
    {
        cout<<"\nBarkod:"<<barKod<<"\nCena:"<<cena<<"\nKolicina:"<<kolicina<<endl;
    }
};


class Radnik
{
    protected:
    char ime[15];
    char prezime[20];
public:
    Radnik()
    {
        strcpy(ime,"Halil");
        strcpy(prezime,"Sacirovic");

    }

    Radnik(char *i,char *p)
    {
        strcpy(ime,i);
        strcpy(prezime,p);

    }


    void Ispis()
    {
        cout<<"\nIme:"<<ime<<"\nPrezime:"<<prezime<<endl;
    }
};

class Prodavnica :public Radnik,public Proizvod
{
public:
    int brRadnih;
    int cenaPoSatu;
public:
    Prodavnica():Radnik(),Proizvod()
    {
        brRadnih = 8;
        cenaPoSatu = 13;
    }

    Prodavnica(char *ime,char *prezime,int barKod,int cena,int kolicina,int brS,int cps):Radnik(ime,prezime),Proizvod(barKod,cena,kolicina)
    {
        brRadnih = brS;
        cenaPoSatu= cps;
    }

    void Ispis()
    {
        cout<<"\nBroj radnih sati:"<<brRadnih<<"\nCena Po satu:"<<cenaPoSatu<<endl;

        Proizvod::Ispis();
        Radnik::Ispis();

    }

    int Plata()
    {
        return cenaPoSatu*brRadnih;
    }

    int Prodaj(int kol)
    {
       if(kolicina>kol)
       {

           kolicina -=kol;
       }
       else
       {
           cout<<"Nemamo toliko na stanju"<<endl;
       }
    }
};

int main()
{

    Prodavnica pr1,pr2("Hasan","Hasanovic",123,550,100,8,12);

    pr2.Ispis();
    pr1.Ispis();

    cout<<"Dnevnica:"<<pr1.Plata()<<endl;

    pr1.Prodaj(2);

    pr1.Ispis();

}





class Dosije
{
protected:
    char ime[15];
    char prezime[20];
    int index;
public:
    Dosije()
    {
        strcpy(ime,"Halil");
        strcpy(prezime,"Sacirovic");
        index = 2;
    }
    Dosije(char *i,char *p,int x)
    {
         strcpy(ime,i);
        strcpy(prezime,p);
        index = x;
    }
    void PredstaviSe()
    {
        cout<<"\nIme:"<<ime<<"\nPrezime"<<prezime<<endl;
    }


};

class Predmet
{
protected:
    char imeP[20];
    char prezimeP[20];
    char nazivP[20];
public:
    Predmet()
    {
         strcpy(imeP,"Safet");
         strcpy(prezimeP,"Purkovic");
         strcpy(nazivP,"OOP");
    }

    Predmet(char *ip,char *pp,char *np)
    {
         strcpy(imeP,ip);
         strcpy(prezimeP,pp);
         strcpy(nazivP,np);
    }

    void opisPredmeta()
    {
        cout<<"\nIme Profesora:"<<imeP<<"\nPrezime Profesora:"<<prezimeP<<"\nNaziv Predmeta"<<nazivP<<endl;
    }

};

class Ispit:protected Dosije,protected Predmet
{
    int ocena;
    char datum[20];

public:
    Ispit():Dosije(),Predmet()
    {
        ocena =10;
        strcpy(datum,"16.06.2023");
    }

    Ispit(char *i,char *p,char x,char *ip,char *pp,char *np,int o,char *d):Dosije(i,p,x),Predmet(ip,pp,np)
    {
        ocena = o;
        strcpy(datum,d);
    }

    void Ispis()
    {
        cout<<"Ocena:"<<ocena<<"\nDatum:"<<datum<<endl;

        Dosije::PredstaviSe();
        Predmet::opisPredmeta();
    }

    int jeLiPolozio()
    {
        if(ocena > 5)
        {
            return 1;
        }
        return 0;
    }
};


int main()
{
    Ispit i1,i2("Mujo","Sacirovic",15,"Bratislav","Miric","Programiranje",7,"23.03.2023");

     cout<<"Student 1:"<<endl;


    i1.Ispis();

    cout<<i1.jeLiPolozio();

    cout<<"\nStudent 2:"<<endl;



    i2.Ispis();

    cout<<i2.jeLiPolozio();

}






// POLIMORFIZAM


class Izraz1
{
    char op1;
    int operand1;
    int operand2;
public:
    Izraz1()
    {
        op1 = '+';
        operand1 = 2;
        operand2 = 5;

    }

    Izraz1(int operand1 ,int operand2,char operacija1)
    {
        this->operand1 = operand1;
        this->operand2 = operand2;
        op1 = operacija1;
    }

    void setop1(char b){op1 =b;}
    void setoperand1(int b){operand1 = b;}
    void setoperand2 (int b){operand2= b;}

    char getop1(){return op1;}
    int getoperand1(){return operand1;}

    int getoperand2(){return operand2;}


    virtual double izracunaj()
    {
        switch(op1)
        {
            case '+':return operand1 + operand2;
            case '-':return operand1-operand2;
            case '*':return operand1*operand2;
            case '/':if(operand1 % 2 == 0)
            {
                return operand1 /operand2;
            }
            else{
                    return 0;break;
                };
            default:return 0;break;
        }
    }

    void ispis()
    {
        cout<<operand1<<op1<<operand2<<endl;
    }
};


class Izraz2:public Izraz1
{
    char op2;
    int operand3;
public:
    Izraz2():Izraz1(2,5,'+')
    {
        op2 = '*';
        operand3 = 3;
    }

    Izraz2(int operand1,int operand2,int operand3,char op1,char op2):Izraz1(operand1,operand2,op1)
    {
        this->op2= op2;
        this->operand3 = operand3;

    }

    void setop2(char b){op2 = b;}
    void setoperand3(int b){operand3 = b;}

    char getop2(){return op2;}
    int getoperand3(){return operand3;}

    double izracunaj()
    {
        double prvi;

        if((op2=='*' || op2=='/')&& (getop1()=='+' || getop1()=='-'))
        {
            switch(op2)
            {
                case '*':prvi =(double)getoperand2() * operand3; break;
                case '/':prvi =(double)getoperand2() / operand3;break;
            }

            switch(getop1()){
                case '+':return prvi +getoperand1();
                case '-':return prvi - getoperand1();
            }
        }
        else{
            switch(getop1())
            {
                case '+' : prvi = (double) getoperand1() + getoperand2(); break;
                case '-' : prvi = (double) getoperand1() - getoperand2(); break;
                case '*' : prvi = (double) getoperand1() * getoperand2(); break;
                case '/' : prvi = (double) getoperand1() / getoperand2(); break;
            }
            switch(op2) {
                case '+' : return prvi + getoperand1();
                case '-' : return prvi - getoperand1();
                case '*' : return prvi * getoperand1();
                case '/' : return prvi / getoperand1();            }
                }
            return prvi;
        }
            void ispis() {
                cout << getoperand1() << getop1() << getoperand2() << op2 << operand3 <<endl;
            }
};

int main() {
    Izraz2 iz;
    iz.ispis();
    cout << iz.izracunaj() <<endl;
    return 0;
}





class Artikal
{
    char naziv[20];
    double cena;
    int popust;

public:
    Artikal()
    {
        strcpy(naziv,"Voda");
        cena = 80.0;
        popust = 0;
    }
    Artikal(char *n,double c,int p)
    {
        strcpy(naziv,n);
        cena = c;
        popust =p;
    }

    double Cena_sa_Popustom()
    {
       double Cena_sa_popustom = cena*popust/100.0;

       return cena- Cena_sa_popustom;
           }

    void Ispis()
    {
        cout<<"\nNaziv:"<<naziv<<"\nCena:"<<cena<<"\nPopust:"<<popust<<endl;
    }
};
class Stavka
{


};



int main()
{
    Artikal a1,a2("Surutka",250.0,20);
cout<<"Cena sa popustom"<<a1.Cena_sa_Popustom();
    a1.Ispis();

    a2.Ispis();
  cout<<"Cena sa popustom"<<a2.Cena_sa_Popustom();
}






class Artikal
{
    string naziv;
    double cena;
    int popust;
public:
    Artikal(string n,double c,int p=0)
    {
        naziv = n;
        cena = c;
        popust = p;
    }

    Artikal()
    {
        naziv = "Voda";
        cena = 70.0;
        popust = 0;
    }

    void Ispis()
    {
        cout<<"\nNaziv ="<<naziv<<"\nCena = "<<cena<<"\n"<<Popust()<<endl;
    }

    bool imaLiPopust()
    {
        if(popust>0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    string getNaziv(){return naziv;}
    double getCena(){return cena;}


    double Popust()
    {
        if(imaLiPopust())
        {
            cout<<"Popust Iznosi:"<<popust<<"\nCena sa popustom: ";
            return cena-cena*popust/100.0;
        }
        else
        {
            cout<<"Trenutno nema nikakav Popust"<<endl;
            return 0;
        }
    }

    double getCenaPopust(){return cena-cena*popust/100.0;}


};



class Stavka
{
    Artikal artikal;
    int kolicina;
    static int redni_Broj_Inc;
    int redni_Broj;

public:
    Stavka(const Artikal &ar,int kol)
    {
        artikal = ar;
        kolicina = kol;
        redni_Broj = redni_Broj_Inc++;
    }

    int getredniBroj(){return redni_Broj;}

    int getIznos(){return kolicina * artikal.getCenaPopust();}

    void Ispis()
    {
        cout<<"Stavka:"<<redni_Broj<<"\nArtikal:"<<artikal.getNaziv()<<"\nIznos stavke:"<<getIznos()<<endl;
    }

};
int Stavka::redni_Broj_Inc = 1;

int main()
{
    Artikal a1,a2("Sok",140.0,10);

    Stavka s1(a2,5),s2(a1,10);
    a1.Ispis();

    a2.Ispis();

    cout<<"\nStavka:1\n"<<endl;

    s1.Ispis();

     cout<<"\nStavka:2\n"<<endl;

    s2.Ispis();


}





enum Zanr{POP,REP,ROK};

class Izvodjac
{

    string ime;
    Zanr zanr;

public:
    string NadjiZanr(Zanr zanr)
    {
        switch(zanr)
        {
            case 0:return "POP";break;
            case 1:return "REP";break;
            case 2:return "ROK";break;
            default: return "NETACAN UNOS";break;
        }
    }
    Izvodjac(string naziv,Zanr z)
    {
        ime=naziv;
        zanr = z;
    }

    Izvodjac()
    {
        ime = "Tito";
        zanr = REP;
    }

    Zanr getZanr()const{return zanr;}

    void Ispis()
    {
        cout<<"\nIme:"<<ime<<"\nZanr:"<<NadjiZanr(zanr)<<endl;
    }



};

class Pesma
{
  string naziv;
  int minut,sek;
  int br,kap;
  Izvodjac *izv;
public:
    Pesma(string n,int m,int s,int k)
    {
        naziv = n;
        minut = m;
        sek = s;
        kap =k;
        izv = new Izvodjac[kap];
        br = 0;
    }

    int getMinut(){return minut;}
    int getSek(){return sek;}

    void dodaj(Izvodjac *i)
    {
        if(br<kap)
        {
            izv[br++] = *i;
        }
    }

    friend bool Duza(const Pesma &p1,const Pesma &p2)
    {

        if((p2.minut == p1.minut && p2.sek >p1.sek) || p2.minut > p1.minut)
        {
            return true;
        }
        else{
            return false;
        }

        {

        }
    }

    void Pisi()
    {
    cout << "P(" << naziv << " - "<< minut << ":" << sek << ")" << endl;
    cout << "Izvodjaci: ";
    for (int i = 0; i < br; i++)
    izv[i].Ispis();
     }

};


int main()
{
    Izvodjac iz1("Micko",ROK),iz2;


    Pesma p1("Pesma1",2,55,3),p2("Pesma2",3,5,2);

    iz1.Ispis();
    p1.dodaj(&iz2);

    p1.dodaj(&iz1);


    p1.Pisi();
}




enum Zanr{POP,ROK,REP};



class Test
{
    Zanr zanr;

public:

    Test(Zanr z)
    {
        zanr = z;
    }
    string NadjiZanr(Zanr zanr)
    {
        if(zanr == 0)
        {
            return "POP";
        }
        else if(zanr == 1)
        {
            return "ROK";
        }
        else if(zanr ==2)
        {
            return "REP";
        }
        else{
            return "Netacan unos";
        }
    }



    void Ispis()
    {
        cout<<"Zanr:"<<NadjiZanr(zanr);
    }
};

int main()
{
    Test t1(REP);
    t1.Ispis();
}




class Vektor
{
    int niz[3];

public:
    Vektor(const int a[])
    {
        for(int i=0;i<3;i++)
        {
            niz[i] = a[i];
        }
    }

    void setX(int x){niz[0] = x;}
    void setY(int y){niz[1]=y;}
    void setZ(int z){niz[2]= z;}

    int getX(){return niz[0];}

    int getY(){return niz[1];}

    int getZ(){return niz[2];}


    void Ispis()
    {
        cout<<"\nx:"<<niz[0]<<"\ny:"<<niz[1]<<"\nz:"<<niz[2]<<endl;
    }

    Vektor dodaj(Vektor v)
    {

    }

    Vektor operator +(Vektor v)
    {
        Vektor v2 = *this;
        for(int i=0;i<3;i++)
        {
            v2.niz[i] += v.niz[i]
        }

        return v2;
    }

    Vektor operator *(int k)
    {
        Vektor v2 = *this;
        for(int i=0;i<3;i++)
        {
            v2.niz[i] *=k;
        }

        return v2;
    }

    Vektor operator =(Vektor v)
    {
        Vektor v2 =
    }

    Vektor operator ++(Vektor v)
    {

    }
};



class Vocka {
private:
    std::string naziv;
    double godisnjiPrihod;
    int zivotniVek;
    int trenutnaStarost;

public:
    Vocka(std::string naziv, double godisnjiPrihod, int zivotniVek)
        : naziv(naziv), godisnjiPrihod(godisnjiPrihod), zivotniVek(zivotniVek), trenutnaStarost(0) {}

    double getGodisnjiPrihod() const {
        return godisnjiPrihod;
    }

    int getPreostaleGodine() const {
        return zivotniVek - trenutnaStarost;
    }

    void operator++(int) {
        trenutnaStarost++;
    }

    friend std::ostream& operator<<(std::ostream& os, const Vocka& vocka) {
        os << vocka.naziv << "(" << vocka.trenutnaStarost << "/" << vocka.zivotniVek << "):" << vocka.godisnjiPrihod<<vocka.getPreostaleGodine();
        return os;
    }
};

int main() {
    std::string naziv = "Jabuka";
    double godisnjiPrihod = 1000.0;
    int zivotniVek = 10;

    Vocka vocka(naziv, godisnjiPrihod, zivotniVek);
    std::cout << vocka << std::endl;

    vocka++;
    std::cout << vocka << std::endl;

    return 0;
}
*/



class Nalepnica {
private:
    static int brojac; // staticki član klase za generisanje jedinstvenog identifikatora
    int identifikator;
    string naziv;

public:
    // Konstruktor
    Nalepnica(const string& naziv) : identifikator(brojac++), naziv(naziv) {}

    // Konstruktor kopije
    Nalepnica(const Nalepnica& other) : identifikator(brojac++), naziv(other.naziv) {}

    // Metoda za ispis
    void ispisi() const {
        std::cout << "Identifikator: " << identifikator << ", Naziv: " << naziv << std::endl;
    }
};

int Nalepnica::brojac = 0; // Inicijalizacija statickog clana klase

int main() {
    // Kreiranje objekta Nalepnica
    string naziv;
    cout << "Unesite naziv nalepnice: ";
    getline(cin, naziv);

    Nalepnica nalepnica1(naziv);

    // Ispis objekta
    nalepnica1.ispisi();

    // Kopiranje objekta
    Nalepnica nalepnica2 = nalepnica1;

    // Ispis kopiranog objekta
    nalepnica2.ispisi();

     Nalepnica nalepnica3("Voda");
    nalepnica3.ispisi();

    return 0;
}