

#include "lib.h"

float maggiore ( float a[], int dim, float max) {

    for(int i=0; i<dim;i++){
            if(i==0){
                max=a[i];

            } else if(i>0 and a[i]>max) {
                max=a[i];

            }

    }
    return max;
}



