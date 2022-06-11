#include "funzioni.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	alunno elenco[100];
	int n_alunni;
	float media;
	string chiave;
	int scelta;
	while (true)
	{ do{
		cout << "\nMenù di scelta funzione";
		cout << "\n1- Carica Dati degli alunni";
		cout << "\n2- Cerca alunno per nome, cognome o entrambi";
		cout << "\n3- Calcola Media della classe";
		cout << "\n4- Stampa Elenco alunni";
		cout << "\n5- Uscita dal programma";
		cout << "\nEffettua la tua scelta 1...5:";
		cin >> scelta;
		if ((scelta <1)||(scelta >5))
			cout << "Errore nella scelta ! ripeti"<< endl;
	}
	while ((scelta <1)||(scelta >5));
	switch (scelta)
	{
		case 1:{
		 CaricaTabella(elenco,n_alunni);
		break;}
		case 2:
			{
				cout << "\n Inserisci il nome  o il cognome di alunni da ricercare:";
				getchar();
				getline(cin,chiave);
				if (RicercaAlunno(elenco,chiave,n_alunni))
					cout << "\n Ricerca con esito positivo\n";
				else
					cout << "\n La ricerca non ha prodotto risultati\n";
			break;
			}
		case 3:
			{
				cout << "\n Media della classe:";
				media=MediaClasse(elenco,n_alunni);
				cout<< media;
				cout << endl;
				break;
			}
		case 4:
			{
				cout << "\n Stampa Elenco alunni con tutti i dati\n";
				Stampa(elenco,n_alunni);
				cout << endl;
				break;
			}
		case 5:
			{
				cout << "\n Arrivederci\n ";
				return 0;
			}
				
	}
}
	
}
