/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* CriBitsRefill from https://github.com/tylzars/bakubrawlers libs/cri/src/cri_ahx_bitrd.c (license: none), reused by
 * tools/donor_match.py */
typedef struct CriPair {
    void *p;
    int n;
} CriPair;
struct CriVObj;
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
extern void *memset(void *, int, int);
extern const int data_0209e424[];
extern void func_020eca0c(CriBits *);
extern void func_020e43d8(CriPair *, int, CriPair *, CriPair *);
extern int CriBitsRead(CriBits *, int);
extern int CriBitsGetPos(CriBits *);
extern int CriBitsIsEmpty(CriBits *);
CriBits *CriBitsCreate(CriVObj *src, char *buf, int size);
void CriBitsClear(CriBits *r);
void CriBitsReset(CriBits *r, CriVObj *src);
void func_020eca0c(CriBits *r) {
    CriPair pa;
    CriPair pb;
    int n = (0x20 - r->bits) / 8;
    unsigned char *p;
    int a;
    if (r->avail < 4) {
        int len     = r->len;
        CriPair *pp = &pa;
        pa.p        = r->base;
        pa.n        = len;
        if (len != 0) {
            func_020e43d8(pp, len - r->avail, pp, &pb);
            r->src->vt->commit(r->src, 0, &pa);
            r->src->vt->put(r->src, 1, &pb);
        }
        r->src->vt->get(r->src, 1, r->chunk, (CriPair *) &r->base);
        r->cur   = r->base;
        r->avail = r->len;
    }
    if (n >= r->avail) {
        n = r->avail;
    }
    if (n == 3) {
        p      = r->cur;
        a      = r->acc;
        a      = (a << 8) | *p++;
        a      = (a << 8) | *p++;
        a      = (a << 8) | *p++;
        r->cur = p;
        r->acc = a;
        r->bits += 0x18;
        r->avail -= 3;
    } else if (n == 2) {
        p      = r->cur;
        a      = r->acc;
        a      = (a << 8) | *p++;
        a      = (a << 8) | *p++;
        r->cur = p;
        r->acc = a;
        r->bits += 0x10;
        r->avail -= 2;
    } else if (n == 1) {
        p      = r->cur;
        a      = r->acc;
        a      = (a << 8) | *p++;
        r->cur = p;
        r->acc = a;
        r->bits += 8;
        r->avail -= 1;
    } else if (n == 4) {
        p      = r->cur;
        a      = r->acc;
        a      = (a << 8) | *p++;
        a      = (a << 8) | *p++;
        a      = (a << 8) | *p++;
        a      = (a << 8) | *p++;
        r->cur = p;
        r->acc = a;
        r->bits += 0x20;
        r->avail -= 4;
    }
}
void func_020e43d8(CriPair *src, int limit, CriPair *a, CriPair *b);
int CriBitsCanRead(CriBits *r, int n);
int CriBitsRead(CriBits *r, int n);
int CriBitsGetPos(CriBits *r);
int CriBitsIsEmpty(CriBits *r);
int func_0204e7a0(CriBits *r);
