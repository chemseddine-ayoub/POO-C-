#include <iostream>
using namespace std;

int main()
{
    Exercice I :

Soient les déclarations :

char c = '\x01';
short int p = 10;

Quels sont le type et la valeur de chacune des expressions suivantes :

p + 3 : type : int , valeur : 13;
c + 1 : type : int , valeur : 2;
p + c : type : int , valeur : 11;
3 * p + 5 * c : type : int , valeur : 35;
	
    Exercice II :

Soient les déclarations :

char c = '\x05' ;
int n = 5 ;
long p = 1000 ;
float x = 1.25 ;
double z = 5.5 ;

Quels sont le type et la valeur de chacune des expressions suivantes :

n + c + p : type : long , valeur : 1010;
2 * x + c : type : float , valeur : 7.5;
(char) n + c : type : int , valeur : 10;
(float) z + n / 2 : type : float , valeur : 7.5;

    Exercice III:

Soient les déclarations suivantes :

int n = 5, p = 9 ;
int q ;
float x ;

Quelle est la valeur affectée aux différentes variables concernées par chacune des instructions suivantes ?

q = n < p : valeur : 1 ; 
q = n == p : valeur : 0 ; 
q = p % n + p > n : valeur : 5 ; 
x = p / n : valeur : 1 ; 
x = (float) p / n : valeur : 1.8 ;             
x = (p + 0.5) / n : valeur : 1.9 ; 
x = (int) (p + 0.5) / n : valeur : 1 ; 
q = n * (p > n ? n : p) : valeur : 25 ; 
q = n * (p < n ? n : p) : valeur : 45 ; 

    Exercixe IV:

Quels résultats fournit le programme suivant :

#include <iostream>
using namespace std ;
main () {
int i, j, n ;
i = 0 ;
n = i++ ;
cout << "A : i = " << i << " n = " << n << "\n" ;
i = 10 ;
n = ++ i ;
cout << "B : i = " << i << " n = " << n << "\n" ;
i = 20 ;
j = 5 ;
n = i++ * ++ j ;
cout << "C : i = " << i << " j = " << j << " n = " << n << "\n" ;
i = 15 ;
n = i += 3 ;
cout << "D : i = " << i << " n = " << n << "\n" ; 
i = 3 ;
j = 5 ;
n = i *= --j ;
cout << "E : i = " << i << " j = " << j << " n = " << n << "\n" ;
  
  reponse :

   A : i = 1 n = 0
   B : i = 11 n = 11
   C : i = 21 j = 6 n = 120
   D : i = 18 n = 18
   E : i = 12 j = 4 n = 12

}