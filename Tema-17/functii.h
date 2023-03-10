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
int celMaiMareDivComun(int a, int b) {
	int dmaxA = -1;
	int dmaxB = -1;
	int dmaxCOM = 0;
	int x1 = 1;
	int x2 = 1;
	for (x1 = 1, x2 = 1; x1 <= a, x2 <= b; x1++, x2++) {
		if (a % x1 == 0) {
			if (x1 > dmaxA) {
				dmaxA = x1;
			}
		}
		if (b % x2 == 0) {
			if (x2 > dmaxB) {
				dmaxB = x2;
			}
		}
		if (dmaxA == dmaxB) {
			dmaxCOM = dmaxA;
		}
	}
	return dmaxCOM;
}
void cmmdcElementelorDePeDiagonalaPrincipala(int x[100][100], int m, int n) {
	for (int i = 0; i < n; i++) {
		if (celMaiMareDivComun(x[i][i], x[i + 1][i + 1]) != 0) {
			cout << celMaiMareDivComun(x[i][i], x[i + 1][i + 1]) << " ";
		}
	}
	cout << endl;
}
bool matriceSimetricaFataDeDiagonlaPrincipala(int x[100][100], int m, int n) {
	bool aff = false;
	for (int i1 = 0; i1 < n; i1++) {
		for (int i2 = 0; i2 < n; i2++) {
			for (int c1 = i1 + 1; c1 < n; c1++) {
				for (int c2 = 0; c2 < i2; c2++) {
					if (x[i1][c1] == x[i2][c2]) {
						aff = true;
					}
					else {
						return false;
					}
				}
			}
		}
	}
	return aff;
}
bool primaCifraEgalaCuUltima(int n) {
	int pc = n % 10;
	int uc = 0;
	while (n != 0) {
		uc = n % 10;;
		n = n / 10;
	}
	if (uc == pc) {
		return true;
	}
	else {
		return false;
	}
}
int nrMaximCuPcUcEgaleNord(int x[100][100], int m, int n) {
	int nr = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i < j && i + j < n - 1) {
				if (primaCifraEgalaCuUltima(x[i][j]) == true) {
					nr++;
				}
			}
		}
	}
	return nr;
}
int nrMaximCuPcUcEgaleSud(int x[100][100], int m, int n) {
	int nr = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i > j && i + j > n - 1) {
				if (primaCifraEgalaCuUltima(x[i][j]) == true) {
					nr++;
				}
			}
		}
	}
	return nr;
}
int nrMaximCuPcUcEgaleEst(int x[100][100], int n, int m) {
	int nr = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i < j && i + j > n - 1) {
				if (primaCifraEgalaCuUltima(x[i][j]) == true) {
					nr++;
				}
			}
		}
	}
	return nr;
}
int nrMaximCuPcUcEgaleVest(int x[100][100], int n, int m) {
	int nr = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i > j && i + j < n - 1) {
				if (primaCifraEgalaCuUltima(x[i][j]) == true) {
					nr++;
				}
			}
		}
	}
	return nr;
}
void triunghiulIsoscelCuCelMaiMaiMareNrDeCifreSol12(int x[100][100], int n, int m) {
	int nord = nrMaximCuPcUcEgaleNord(x, m, n);
	int sud = nrMaximCuPcUcEgaleSud(x, m, n);
	int est = nrMaximCuPcUcEgaleEst(x, m, n);
	int vest = nrMaximCuPcUcEgaleVest(x, m, n);
	if (nord > sud && nord > est && nord > vest) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i < j && i + j < n - 1) {
					cout << x[i][j] << " ";
				}
			}
		}
		cout << endl;
	}
	if (sud > nord && sud > est && sud > vest) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i > j && i + j > n - 1) {
					cout << x[i][j] << " ";
				}
			}
		}
		cout << endl;
	}
	if(est > nord && est > sud && est > vest) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i < j && i + j > n - 1) {
					cout << x[i][j] << " ";
				}
			}
		}
		cout << endl;
	}
	if (vest > nord && vest > sud && vest > est) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i > j && i + j < n - 1) {
					cout << x[i][j] << " ";
				}
			}
		}
	}
}
bool apartineVectorului(int v[], int dim, int n) {
	for (int i = 0; i < dim; i++) {
		if (n == v[i]) {
			return true;
		}
	}
	return false;
}
int nrCifreDiferite(int n) {
	int nr =0;
	int v[100], d = 0;
	while (n != 0) {
		int cifra = n % 10;
		if (apartineVectorului(v, d, cifra) == false) {
			v[d] = cifra;
			nr++;
			d++;
		}
		n = n / 10;
	}
	return nr;
}
int numarulCuCeleMaiMulteCifreDistincteDgSec(int x[100][100], int n, int m) {
	int max = -1;
	int nrMax = 0;
	for (int i = n - 1; i >= 0; i--) {
		int nrc = nrCifreDiferite(x[i][(n - 1) - i]);
		if (nrc > max) {
			max = nrc;
			nrMax = x[i][(n - 1) - i];
		}
		
	}
	return nrMax;
}
int cifraDeControl(int n) {
	int cc = 0;
	do {
		cc = 0;
		while (n != 0) {
			int cifra = n % 10;
			cc += cifra;
			n = n / 10;
		}
		n = cc;
	} while (cc > 9);
	return cc;
}
void afisareVector(int v[], int dim) {
	for (int i = 0; i < dim; i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}
void vectorDinElementeleCuCCPara(int x[100][100], int n, int m, int v[], int& dim) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j< m; j++) {
			if (cifraDeControl(x[i][j]) % 2 == 0) {
				v[dim] = x[i][j];
				dim++;
			}
		}
	}
}
int frecventaK(int n, int k) {
	int nr = 0;
	while (n != 0) {
		int cifra = n % 10;
		if (cifra == k) {
			nr++;
		}
		n = n / 10;
	}
	return nr;
}
int frecventaKInNord(int x[100][100], int m, int n,int k) {
	int nr = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i < j && i + j < n - 1) {
				nr += frecventaK(x[i][j],k);
			}
		}
	}
	return nr;
}
int frecventaKInSud(int x[100][100], int m, int n, int k) {
	int nr = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i > j && i + j > n - 1) {
				nr += frecventaK(x[i][j], k);
			}
		}
	}
	return nr;
}
int frecventaKInEst(int x[100][100], int n, int m, int k) {
	int nr = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i < j && i + j > n - 1) {
				nr += frecventaK(x[i][j], k);
			}
		}
	}
	return nr;
}
int frecventaKInVest(int x[100][100], int n, int m, int k) {
	int nr = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i > j && i + j < n - 1) {
				nr += frecventaK(x[i][j], k);
			}
		}
	}
	return nr;
}
int triunghiulIsoscelCuFrecventaSol16(int x[100][100], int n, int m, int k) {
	int nord = frecventaKInNord(x, m, n, k);
	int sud = frecventaKInSud(x, m, n, k);
	int est = frecventaKInEst(x, m, n, k);
	int vest = frecventaKInVest(x, m, n, k);
	if (nord >= sud && nord >= est && nord >= vest) {
		return 1;
	}
	if (sud >= nord && sud >= est && sud >= vest) {
		return 2;
	}
	if (est >= nord && est >= sud && est >= vest) {
		return 3;
	}
	if (vest >= nord && vest >= sud && vest >= est) {
		return 4;
	}
}
bool aEsteMultiplulLuiB(int a, int b) {
	if (a % b == 0) {
		return true;
	}
	else {
		return false;
	}
}
bool rezolvareSo17(int x[100][100], int n, int m) {
	int aff = false;
	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j >= 0; j--) {
			if (aEsteMultiplulLuiB(x[j][(n - 1) - j], x[i][i]) == true) {
				aff = true;
			}
			else {
				return false;
			}
		}
	}
	return aff;
}