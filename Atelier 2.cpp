#include <iostream>
using namespace std;

//EXERCICE 1

int compteur = 0;

void nbr_appel() {
    compteur++;
    cout << "appel numero : " << compteur << endl;
}

int main() {
	nbr_appel();
	nbr_appel();
	nbr_appel();
}

//EXERCICE 2

int multiple_2(int x) {
    if (x % 2 == 0)
        return 1;
    else
        return 0;
}

int multiple_3(int x) {
    if (x % 3 == 0)
        return 1;
    else
        return 0;
}

int main() {
    int n;

    cout << "donner un entier : ";
    cin >> n;

    if (multiple_2(n) == 1)
        cout << "il est pair" << endl;

    if (multiple_3(n) == 1)
        cout << "il est multiple de 3" << endl;

    if (multiple_2(n) == 1 && multiple_3(n) == 1)
        cout << "il est multiple de 6" << endl;
}

//EXERCICE 3

//Partie a :

int main() {

    int T[10];

    for (int i = 0; i < 10; i++) {
        cout << "Entrer l'element " << i + 1 << " : ";
        cin >> T[i];
    }

    int max = T[0];
    int min = T[0];

    for (int i = 1; i < 10; i++) {
        if (T[i] > max)
            max = T[i];
        else if (T[i] < min)
            min = T[i];
    }
        cout << "Le maximum est: " << max << endl;
        cout << "Le minimum est: " << min << endl;
}

//Partie b :

int main() {

    int* P = new int[10]; 

    for (int* Ptr = P; Ptr < P + 10; Ptr++) {
        cout << "Entrer l'element: ";
        cin >> *Ptr; 
    } 
    int* PtrMax = P;
    int* PtrMin = P;

    for (int* Ptr = P; Ptr < P + 10; Ptr++) {
        if (*Ptr > *PtrMax)
            PtrMax = Ptr;

        else if (*Ptr < *PtrMin)
        PtrMin = Ptr; 
    }

    cout << "Le maximum est: " << *PtrMax << endl;
    cout << "Le minimum est: " << *PtrMin << endl;

delete[] P;
return 0;
}

//EXERCICE 4 



//EXERCICE 5

int main() {
	int a = 58;
	int& ref_a = a; 
	int* p_a = &a; 

	cout << "Valeur de a: " << a << endl;
	cout << "Vaeur par reference: " << ref_a << endl;
	cout << "Valeur par pointeur: " << *p_a << endl;

	cout << "Address de a: " << &a << endl;
	cout << "Address par reference: " << &ref_a << endl;
	cout << "Address par pointeur: " << p_a << endl;
	return 0;
}

//EXERCICE 6

//Partie a :

void incrementerC(int* a) {
	(*a)++;
}

void permuterC(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int a, b;

int main() {
		cout << "entrer entier a : " ;
		cin >> a;
		cout << "entrer entier b : " ;
		cin >> b;

		cout << "avant incrementer a : " << a << endl;
		incrementerC(&a);
		cout << "apres incrementer a : " << a << endl;

		cout << "avant permuter a et b : a = " << a << ", b = " << b << endl;
		permuterC(&a, &b);
		cout << "apres permuter a et b : a = " << a << ", b = " << b << endl;

		return 0;
}

//Partie b :

void incrementerCpp(int& a) {
	a++;
}

void permuterCpp(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {

	cout << "entrer entier a : ";
	cin >> a;
	cout << "entrer entier b : ";
	cin >> b;

	cout << "Avant increment a : " << a << endl;
	incrementerCpp(a);
	cout << "Après increment a : " << a << endl;

	cout << "Avant permutation a et b: a = " << a << ", b = " << b << endl;
	permuterCpp(a, b);
	cout << "Après permutationa et b : a = " << a << ", b = " << b << endl;
	return 0;
}

//EXERCICE 7

void permuter(char* s, int i) {

	if (s[i] == '\0') {
		printf("%s\n", s);
		return;
	}

	for (int j = i; s[j] != '\0'; j++) {

		char temp = s[i];
		s[i] = s[j];
		s[j] = temp;

		permuter(s, i + 1);

		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
int main() {
	char s[] = "FST";
	permuter(s, 0);
	return 0;
}

//EXERCICE 8

class Voiture {
private:

	string marque, modele;
	int annee;
	float kilometrage, vitesse;

public:

	Voiture() {
		marque = "Inconnue";
		modele = "Inconnue";
		annee = 0;
		kilometrage = 0;
		vitesse = 0;
	}

	Voiture(string mrq, string mdl, int an, float km, float vts)
		: marque(mrq), modele(mdl), annee(an), kilometrage(km), vitesse(vts) {
	}

	void accelerer(float valeur) {
		vitesse += valeur;
	}

	void freiner(float valeur) {
		vitesse -= valeur;
		if (vitesse < 0)
			vitesse = 0;

	}

	void afficherInfo() {
		cout << "Les informations de la voiture sont : " << endl;
		cout << "Marque : " << marque << endl;
		cout << "Modele : " << modele << endl;
		cout << "Annee : " << annee << endl;
		cout << "Kilometrage : " << kilometrage << endl;
		cout << "Vitesse : " << vitesse << endl;
	}

	void avancer(float distance) {
		kilometrage += distance; 
	}

	~Voiture() {
		cout << "La voiture est detruite" << endl;
	}
};

int main() {

	Voiture V1;
	V1.afficherInfo();
	cout << "------------------------" << endl;

	Voiture V2("Dacia", "Logan", 2022, 122, 130);
	V2.afficherInfo();

	return 0;
}

//EXERCICE 9

class Vecteur3d {
private:
	float x, y, z;

public:

	Vecteur3d(float x = 0, float y = 0, float z = 0) {
		this->x = x;
		this->y = y;
		this->z = z;
	}

	Vecteur3d somme(Vecteur3d Vect) {
		float nx = x + Vect.x;
		float ny = y + Vect.y;
		float nz = z + Vect.z;
		return Vecteur3d(nx, ny, nz);
	}

	void afficher() {
		cout << "Vecteur : (" << x << ", " << y << ", " << z << ")" << endl;
	}

	Vecteur3d sommeRef(const Vecteur3d& Vect) {
		return Vecteur3d(x + Vect.x, y + Vect.y, z + Vect.z);
	}

	float produitScalaire(Vecteur3d Vect) {
		float resultat = x * Vect.x + y * Vect.y + z * Vect.z;
		return resultat;
	}

	int coincide(Vecteur3d Vect) {
		if (x == Vect.x && y == Vect.y && z == Vect.z) {
			return 1;
		}
		return 0; 
	}

	float norme() {
		return sqrt(x * x + y * y + z * z);
	}

	void plusGrand(Vecteur3d Vect) {
		if (norme() > Vect.norme()) { cout << "Le vecteur V1 est plus grand" << endl; }
		else if (norme() < Vect.norme()) { cout << "Le vecteur V2 est plus grand" << endl; }
		else { cout << "Les deux vecteurs sont identiques" << endl; }
	}
};
int main() {

	Vecteur3d V1(1, 2, 3);
	Vecteur3d V2(4, 5, 6);

	Vecteur3d V3 = V1.somme(V2);

	cout << "V1.V2 = " << V1.produitScalaire(V2) << endl;

	if (V1.coincide(V2) == 1) { cout << "V1 et V2 sont identiques" << endl; }
	else { cout << "V1 et V2 sont differents" << endl; }

	cout << "La norme de V1 est : " << V1.norme() << endl;
	cout << "La norme de V2 est : " << V2.norme() << endl;

	V1.plusGrand(V2);
	return 0;
}

//EXERCICE 10

class complexes {
private:
    float reelle;
    float imaginaire;
public:
    complexes(float r = 0, float i = 0) {
        reelle = r;
        imaginaire = i;
    }
    static bool egalite(const complexes& ob1, const complexes& ob2) {
        return (ob1.reelle == ob2.reelle && ob1.imaginaire == ob2.imaginaire);
    }
    static complexes somme(const complexes& ob1, const complexes& ob2) {
        complexes s(0.0, 0.0);
        s.reelle = ob1.reelle + ob2.reelle;
        s.imaginaire = ob1.imaginaire + ob2.imaginaire;
        return s;
    }
    static complexes produit(const complexes& ob1, const complexes& ob2) {
        return complexes(
            ob1.reelle * ob2.reelle - ob1.imaginaire * ob2.imaginaire,
            ob1.reelle * ob2.imaginaire + ob1.imaginaire * ob2.reelle
        );
    }
    static complexes soustraction(const complexes& ob1, const complexes& ob2) {
        complexes s(0.0, 0.0);
        s.reelle = ob1.reelle - ob2.reelle;
        s.imaginaire = ob1.imaginaire - ob2.imaginaire;
        return s;
    }
    static complexes division(const complexes& ob1, const complexes& ob2) {
        float denom = ob2.reelle * ob2.reelle + ob2.imaginaire * ob2.imaginaire;
        return complexes(
            (ob1.reelle * ob2.reelle + ob1.imaginaire * ob2.imaginaire) / denom,
            (ob1.imaginaire * ob2.reelle - ob1.reelle * ob2.imaginaire) / denom);
    }
    void affichage() const {
        cout << "(" << reelle << ", " << imaginaire << "i)" << endl;
    }
};

int main() {
    complexes c1, c2, res;
    float r1, i1, r2, i2;
    int choix;

    cout << "Entrez la partie reelle du premier nombre : ";
    cin >> r1;
    cout << "Entrez la partie imaginaire du premier nombre : ";
    cin >> i1;

    cout << "Entrez la partie reelle du deuxieme nombre : ";
    cin >> r2;
    cout << "Entrez la partie imaginaire du deuxieme nombre : ";
    cin >> i2;

    c1 = complexes(r1, i1);
    c2 = complexes(r2, i2);

    cout << "\n=== MENU ===" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Soustraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Egalite" << endl;
    cout << "Votre choix : ";
    cin >> choix;

    switch (choix) {
    case 1:
        res = complexes::somme(c1, c2);
        cout << "Resultat : "; res.affichage();
        break;
    case 2:
        res = complexes::soustraction(c1, c2);
        cout << "Resultat : "; res.affichage();
        break;
    case 3:
        res = complexes::produit(c1, c2);
        cout << "Resultat : "; res.affichage();
        break;
    case 4:
        res = complexes::division(c1, c2);
        cout << "Resultat : "; res.affichage();
        break;
    case 5:
        if (complexes::egalite(c1, c2))
            cout << "Les deux nombres complexes sont egaux." << endl;
        else
            cout << "Les deux nombres complexes sont differents." << endl;
        break;
    default:
        cout << "Choix invalide !" << endl;
    }

    return 0;
}