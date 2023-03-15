#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
unsigned god,mesec,dana;
cout<<"Unesite godinu i mesec:"<<endl;
cin>>god>>mesec;
//Racunamo koliko taj mesec ima dana
cout<<"Uneti mesec ima u"<<god<<".godini ";
switch(mesec){
case 1: case 3: case 5: case 7: case 8: case 10: case 12:
	cout<<"31 dan.";
	break;
case 2:
	dana=(god%4==0)?29:28;
        cout<<dana<<" dana.";  
	break;
default:
	cout<<"30 dana.";
}
	return 0;
}
