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


*/

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
