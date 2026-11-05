typedef struct {
    unsigned char b[256];
} T;
extern void func_020d4790(int, void *, int);
extern void func_0209f630(void *);
extern void *func_0209ef2c(void *);
extern void func_020d4a50(void *, void *, int);
int func_0209f400(T *p) {
    int i;
    int s[5];
    void *r;
    func_020d4790(0, p, 0x400);
    for (i = 0; i < 3; i++) {
        p[i].b[0xe7] = 0xff;
    }
    func_0209f630(s);
    r = func_0209ef2c(s);
    for (i = 0; i < 2; i++) {
        func_020d4a50(r, &p->b[0xf0], 0xe);
        p++;
    }
    return 0;
}
