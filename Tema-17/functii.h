#pragma once
#include <iostream>
#include <fstream>
using namespace std;

void citire(int x[100][100], int& m, int& n) {
	ifstream f("numere.txt");
	f >> m;
	f >> n;
	for (int i = 0; i < m; i++) {

		for (int j = 0; j < n; j++) {

			f >> x[i][j];
		}
	}
}
void afisare(int x[100][100], int& m, int& n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
}
int sumaDiagonalaSecundara(int x[100][100], int m, int n) {
	int s = 0;
	for (int i = n - 1; i >= 0; i--) {
		s += x[i][(n - 1) - i];
	}
	return s;
}
int sumaDeasupraDiagonalaPrincipala(int x[100][100], int m, int n) {
	int s = 0;
	for (int i = 0; i < n; i++) {
		for (int c = i + 1; c < n; c++) {
			s += x[i][c];
		}
	}
	return s;
}
int sumaElementelorDeasupraDiagonaleiSecundare(int x[100][100], int m, int n) {
	int s = 0;
	for (int i = n - 1; i >= 0; i--) {
		for (int c = 0; c < ((n - 1) - i); c++) {
			s+= x[i][c];
		}
	}
	return s;
}
double maAlElementelorDinNord(int x[100][100], int m, int n) {
	double s = 0;
	double nr = 0; 
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i < j && i + j < n - 1) {
				s += x[i][j];
				nr++;
			}
		}
	}
	double ma = s / nr;
	return ma;
}
int nrElementeNegativeDinSud(int x[100][100], int m, int n) {
	int nr = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i > j && i + j > n - 1) {
				if (x[i][j] < 0) {
					nr++;
				}
			}
		}
	}
	return nr;
}
int nrPareDinEstulMatricii(int x[100][100], int m, int n) {
	int nr = 0; 
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i < j && i + j > n - 1) {
				if (x[i][j] & 2 == 0) {
					nr++;
				}
			}
		}
	}
	return nr;
}
int elementMaxEstulMatricii(int x[100][100], int m, int n) {
	int max = -1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i < j && i + j > n - 1) {
				if (x[i][j] > max) {
					max = x[i][j];
				}
			}
		}
	}
	return max;
}