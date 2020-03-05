#include "tbhc_aliascheck.h"

// Same object, different field.
// (fspta passes too.)

struct S {
    int f1;
    int f2;
};

int main(int argc, char *argv[]) {
    struct S *s = malloc(sizeof(struct S));
    TBHC_NOALIAS(&s->f1, &s->f2);
}
