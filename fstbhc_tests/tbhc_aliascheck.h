#include "aliascheck.h"

// The code produced by these macros looks like:
//   call XALIAS(...)
//   %1 = load ...
//   ...
//   %n = load %n-1 !ctir
//   call deref()
//   %n+1 = load ...
//   ...
//   %n+n = load %n+n-1 !ctir
//   call deref()
// We then use the two values before the deref calls to
// test the XALIAS.

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

