/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* CriRingPoolReleaseRefNoLock from https://github.com/tylzars/bakubrawlers libs/cri/src/cri_ring.c (license: none), reused by
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
    int i40, i44;
} CriRing;
extern int data_02151eb4;
extern CriRing data_02151eb8[24];
extern void func_020e42cc(void);
void func_020e42cc(void) {
    if (--data_02151eb4 == 0) {
        __clear(data_02151eb8, sizeof(data_02151eb8));
    }
}
