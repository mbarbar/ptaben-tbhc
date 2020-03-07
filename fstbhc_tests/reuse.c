//#include "tbhc_aliascheck.h"

// Simple direct reuse.

int main(int argc, char *argv[]) {
    int *i = malloc(4);
    float *f1 = (float *)i;
    *i = 5555;
    float *f2 = (float *)i;
    *f2 = 4444.4;
 //   TBHC_MAYALIAS(f1, f2);
}
