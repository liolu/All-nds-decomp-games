/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* CriFuncTableAddNoLock from https://github.com/tylzars/bakubrawlers libs/cri/src/cri_err.c (license: none), reused by
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
extern char data_020ad7d0[], data_02130724[], data_0213074c[], data_02130754[];
extern void func_020e49d8(const char *msg);
extern int func_020e48d0(int a, void *b, void *c, void *d);
void func_020e49d8(const char *msg);
int func_020e48d0(int a, void *b, void *c, void *d) {
    CriErrEnt *e;
    int i;
    if (a < 0 || a >= 8) {
        func_020e49d8(data_02130724);
        return -1;
    }
    e = data_02152670[a].e;
    i = 0;
    do {
        if (e->fn == 0) {
            e->fn  = b;
            e->arg = c;
            if (d != 0) {
                e->name = d;
            } else {
                e->name = data_0213074c;
            }
            break;
        }
        i++;
        e++;
    } while (i < 6);
    if (i == 6) {
        func_020e49d8(data_02130754);
        return -1;
    }
    return i;
}
