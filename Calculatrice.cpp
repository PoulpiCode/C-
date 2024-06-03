
#include <iostream>

using namespace std;


void affiche(int x)
{
 cout << x << endl;
}

int main()
{
    char ope;
    int a, b;
    int resultat;

    cout << "Saisir le calcul a effectué : " << endl;
    cin >> a >> ope >> b;
    if(ope == '+')
    {
        resultat = a+b;
    }
    else if(ope == '-')
    {
        resultat = a-b;
    }
    else if(ope == '*')
    {
        resultat = a*b;
    }
    else if(ope == '/')
    {
        resultat = a/b;
    }
    affiche(resultat);
}