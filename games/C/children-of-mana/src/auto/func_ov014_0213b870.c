/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* CriRingPutBackSpanNoLock from https://github.com/tylzars/bakubrawlers libs/cri/src/cri_ring2.c (license: none), reused by
 * tools/donor_match.py */
typedef struct CriRing {
    void *vt;
    int used;
    void *p8;
    int c, d10;
    int rd, wr;
    char *buf;
    int size;
    int extra;
    int tot28, tot2c, tot30, tot34;
    void (*cb)(void *, int);
    void *cbarg;
    void (*peek)(void *, void *);
    void *peekarg;
} CriRing;
typedef struct CriSpan {
    char *ptr;
    int len;
} CriSpan;
extern char data_ov014_02147b9c[], data_ov014_02147ba8[], data_ov014_02147bc4[], data_ov014_02147bd0[], data_ov014_02147bf0[],
    data_ov014_02147bfc[];
extern void func_ov014_0213c378(const char *, const char *);
extern void func_ov014_0213b870(CriRing *, int, CriSpan *);
void func_ov014_0213b870(CriRing *r, int mode, CriSpan *s) {
    char *ptr;
    int size;
    if (r == 0) {
        func_ov014_0213c378(data_ov014_02147b9c, data_ov014_02147ba8);
        return;
    }
    if (r->used == 0) {
        func_ov014_0213c378(data_ov014_02147bc4, data_ov014_02147bd0);
        return;
    }
    size = r->size;
    if (size == 0) {
        func_ov014_0213c378(data_ov014_02147bf0, data_ov014_02147bfc);
        return;
    }
    if (s->len <= 0) {
        return;
    }
    ptr = s->ptr;
    if (ptr == 0) {
        return;
    }
    if (mode == 0) {
        unsigned a = (r->rd + size - s->len) % size;
        unsigned b = (ptr - r->buf) % size;
        if (a == b) {
            r->rd  = a;
            r->d10 = r->d10 + s->len;
        } else if (r->cb != 0) {
            r->cb(r->cbarg, -3);
        }
        r->tot28 = r->tot28 - s->len;
    } else if (mode == 1) {
        unsigned a = (r->wr + size - s->len) % size;
        unsigned b = (ptr - r->buf) % size;
        if (a == b) {
            r->wr = a;
            r->c  = r->c + s->len;
        } else if (r->cb != 0) {
            r->cb(r->cbarg, -3);
        }
        r->tot30 = r->tot30 - s->len;
    } else {
        s->len = 0;
        s->ptr = 0;
        if (r->cb != 0) {
            r->cb(r->cbarg, -3);
        }
    }
}
