
#include <iostream>
#include "lib.h"

using namespace std;

int main() {
    int dim;
    float max=0;
    cin >> dim;
    float a[dim];

    for (int i=0;i<dim;i++){
        float valore=0;
        cin >> valore;
        a[i]=valore;
    }
    cout << maggiore (a,dim,max);
    return 0;
}
