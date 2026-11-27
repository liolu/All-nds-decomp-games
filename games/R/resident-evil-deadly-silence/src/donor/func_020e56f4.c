/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* CriDevRead from https://github.com/tylzars/bakubrawlers libs/cri/src/cri_dev.c (license: none), reused by
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
typedef struct CriDevHandle {
    CriDev *dev;
    void *obj;
} CriDevHandle;
extern char data_020adaf8[], data_020adb14[], data_020adb2c[], data_020adb48[], data_02130b34[];
extern char data_02130b50[], data_020adb94[], data_020adbb0[], data_020adbcc[], data_020adbf4[];
extern void func_020e5e0c(const char *);
int func_020e56f4(CriDevHandle *h, int a, int b) {
    int r;
    if (h == 0) {
        func_020e5e0c(data_02130b34);
        return 0;
    }
    if (h->dev->f20 != 0) {
        r = h->dev->f20(h->obj, a, b);
    } else {
        r = 0;
        func_020e5e0c(data_02130b50);
    }
    return r;
}
