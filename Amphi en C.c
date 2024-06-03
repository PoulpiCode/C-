#include <stdio.h>

int carre(int x)
{
    int resultat;
    resultat = x * x;
    return resultat;
}

void Afficher (float x)
{
    printf("%f\n", x);
}

double Produit (double x,double y )
{
    double resultat;
    resultat = x * y;
    return resultat;
}

int main()
 {
    int a = 2;
    double b = 10;
    double c = 12.5;

    int resultat = carre(a);
    Afficher((float)resultat);

    int resultat2 = Produit(b,c);
    Afficher((double)resultat2);



    
 }

 