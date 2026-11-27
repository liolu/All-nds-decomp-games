/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* CriFuncTableSetNoLock from https://github.com/tylzars/bakubrawlers libs/cri/src/cri_err.c (license: none), reused by
 * tools/donor_match.py */
typedef struct CriErrEnt {
    void *fn;
    void *arg;
    void *name;
} CriErrEnt;
typedef struct CriErrTab {
    CriErrEnt e[6];
} CriErrTab;
extern CriErrTab data_02152670[8];
extern char data_020ad878[], data_020ad898[], data_02130650[], data_02130674[];
extern char data_0213069c[], data_021306d4[], data_020ad94c[], data_020ad970[], data_020ad994[];
extern void func_020e49d8(const char *msg);
extern void func_020e4710(int a, int b, void *c, void *d, void *e);
void func_020e49d8(const char *msg);
void func_020e4710(int a, int b, void *c, void *d, void *e) {
    CriErrEnt *p;
    if (b < 0 || b >= 6) {
        func_020e49d8(data_02130650);
        return;
    }
    if (a < 0 || a >= 8) {
        func_020e49d8(data_02130674);
        return;
    }
    p = &data_02152670[a].e[b];
    if (p->fn != 0) {
        func_020e49d8(data_0213069c);
    }
    p->fn  = c;
    p->arg = d;
    if (e != 0) {
        p->name = e;
    } else {
        p->name = data_021306d4;
    }
}
