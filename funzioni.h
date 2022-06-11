#include <iostream>
#include <string>
using namespace std;
struct studente
{
	string nome;
	string cognome;
	int age;
	float media_voti;
	string classe;
	string sezione;
};
typedef struct studente alunno;
void CaricaTabella(alunno x[],int& d);
bool RicercaAlunno(alunno x[], string chiave, int d);
float MediaClasse(alunno x[],int d);
void Stampa(alunno x[],int d);


