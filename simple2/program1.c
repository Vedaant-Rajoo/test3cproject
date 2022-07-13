#include "program2.h"
#include "stdlib.h"

void baz(int *q,
        int *c, int len) {
            for(int i=0;i<len;i++) {
                q[i] += *c;
            }
        }
static int *g = 0;
int *a = 2;
int *b = 4;

void foo(int *p, int n){
    int m = 0;
    int sum = sumptr(*a,*b);
    g = sum;
    baz(p,&m,n);
   
}

void bar(int z){
    int *r = malloc(sizeof(int)*z);
            foo(r,z);
            baz(r,g,z);
            
}
    

