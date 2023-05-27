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
*/


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

