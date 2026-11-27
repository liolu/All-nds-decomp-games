/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* CriDevTableAdd from https://github.com/tylzars/bakubrawlers libs/cri/src/cri_err.c (license: none), reused by
 * tools/donor_match.py */
typedef struct CriNameEnt {
    void *val;
    char name[12];
} CriNameEnt;
extern CriNameEnt data_02152e10[32];
extern void func_02110374(void *, const void *, int);
extern int func_0211282c(const char *);
extern int func_020e5cc4(const char *s, void *(*f)(void) );
extern void *func_020e5c5c(const char *s);
extern void func_020e5c10(char *s);
int func_020e5cc4(const char *s, void *(*f)(void) ) {
    int i;
    void *v;
    func_020e5c10((char *) s);
    v = f();
    if (func_020e5c5c(s) != 0) {
        return (int) v;
    }
    for (i = 0; i < 32; i++) {
        if (data_02152e10[i].name[0] == 0) {
            break;
        }
    }
    if (i == 32) {
        return 0;
    }
    data_02152e10[i].val = v;
    func_02110374(data_02152e10[i].name, s, func_0211282c(s) + 1);
    return (int) v;
}
void *func_020e5c5c(const char *s);
void func_020e5c10(char *s);
