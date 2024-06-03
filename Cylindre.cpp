
#include <iostream>

using namespace std;


void Permut(int* x,int* y)
{
    int temp = 0;
    temp = *x;
    *x = *y;
   *y = temp;
}

void affiche(int x,int y)
{
    cout << x << " " << y << endl;
}

int main()
{
    int a = 1;
    int b = 2;
    Permut(&a,&b);
    affiche(a,b);


}

