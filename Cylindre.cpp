#include <iostream>
#include <stdio.h>

using namespace std;

void Afficher(float x)
{
    cout << x << endl;
}

float Cylidrique (float a,float b)
{
    const float pi = 3.14;
    float Cylindre = pi*(a*a)*b;
    return Cylindre;

}

int main() 
{
    
 float rayon,hauteur;

 cout << "Rentrer la valeur du Rayon pour le cylindre : ";
 cin >> rayon;

 cout << "Rentrer la valeur de la hauteur pour le cylindre : ";
 cin >> hauteur;

 float Cylindre = Cylidrique(rayon,hauteur);
 cout <<"Le volume du Cylindre calculé en fonction est de : " << Cylindre << endl;

}

