/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* CriFuncTableRemoveNoLock from https://github.com/tylzars/bakubrawlers libs/cri/src/cri_err.c (license: none), reused by
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
extern char data_021306dc[], data_021306fc[], data_020ad8c0[], data_020ad8e4[];
extern void func_020e49d8(const char *msg);
extern void func_020e4808(int a, int b);
void func_020e49d8(const char *msg);
void func_020e4808(int a, int b) {
    if (b < 0 || b >= 6) {
        func_020e49d8(data_021306dc);
        return;
    }
    if (a < 0 || a >= 8) {
        func_020e49d8(data_021306fc);
        return;
    }
    data_02152670[a].e[b].fn   = 0;
    data_02152670[a].e[b].arg  = 0;
    data_02152670[a].e[b].name = 0;
}
