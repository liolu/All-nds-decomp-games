/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* CriBitsReset from https://github.com/tylzars/bakubrawlers libs/cri/src/cri_ahx_bitrd.c (license: none), reused by
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
extern void *func_0211035c(void *, int, int);
extern const int data_0209e424[];
extern void CriBitsRefill(CriBits *);
extern void func_0204e67c(CriPair *, int, CriPair *, CriPair *);
extern int CriBitsRead(CriBits *, int);
extern int CriBitsGetPos(CriBits *);
extern int CriBitsIsEmpty(CriBits *);
CriBits *CriBitsCreate(CriVObj *src, char *buf, int size);
void CriBitsClear(CriBits *r);
void func_020ecc24(CriBits *r, CriVObj *src) {
    int a, b;
    if (r == 0) {
        return;
    }
    func_0211035c(r, 0, 0x2c);
    r->src   = src;
    r->pos   = 0;
    a        = src->vt->size(src, 1);
    b        = src->vt->size(src, 0);
    r->total = a + b;
    r->chunk = r->total / 4;
    r->avail = 0;
    r->base  = 0;
    r->len   = 0;
    r->cur   = 0;
    r->used  = 1;
}
void CriBitsRefill(CriBits *r);
void func_0204e67c(CriPair *src, int limit, CriPair *a, CriPair *b);
int CriBitsCanRead(CriBits *r, int n);
int CriBitsRead(CriBits *r, int n);
int CriBitsGetPos(CriBits *r);
int CriBitsIsEmpty(CriBits *r);
int func_0204e7a0(CriBits *r);
