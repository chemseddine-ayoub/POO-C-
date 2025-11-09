#include <iostream>
using namespace std;

void remplir(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << endl <<  "entier " << i + 1 << ":";
        cin >> *(arr + i);
    }
}

void afficher(const int* arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }
}

int& trouverMax(int* arr, int n) {
    int max = 0;
    for (int i = 1; i < n; i++) {
        if (*(arr + i) > *(arr + max))
            max = i;
    }
    return *(arr + max);
}

void inverser(int* arr, int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = *(arr + i);
        *(arr + i) = *(arr + n - 1 - i);
        *(arr + n - 1 - i) = temp;
    }
}

int main() {
    int n;

    cout << "veuillez entrer la taille du tableau : ";
    cin >> n;

    int* arr = new int[n];

    cout << "veuillez entrer les elements du tableau : ";
    remplir(arr, n);

    cout << "les elements du tableau sont : " << endl;
    afficher(arr, n);
    cout << endl;

    cout << "le maximum du tableau est : " << trouverMax(arr, n) << endl;

    inverser(arr, n);

    cout << "le tableau inverse est : " << endl;

    afficher(arr, n);

}