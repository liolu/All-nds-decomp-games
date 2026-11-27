/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* CriFilSetBlockSize from https://github.com/tylzars/bakubrawlers libs/cri/src/cri_file.c (license: none), reused by
 * tools/donor_match.py */
typedef struct CriFil {
    signed char used;
    signed char state;
    short pad2;
    int ssize;
    int i8;
    int nsec;
    int pos;
    int i14;
    int cnt;
    char name[0x14];
    int off;
    int len;
} CriFil;
extern char data_020ae200[], data_020ae220[], data_020ae244[], data_020ae25c[], data_020ae274[], data_021311fc[],
    data_020ae2a4[];
extern void func_020e8720(int, void *);
void func_020e8720(int a, void *msg);
void func_020e8060(CriFil *f, int ss) {
    int t;
    if (f == 0) {
        func_020e8720(0, data_021311fc);
        return;
    }
    t        = f->pos * f->ssize;
    f->ssize = ss;
    f->nsec  = (f->i8 + (f->ssize - 1)) / f->ssize;
    f->pos   = t / f->ssize;
    f->i14   = f->cnt * ss;
}
