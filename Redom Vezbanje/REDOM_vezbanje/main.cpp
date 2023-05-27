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
*/


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

