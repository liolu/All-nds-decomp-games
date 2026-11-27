/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* CriFuncTableRun from https://github.com/tylzars/bakubrawlers libs/cri/src/cri_err.c (license: none), reused by
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
extern int data_021525d0[8], data_021525b0[8];
int func_020e4628(int n) {
    int i;
    int r        = 0;
    CriErrEnt *e = data_02152670[n].e;
    for (i = 0; i < 6; i++, e++) {
        int (*fn)(void *) = e->fn;
        void *arg         = e->arg;
        if (fn != 0) {
            data_021525d0[n] = 1;
            r |= fn(arg);
            data_021525d0[n] = 0;
        }
    }
    data_021525b0[n]++;
    return r;
}
