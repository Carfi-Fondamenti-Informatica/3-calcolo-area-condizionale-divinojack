#include <iostream>
using namespace std;

int main() {
   float a=0, b=0, A=0;
    int opzione=0;
    cin >> a >> b>> opzione;
    switch (opzione) {
        case 0:
            cout << "A=" << (a*b)/2 << endl;
            break;
        case 1:
            cout << "A=" << (a*a) << endl;
            break;
        case 2:
            cout << "A=" << (a*b) << endl;
            break;
        default:
            cout<< "opzione non valida" << endl;
    }
   return 0;
}
