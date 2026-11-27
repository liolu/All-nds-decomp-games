/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02070d6c from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/jpn/main/func_02070d6c.legacy.c (license: MIT),
 * reused by tools/donor_match.py */
typedef struct Obj {
    char _pad09[0x9];
    unsigned char f9;
} Obj;
typedef struct Mgr {
    char _pad_a4[0xa4];
    Obj *obj;
} Mgr;
typedef struct Root {
    char _pad04[0x4];
    Mgr *mgr;
} Root;
extern Root data_021e16c0;
extern void func_020ab2e4(void);
extern void func_020a699c(void *self);
void func_020a69f8(void) {
    Obj *obj = data_021e16c0.mgr->obj;
    if (obj == 0) {
        return;
    }
    if (obj->f9 != 0) {
        func_020ab2e4();
    } else {
        func_020a699c(obj);
    }
}
