#include <iostream>
#include "funzioni.h"
using namespace std;
void CaricaTabella(alunno x[],int& d)
{
	int k=0;
	char risp='s';
	while (risp=='s')
	{
		getchar();
		cout << "\n Inserisci il nome:";
		getline(cin,x[k].nome);
		cout << "\n Inserisci il cognome:";
		getline(cin,x[k].cognome);
		cout << "\n Inserici l'età:";
		cin >> x[k].age;
		cout << "\n Inserisci la media dei voit:";
		cin >> x[k].media_voti;
		cout << "\n Inserisci la classe:";
		cin >> x[k].classe;
		cout << "\n Inserisci la sezione:";
		cin >> x[k].sezione;
		cout << "\n Vuoi inserire altri alunni s/n ?";
		cin >> risp;
		k++;
	}
	d=k;
}
bool RicercaAlunno(alunno x[], string chiave, int d)
{
	bool trovato=false;
	int k=0;
	while ((trovato==false)&&(k<d))
	{
		if ((chiave==x[k].nome) || (x[k].cognome==chiave))
			{
				trovato=true;
				cout << "\n Ho trovato un record a posizione:\t"<<k+1;
				cout <<"\n Dati studente:"<<endl;
				cout << "Cognome:"<<x[k].cognome;
				cout << "\nNome:"<< x[k].nome;
				cout << "\nEtà:"<< x[k].age;
				cout << "\nMedia Voti:"<< x[k].media_voti;
				cout << "\nClasse:"<< x[k].classe;
				cout << "\nSezione:"<< x[k].sezione;
			}
		k++;}
		return trovato;
}
float MediaClasse(alunno x[],int d)
{
	int k;
	float m=0;
	float s=0;
	for (k=0;k<d;k++)
		s=s+x[k].media_voti;
	m=s/d;
	return m;
}
void Stampa(alunno x[],int d)
{
	int k;
	cout << "\n Elenco degli alunni:\n";
	for (k=0;k<d;k++)
		{
		cout <<"\n Dati studente:"<<endl;
		cout << "Cognome:"<<x[k].cognome;
		cout << "\nNome:"<< x[k].nome;
		cout << "\nEtà:"<< x[k].age;
		cout << "\nMedia Voti:"<< x[k].media_voti;
		cout << "\nClasse:"<< x[k].classe;
		cout << "\nSezione:"<< x[k].sezione;
	}
}
