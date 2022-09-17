#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

void preenche (vector<int> v){
    for (int i=0 ; i < 100 ; i++)
       v.push_back(rand()%101);
}

void imprime  (vector<int> v){
    for (int i=0 ; i < 100 ; i++)
    	cout << " " << v[i] << " ";
}

int encontra_par (vector<int> v) {
	int par=0;
	for (int i=0 ; i < 100 ; i++) {
		if (v[i]%2 == 0)
			par = par+1;	
	}
	return par;	
}

int acima_70 (vector<int> v) {
	int n;
	for (int i=0 ; i < 100 ; i++) {
		if (v[i] > 70)
			n = n+1;	
	}
	return n;
}

int maior_numero (vector<int> v) {
	int n=0;
	for (int i=0 ; i < 100  ; i++) {
		if (v[i] > n)
			n = v[i];	
	}
	return n;
}

int main () {
	
	srand(time(NULL));
	vector<int> v;
	preenche (v);
	imprime (v);
	
	cout << "\n\nA quantidade de numeros pares e " << encontra_par (v);
	
	
	
	
	
	
}