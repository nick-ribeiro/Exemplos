#include <iostream>

using namespace std;

bool Fib(int n);

main()
{
    int n;

    cout << "Informe um numero inteiro positivo: ";
    cin >> n;

    if (Fib(n) == true)
        cout << "O numero (" << n << ") informado pertence a sequencia de Fibonacci";
    else {
        cout << "O numero (" << n << ") informado nao pertence a sequencia de Fibonacci";
    }
}

bool Fib(int n)
{
    int a, b, c;

    a = 0;
    b = 1;
    c = 0;

    do{
        c = a + b;
        a = b;
        b = c;
    }while(c < n);

    if (c == n)
        return true;
    else
        return false;
}
