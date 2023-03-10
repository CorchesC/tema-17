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

//exercitiul 2 \/ ( Sa se citeasca o matrice patratica de maxim 1000 x 1000 de elemente numere intregi.)
	
void sol10() {
	//a) Care este cmmdc-ul tuturor elementelor de pe diagonala principala?
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	cmmdcElementelorDePeDiagonalaPrincipala(x, m, n);
}
void sol11() {
	//b) Sa se verifice daca matricea este simetrica fata de diagonala 1.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	bool aff = matriceSimetricaFataDeDiagonlaPrincipala(x, m, n);
	aff == true
		?
		cout << "Matricea este simetrica fata de diagonala 1" << endl
		:
		cout << "Matricea nu este simetrica fata de diagonala 1" << endl;
}
void sol12() {
	//c) Afisati triunghiul isoscel cu maximul de numere ce au prima cifra egala cu ultima cifra.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	triunghiulIsoscelCuCelMaiMaiMareNrDeCifreSol12(x, m, n);
}
void sol13() {
	//e) Care este numarul cu cele mai multe cifre distincte de pe diagoanala secundara
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	int nr = numarulCuCeleMaiMulteCifreDistincteDgSec(x, m, n);
	cout << "Numarul cu cele mai multe cifre distincte de pe diagoanala secundara este: " << nr << endl;
}
void sol14() {
	//g) Sa se realizeze un vector cu toate elementele ce au cifra de control un numar par.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	int v[100], d = 0;
	vectorDinElementeleCuCCPara(x, m, n, v, d);
	afisareVector(v, d);
}
void sol15() {
	//l) Care este triunghiul isoscel ce are cea mai mare frecventa a cifrei k? (k citit de la tastatura)
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	cout << "Introduceti k: " << endl;
	int k;
	cin >> k;
	int var = triunghiulIsoscelCuFrecventaSol16(x, m, n, k);
	if (var == 1) {
		cout << "Triunghiul isoscel ce are cea mai mare frecventa a cifrei k este: nord" << endl;
	}
	if (var == 2) {
		cout << "Triunghiul isoscel ce are cea mai mare frecventa a cifrei k este: sud" << endl;
	}
	if (var == 3) {
		cout << "Triunghiul isoscel ce are cea mai mare frecventa a cifrei k este: est" << endl;
	}
	if (var == 4) {
		cout << "Triunghiul isoscel ce are cea mai mare frecventa a cifrei k este: vest" << endl;
	}
}
void sol16() {
	//m) Matricea B este transpusa matricei A. B-? 
	//?????????
}
void sol17() {
	//n) Afisati mesajul DA daca elementele de pe diagonala principala sunt multiplii celor de pe diagonala secundara.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	bool aff = rezolvareSo17(x, m, n);
	aff == true
		?
		cout << "Elementele de pe diagonala principala sunt multiplii elementelor de pe diagonala secundara. " << endl
		:
		cout << "Elementele de pe diagonala principala nu sunt multiplii elementelor de pe diagonala secundara. " << endl;
}