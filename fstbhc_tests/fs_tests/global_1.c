/*
 * Global pointer in flow-sensitive analysis.
 * Author: Sen Ye
 * Date: 08/11/2013
 */

#include "tbhc_aliascheck.h"

int x, y; int *p = &x; int *q = &y;
int **pp = &p; int**qq = &q;

void foo() {
     TBHC_NOALIAS(*pp, *qq);
}
void bar() {
     qq = &q;
     q = &x;
}
int main() {
    foo();
    bar();
    TBHC_MUSTALIAS(*pp, *qq);
}

