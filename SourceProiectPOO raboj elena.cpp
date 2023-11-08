#define _CRT_SECURE_NO_WARNINGS

#include<iostream>


using namespace std;
// domeniu ales este editura

class Angajat {
private: char* nume;
	   const int id_angajat;
	   int varsta;
	   static string denumireTura;
	   char* departament;

public:

	// constructor cu un parametru
	Angajat(const char* nume) :id_angajat(31)
	{
		this->varsta = 0;
		this->nume = new char[strlen(nume) + 1];
		strcpy(this->nume, nume);
		cout << "s a apelat constructorul cu un parametru" << endl;

	}

	// constructor fara parametrii
	Angajat() : id_angajat(21) {
		nume = new char[strlen("necunoscut") + 1];
		strcpy(nume, "necunoscut");
		departament = new char[strlen("anonim") + 1];
		strcpy(departament, "anonim");
		varsta = 0;
		cout << "s a apelat constructorul fara parametrii" << endl;
	}

	// constructor cu toti parametrii
	Angajat(const char* nume, const char* departament, int varsta) : id_angajat(21) {
		this->nume = new char[strlen(nume) + 1];
		strcpy(this->nume, nume);
		this->departament = new char[strlen(departament) + 1];
		strcpy(this->departament, departament);
		this->varsta = varsta;

		cout << "S a apelat constructorul cu toti parametri Angajat" << endl;
	}

	// destructor
	~Angajat() {
		if (this->nume != NULL) {
			delete[]this->nume;
		}
		if (this->departament != NULL) {
			delete[]this->departament;
		}
		cout << " s a apelat destructorul Angajat" << endl;
	}

	// constructor de copiere

	Angajat(const Angajat& Ang) : id_angajat(Ang.id_angajat) {
		this->nume = new char[strlen(Ang.nume) + 1];
		strcpy(this->nume, Ang.nume);
		this->departament = new char[strlen(Ang.departament) + 1];
		strcpy(this->departament, Ang.departament);
		this->varsta = Ang.varsta;

		cout << " s a apelat constructorul de copiere" << endl;
	}
	static void schimbadenumireTura(string  denumire) {
		Angajat::denumireTura = denumire;

	}

	void afisare() {

		cout << "angajatul:" << nume << endl << "cu varsta de:" << varsta << endl << "lucreaza in departamentul:" << departament << endl << "pe tura :" << denumireTura << endl;

	}
	// get eri si set eri

	int getvarsta() {
		return this->varsta;
	}
	char* getnume() {
		return this->nume;
	}
	char* getdepartament() {
		return this->departament;
	}
	int getid_angajat() {
		return this->id_angajat;
	}

	// set
	void setnume(char* n) {
		if (nume != NULL)
		{
			delete[]nume;
		}this->nume = new  char[strlen(n) + 1];
		strcpy(nume, n);
	}
	void setvarsta(int var) {
		varsta = var;
	}
	void setdepartament(char* dep) {
		if (departament != NULL); {
			delete[]departament;}
		this->departament = new char[strlen(dep) + 1];
		strcpy(departament, dep);


	}

};
// functia de schimbareNouaTura
void NouaTuraAngajat(const Angajat& angajat) {
	
	cout << "aceasta este tura" << angajat.schimbadenumireTura << "!" << endl;
	 }


string  Angajat::denumireTura = "turaA";







// obiectul ales este laptop

class Laptop {
public:

	char* producator;
	const int cod_laptop;
	float greutate;
	char* model;
	static int TVA;
	int display;

	// constructor cu un parametru
	Laptop(float greutate) :cod_laptop(31) {
		this->greutate = 10;
		this->model = new char[strlen("nemaiauzit") + 1];
		strcpy(this->model, "nemaiauzit");
		this->display = 0;
		cout << "s a apelat constructorul cu un parametru" << endl;
	}


	// constructor fara parametrii

	Laptop() :cod_laptop(31) {
		greutate = 0;
		producator = new char[strlen("nemaiauzit") + 1];
		strcpy(producator, "nemaiauzit");
		model = new char[strlen("nevalid") + 1];
		strcpy(model, "nevalid");
		display = 0;

		cout << "s a apelat constructorul fara parametrii" << endl;
	}


	// constructor cu toti parametrii
	Laptop(const char* producator, const char* model, float greutate, int display) :cod_laptop(31) {
		this->producator = new char[strlen(producator) + 1];
		strcpy(this->producator, producator);
		this->model = new char[strlen(model) + 1];
		strcpy(this->model, model);
		greutate = greutate;
		display = display;

		cout << "s a apelat constructorul cu toti parametrii" << endl;
	}

	// destructor
	~Laptop() {
		if (this->producator != NULL) {
			delete[]this->producator;
		}
		if (this->model != NULL) {
			delete[]this->model;
		}
		cout << " s a afisat destructorul Laptop " << endl;
	}


	// constructor de copiere

	Laptop(const Laptop& l) : cod_laptop(l.cod_laptop) {
		this->producator = new char[strlen(l.producator) + 1];
		strcpy(this->producator, l.producator);
		this->model = new char[strlen(l.model) + 1];
		strcpy(this->model, l.model);
		this->greutate = l.greutate;
		this->display = l.display;

		cout << " s a afisat constructorul de copiere" << endl;
	}
	static void schimbaTVA(int tva) {
		Laptop::TVA = tva;
	}
	void afisare() {
		cout << "laptop ul" << producator << endl << "modelul:" << model << endl << "are o greutate de:" << greutate << endl << "cu un display de " << display << endl << "si codul:" << cod_laptop << endl;
	}
	// get si set

	// get
	char* getproducator() {
		return this->producator;
	}

	char* getmodel() {
		return this->model;
	}
	float getgreutate() {
		return this->greutate;
	}
	int getdisplay() {
		return this->display;
	}
	int getcod_laptop() {
		return this->cod_laptop;
	}

	// set
	void setproducator(char* prod) {
		if (producator != NULL) {
			delete[]producator;
		}
		this->producator = new char[strlen(prod) + 1];
		strcpy(producator, prod);
	}
	void setmodel(char* mod) {
		if (model != NULL) {
			delete[]model;
		} this->model = new char[strlen(mod) + 1];
		strcpy(model, mod);
	}
	void setgreutate(int greu) {
		greutate = greu;
	}
	void setdisplay(float dis) {
		display = dis;
	}
	
};
int Laptop::TVA = 0.19;



// obiectul carte

class Carte {
public:
	string titlu;
	float pretCarte;
	const int anPublicare;
	static float TVA;
	char* numeAutor;


	// constructor cu un parametru
	Carte(const char* numeAutor) : anPublicare(1887) {
		this->numeAutor = new char[strlen(numeAutor) + 1];
		strcpy(this->numeAutor, numeAutor);
		this->titlu = "necunoscut";
		this->pretCarte = 0;
		cout << " s a afisat constructorul cu un parametru" << endl;
	}



	// constructor fara parametrii
	Carte() :anPublicare(1887) {
		titlu = "necunoscut";
		pretCarte = 0;
		numeAutor = new char[strlen("anonim") + 1];
		strcpy(numeAutor, "anonim");

		cout << "s a afisat constructorul fara parametrii" << endl;
	}

	// constructor cu toti parametrii

	Carte(string titlu, float pretCarte, const char* numeAutor) : anPublicare(1887) {
		this->titlu = titlu;
		this->pretCarte = pretCarte;
		this->numeAutor = new char[strlen(numeAutor) + 1];
		strcpy(this->numeAutor, numeAutor);

		cout << "s a afisat constructorul cu toti parametrii" << endl;
	}

	// destructor
	~Carte() {
		if (this->numeAutor != NULL) {
			delete[]this->numeAutor;
		}

		cout << " s a afisat destructorul Carte " << endl;
	}

	// constructor de copiere
	Carte(const Carte& C) : anPublicare(C.anPublicare) {
		this->numeAutor = new char[strlen(C.numeAutor) + 1];
		strcpy(this->numeAutor, C.numeAutor);
		this->titlu = C.titlu;
		this->pretCarte = C.pretCarte;

		cout << " s a afisat constructorul de copiere" << endl;
	}
	static void schimbaTVA(float tva) {
		Carte::TVA = tva;
	}
	void afisare() {

		cout << "Cartea:" << titlu << endl << "are un pret: " << pretCarte << endl << "a fost scrisa de: " << numeAutor << endl << "si a fost publicata in :" << anPublicare << endl;
	}

	// get si set
	string gettitlu() {
		return this->titlu;
	}
	float getpretCarte() {
		return this->pretCarte;
	}
	char* getnumeAutor() {
		return this->numeAutor;
	}
	int getanPublicare() {
		return this->anPublicare;
	}

	void settitlu(string tit) {
		titlu = tit;
	}
	void setpretCarte(int pr) {
		pretCarte = pr;
	}
	void setnumeAutor(char* num) {
		if (numeAutor != NULL) {
			delete[]numeAutor;
		} this->numeAutor = new char[strlen(num) + 1];
		strcpy(numeAutor, num);
	}

};
    

float Carte::TVA = 0.19;

void  main() {

	// constructor fara parametrii
	Carte carte1;
	carte1.afisare();

	// constructor cu toti parametrii
	Carte carte3("dracula", 50, "bram stoker");
	carte3.afisare();
	cout << carte3.getpretCarte() << endl;



	//constructor cu un parametru
	Carte carte2("ion creanga");
	carte2.afisare();
	cout << carte2.getnumeAutor() << endl;
	carte2.settitlu("povestea lui harap alb");


	// constructor de copiere
	Carte carte4 = carte3;
	carte4.afisare();

	//apelare constructor fara parametrii+ afisare
	Angajat ang1;
	ang1.afisare();

	//apelare constructor cu toti parametrii
	Angajat ang2("popescu", "marketing", 29);
	ang2.afisare();
	ang2.setvarsta(34);
	NouaTuraAngajat(ang2);
	// apelare constructor cu un parametru
	Angajat ang3("ionescu");
	ang3.afisare();
	cout << ang3.getvarsta() << endl;
	// constructor de copiere
	Angajat ang4 = ang3;
	ang4.afisare();

	//constructor fara parametrii
	Laptop l1;
	l1.afisare();

	//constructor cu toti parametrii
	Laptop l2("Lenovo", "T456", 2, 14);
	l2.afisare();
	cout << l2.getgreutate() << endl;
	//constructor cu un singur parametru
	Laptop l3(15);
	l3.afisare();
	l3.setgreutate(12);
	Laptop l4 = l2;
	l4.afisare();
}














