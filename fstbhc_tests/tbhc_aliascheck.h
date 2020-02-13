#include "aliascheck.h"

void deref(void) { }

#define TBHC_MUSTALIAS(p, q) {\
    MUSTALIAS(p, q);\
    *p;\
    deref();\
    *q;\
    deref();\
}

#define TBHC_PARTIALALIAS(p, q) {\
    PARTIALALIAS(p, q);\
    *p;\
    deref();\
    *q;\
    deref();\
}

#define TBHC_MAYALIAS(p, q) {\
    MAYALIAS(p, q);\
    *p;\
    deref();\
    *q;\
    deref();\
}

#define TBHC_NOALIAS(p, q) {\
    NOALIAS(p, q);\
    *p;\
    deref();\
    *q;\
    deref();\
}

#define TBHC_EXPECTEDFAIL_MAYALIAS(p, q) {\
    EXPECTEDFAIL_MAYALIAS(p, q);\
    *p;\
    deref();\
    *q;\
    deref();\
}

#define TBHC_EXPECTEDFAIL_NOALIAS(p, q) {\
    EXPECTEDFAIL_NOALIAS(p, q);\
    *p;\
    deref();\
    *q;\
    deref();\
}

