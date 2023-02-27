#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

main()
{
    string p;

    cout << "Digite uma palavra: ";
    getline(cin, p);

    int j = p.size() - 1;
    char aux;

    for (int i = 0; i < p.size()/2; i++)
    {
        aux = p[i];
        p[i] = p[j];
        p[j] = aux;
        j--;
    }

    cout << "Palavra invertida: " << p;
}
