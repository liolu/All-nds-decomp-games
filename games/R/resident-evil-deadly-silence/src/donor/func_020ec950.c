/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* CriBitsRead from https://github.com/tylzars/bakubrawlers libs/cri/src/cri_ahx_bitrd.c (license: none), reused by
 * tools/donor_match.py */
typedef struct CriPair {
    void *p;
    int n;
} CriPair;
typedef struct CriVt {
    int pad[6];
    void (*get)(struct CriVObj *, int, int, CriPair *);
    void (*put)(struct CriVObj *, int, CriPair *);
    void (*commit)(struct CriVObj *, int, CriPair *);
    int (*size)(struct CriVObj *, int);
} CriVt;
typedef struct CriVObj {
    const CriVt *vt;
} CriVObj;
typedef struct CriBits {
    int used;
    CriVObj *src;
    int acc;
    int bits;
    int pos;
    int total;
    int chunk;
    unsigned char *base;
    int len;
    int avail;
    unsigned char *cur;
} CriBits;
extern const int data_021279b8[];
extern void func_020eca0c(CriBits *);
extern int func_020ec950(CriBits *, int);
void func_020eca0c(CriBits *r);
int func_020ec950(CriBits *r, int n) {
    int sh, v, a;
    if (r->bits < n) {
        func_020eca0c(r);
    }
    if (n > r->bits) {
        r->pos += r->bits;
        r->bits = 0;
        return 0;
    }
    a       = r->acc;
    sh      = r->bits - n;
    v       = data_021279b8[n];
    r->bits = sh;
    v &= a >> sh;
    r->pos += n;
    return v;
}
