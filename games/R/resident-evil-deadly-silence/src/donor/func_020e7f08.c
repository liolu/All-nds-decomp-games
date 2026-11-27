/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* CriNameTableFind from https://github.com/tylzars/bakubrawlers libs/cri/src/cri_file.c (license: none), reused by
 * tools/donor_match.py */
typedef struct CriNameEnt {
    char name[12];
    int val;
} CriNameEnt;
extern int func_021124f4(const char *, const char *, int);
extern int data_02153df0;
extern CriNameEnt *data_02153df4;
extern CriNameEnt *func_020e7f08(char *);
CriNameEnt *func_020e7f08(char *name) {
    int i;
    CriNameEnt *e;
    int n;
    if (name[0] == 0) {
        return 0;
    }
    e = data_02153df4;
    n = data_02153df0;
    for (i = 0; i < n; i++) {
        if (func_021124f4((char *) e, name, 12) == 0) {
            return e;
        }
        e++;
    }
    return 0;
}
