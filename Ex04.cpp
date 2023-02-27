#include <iostream>
#include <iomanip>

using namespace std;

main()
{
    float vSP, vRJ, vMG, vES, vO, s;

    vSP = 67836.43;
    vRJ = 36678.66;
    vMG = 29229.88;
    vES = 27165.48;
    vO = 19849.53;

    s = vSP + vRJ + vMG + vES + vO;
    cout << fixed << setprecision(2);
    cout << "A percentual do estado de SP sobre o valor total da demanda foi de: " << (vSP/s)*100 << "%" << endl;
    cout << "A percentual do estado de RJ sobre o valor total da demanda foi de: " << (vRJ/s)*100 << "%" << endl;
    cout << "A percentual do estado de MG sobre o valor total da demanda foi de: " << (vMG/s)*100 << "%" << endl;
    cout << "A percentual do estado de ES sobre o valor total da demanda foi de: " << (vES/s)*100 << "%" << endl;
    cout << "A percentual de outros estados sobre o valor total da demanda foi de: " << (vO/s)*100 << "%" << endl;
}
