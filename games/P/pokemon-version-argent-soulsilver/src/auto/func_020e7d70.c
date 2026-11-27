/* compiler: 2.0/sp1p5 -O2,p */
typedef struct Thr {
    unsigned char pad[0x6C];
    int id;
} Thr;
typedef struct TInfo {
    int w0;
    Thr *cur;
} TInfo;
typedef struct Cs {
    int w[3];
    int v;
} Cs;
extern int func_020eb840(void *, int);
extern int func_020d2734(void *);
extern void func_020d2618(void *);
extern void func_020d269c(void *);
extern int func_020e74dc(void *, void *, char *, void *);
extern unsigned char data_02111038[];
extern unsigned char data_021e5550[];
extern TInfo data_021e16c0;
extern Cs data_021e54c0;
extern Cs data_021e54e4;
extern unsigned char func_020e7d00;

int func_020e7d70(char *fmt, ...) {
    int r;
    if (func_020eb840(data_02111038, -1) >= 0) {
        return -1;
    }
    if (func_020d2734(data_021e5550) == 0) {
        data_021e54c0.v = data_021e16c0.cur->id;
        data_021e54e4.v = 1;
    } else if (data_021e54c0.v == data_021e16c0.cur->id) {
        data_021e54e4.v = data_021e54e4.v + 1;
    } else {
        func_020d2618(data_021e5550);
        data_021e54c0.v = data_021e16c0.cur->id;
        data_021e54e4.v = 1;
    }
    r               = func_020e74dc(&func_020e7d00, data_02111038, fmt, (void *) ((((unsigned int) &fmt) & ~3) + 4));
    data_021e54e4.v = data_021e54e4.v - 1;
    if (data_021e54e4.v == 0) {
        func_020d269c(data_021e5550);
    }
    return r;
}
