typedef struct Obj {
    int w0;
    unsigned short h4;
    unsigned short h6;
    struct Obj2 *p8;
    int wc;
    unsigned char pad[0x5C];
    int w6c;
    unsigned char pad2[0x1C];
    int w8c;
} Obj;
struct Obj2 {
    unsigned char pad[0x20];
    int w20;
};
extern int func_ov000_021ff388(void);
extern int func_ov000_0220bf30(int, void *);
extern int func_ov000_0220c220(void *, void *, int, unsigned short, int, int, int);
extern void func_ov000_0220ced8(void *);
extern int func_ov000_0220edb8(void *);
extern int func_ov000_0220d410(void *);

int func_ov000_0220d7fc(Obj *o, int a1, int a2) {
    if (o->wc != 3) {
        return func_ov000_0220d410(o) != 0;
    }
    if (a2 < 0x20) {
        return func_ov000_0220d410(o) != 0;
    }
    if (func_ov000_0220bf30(a1, (unsigned char *) o + 0x68) == 0) {
        return func_ov000_0220d410(o) != 0;
    }
    if (o->p8->w20 == 0) {
        if (func_ov000_0220edb8(o) == 0) {
            return 0;
        }
        func_ov000_0220ced8(o);
        return 1;
    }
    o->wc = 4;
    return func_ov000_0220c220(o->p8, o, o->w0, o->h4, func_ov000_021ff388() - o->w8c, a1 + 0x20, a2 - 0x20) != 0;
}
