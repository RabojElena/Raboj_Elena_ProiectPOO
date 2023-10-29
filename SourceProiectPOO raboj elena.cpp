#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<cstring>

using namespace std;
 // domeniu ales este editura

class Angajat {
public: char* nume;
	  const int id;
	  int varsta;
	  static int nrTotalAng;
	  float* vechime;


	  // constructor fara parametri
	  Angajat() :id(nrTotalAng++) {
		  this->nume = NULL;
		  this->vechime = 0;
		  this->varsta = 0;
		  cout << "s a apelat constructorul fara parametrii Angajat" << endl;
	  }

	  // constructor cu 1 parametru

	  Angajat(int varsta) : id(nrTotalAng++) {
		  this->varsta = varsta;
		  this->nume = NULL;
		  this->vechime = 0;
		  cout << "s a apelat constructorul cu un parametru  Angajat " << endl;
	  }

	  // constructor cu toti parametrii
	  Angajat(char* nume, float* vechime, int varsta) : id(nrTotalAng++) {
		  this->nume = new char[strlen(nume) + 1];
		  strcpy_s(nume, strlen("nume") + 1, "nume");
		  this->vechime = new float[nrTotalAng];
		  for (int i = 0;i < nrTotalAng;i++)
			  this->vechime[i] = vechime[i];
		  this->varsta = varsta;
		  cout << "S a apelat constructorul cu toti parametri Angajat" << endl;
	  }

	  // functia de afisare
	  void afisare() {
		  printf("Nume: %s\n", this->nume);
		  for (int i = 0; i < nrTotalAng; i++)
			  cout << " vechimea angajat" << i + 1 << ":" << this->vechime << endl;
		  cout << "varsta:" << this->varsta << endl;
		  cout << "numarul total de obiecte create este:" << this->nrTotalAng << endl;
	  }
	  static void setnrTotalAng(int nrTotalAngnou) {
		  nrTotalAng = nrTotalAngnou;
	  }
};
int Angajat::nrTotalAng = 3;
  void  main ()
  {
	//apelare constructor fara parametrii+ afisare
	Angajat ang1;
	ang1.afisare();

	//apelare constructor cu 1 parametru
	Angajat ang2(28);
	ang2.afisare();

	// apelare constructor cu toti parametrii
	float* vechime = new float[2];
	for (int i = 0;i < 2;i++)
		vechime[i] = (i * 2) + 1;
	Angajat ang3;
	ang3.afisare();

}


// obiectul ales este tura

class Tura {
public:
	const int program;
	static int nrOre; // tura este de 8 ore
	char* numeTura;
	float* salariuObtinut;
	int i;

	// constructor fara parametri

	Tura() : program(nrOre++) {
		this->numeTura = NULL;
		this->salariuObtinut = NULL;
		cout << "s a apelat constructorul fara parametrii Tura" << endl;
	}

	// constructor cu 1 parametru
	Tura(char* numeTura) : program(nrOre++) {
		this->numeTura = new char[strlen(numeTura) + 1];
		strcpy(this->numeTura, numeTura);
		this->salariuObtinut = NULL;
		cout << "s a apelat constructorul cu 1 parametru Tura" << endl;
	}
	// constructor cu toti parametrii
	Tura(char* numeTura, float* salariuObtinut) : program(nrOre++) {
		this->numeTura = new char[strlen(numeTura) + 1];
		strcpy(this->numeTura, numeTura);
		this->salariuObtinut = new float[nrOre];
		for (int i = 0;i < nrOre;i++); {
			this->salariuObtinut[i] = salariuObtinut[i];
		}
		cout << "s a apelat constructorul cu toti parametrii Tura" << endl;
	}
	void afisareDetalii() {
		cout << " pentru tura" << this->numeTura << "salariul obtinut este de" << this->salariuObtinut << "pentru un numar de ore lucrate" << this->nrOre << "in timpul programului de" << this->program << endl;
		cout << " tura" << this->numeTura << "obtine un salariu de" << this->salariuObtinut << endl;
		
	}

};
int Tura::nrOre = 8;

void main() {

	// apelare constructor fara parametrii
	Tura tura1;
	tura1.afisareDetalii();
	
	// apelare constructor cu un parametru
	char numeTura[] = { "numele turei este:Tura A" };
	float salariuObtinut[] = { 3000 };
	Tura tura2(numeTura);
	tura2.afisareDetalii();

	// apelare constructor cu toti parametrii

	Tura tura3(numeTura, salariuObtinut);
	tura3.afisareDetalii();
	
}

// obiectul carte

class Carte {
public:
	string titlu;
	float pretCarte;
	const int anPublicare;
	static float TVA;
	char* numeAutor;
	int* existenta; // de cat timp a fost tiparita

	// constructor cu un parametru
	Carte(string titlu, float pretCarte, char* numeAutor) :anPublicare(0) {
		this->titlu = titlu;
		this->numeAutor = new char[strlen(numeAutor) + 1];
		strcpy(this->numeAutor, numeAutor);
		this->pretCarte = 0;

		cout << "s a afisat constructorul cu un parametru" << endl;
	}
	// constructor fara parametrii
	Carte() :anPublicare(0) {
		this->titlu = "necunoscut";
		this->pretCarte = 0;
		this->existenta = 0;
		cout << "s a afisat constructorul fara parametrii" << endl;
	}

	// constructor cu toti parametrii

	Carte(string titlu, float pretCarte, const int anPublicare, int* existenta) : anPublicare(0) {
		this->titlu = titlu;
		this->pretCarte = pretCarte;
		this->numeAutor = new char[strlen(numeAutor) + 1];
		strcpy(this->numeAutor, numeAutor);
		this->existenta = new int[this->anPublicare];
		for (int j = 0;j < this->anPublicare;j++)
		{
			this->existenta[j] = existenta[j];
		}
		cout << "s a afisat constructorul cu toti parametrii" << endl;
	}

	void afisare() {
		
		cout << "titlu" << this->titlu << endl;
		cout << "titlu" << this->titlu << "a fost publicata in anul" << this->anPublicare << "si are o vechime de" << this->existenta << endl;
	}
};

float Carte::TVA = 0.19;

void  main() {

	// constructor fara parametrii
	Carte carte1;
	carte1.afisare();
	// constructor cu un parametru
	Carte carte2;
	string titlu = { "ion" };
	carte2.afisare();

	// constructor cu toti parametrii
	Carte carte3;
	int anPublicare = { 1990 };
	int existenta = { 33 };
	carte3.afisare();
}













