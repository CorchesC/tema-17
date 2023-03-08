#pragma once
#include "functii.h"
using namespace std;

//exercitiul 1 \/ (Se citeste o matrice patratica de maxim 100 de elemente numere intregi.)

void sol1() {
	//a) Sa se calculeze suma elementelor de pe diagonala secundara
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	int s = sumaDiagonalaSecundara(x, m, n);
	cout << "Suma elementelor de pe diagonala secundara este: " << s << endl;
}
void sol2() {
	//b) Realizati suma elementelor situate deasupra diagonalei principale.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	int s = sumaDeasupraDiagonalaPrincipala(x, m, n);
	cout << "Suma elementelor de pe deasupra diagonalei principale este: " << s << endl;
}
void sol3() {
	//c) Realizati suma ???? (dupa ce au fost sortate) elementele de pe diagonala principla.

}
void sol4() {
	//d) ????
}
void sol5() {
	//e) Care este suma elementelor situate deasupra diagonalei secundare?
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	int s = sumaElementelorDeasupraDiagonaleiSecundare(x, m, n);
	cout << "Suma elementelor de pe deasupra diagonalei secundare este: " << s << endl;
}
void sol6() {
	//f) Afisati media aritmetica a elementelor situate in zona de nord a matricii.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	double ma = maAlElementelorDinNord(x, m, n);
	cout << "Media aritmetica a elementelor situate in zona de nord a matricii este: " << ma << endl;
}
void sol7() {
	//g) Cate elemente negative sunt in zona de sud a matricii?
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	int nr = nrElementeNegativeDinSud(x, m, n);
	cout << "Numarul de elemente negative din zona de sud a matricii este: " << nr << endl;
}
void sol8() {
	//h) Cate elemente pare sunt in zona de est a matricii?
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	int nr = nrPareDinEstulMatricii(x, m, n);
	cout << "Numarul de elemente pare din zona de est a matricii este: " << nr << endl;
}
void sol9() {
	//i) Care este cel mai mare element din vestul matricei?
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	int eMax = elementMaxEstulMatricii(x, m, n);
	cout << "Elementul maxim din estul matricii este: " << eMax << endl;
}