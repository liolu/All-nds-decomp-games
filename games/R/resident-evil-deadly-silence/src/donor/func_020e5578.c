/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* CriDevGetSizeByPath from https://github.com/tylzars/bakubrawlers libs/cri/src/cri_dev.c (license: none), reused by
 * tools/donor_match.py */
typedef struct CriDev {
    int (*f0)();
    int pad4;
    int (*f8)();
    int padc;
    int (*f10)();
    int (*f14)();
    int (*f18)(void *, int, int);
    int (*f1c)();
    int (*f20)(void *, int, int);
    int pad24, pad28;
    int (*f2c)();
    int pad30[12];
    int (*f60)();
} CriDev;
extern char data_020adb7c[], data_020adb94[], data_020adbb0[], data_02130a68[], data_02130a90[];
extern char data_02130ab8[], data_02130adc[], data_020adc60[], data_020adc90[], data_020adc98[];
extern void func_020e5e0c(const char *);
extern CriDev *func_020e5b6c(char *, char *, char *);
extern void func_020e58b8(char *, char *, char *);
CriDev *func_020e5b6c(char *a, char *b, char *c);
void func_020e58b8(char *out, char *rest, char *src);
int func_020e5578(char *path) {
    char tmp[0x129];
    char name[0x129];
    CriDev *d;
    if (path == 0) {
        func_020e5e0c(data_02130a68);
        return 0;
    }
    func_020e58b8(tmp, name, path);
    if (name[0] == 0) {
        func_020e5e0c(data_02130a90);
        return 0;
    }
    d = func_020e5b6c(tmp, name, path);
    if (d == 0) {
        func_020e5e0c(data_02130ab8);
    }
    if (d->f8 != 0) {
        return d->f8(name);
    }
    func_020e5e0c(data_02130adc);
    return 0;
}
