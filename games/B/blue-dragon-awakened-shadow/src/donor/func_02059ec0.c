/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02052098 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_02052098.legacy_sp3.c (license: MIT),
 * reused by tools/donor_match.py */
typedef struct {
    char _pad0[0x4];
    int x4;
    int x8;
    int xc;
    int x10;
    int x14;
    int x18;
    unsigned char x1c;
    unsigned char x1d;
    unsigned char x1e;
    char _pad1f[0x3];
    unsigned short x22;
    char _pad24[0xc];
} Rec;
extern Rec *data_0210f060;
extern unsigned char func_02059ca8(int idx);
extern int func_020598d0(void *self);
extern void MI_CpuCopy8(void *src, void *dst, int n);
void func_02059ec0(int idx, void *msg, int len) {
    Rec *rec = &data_0210f060[idx];
    int buf[2];
    int kind;

    rec->x1e = func_02059ca8(idx);
    kind     = func_020598d0(msg);
    switch (kind) {
        case 1:
            if (len != 8) {
                return;
            }
            MI_CpuCopy8(msg, buf, 8);
            rec->x18 = buf[0];
            rec->x10 = 0;
            if (rec->x4 != 0 && rec->x8 >= rec->x18) {
                rec->x1d = 2;
                break;
            }
            rec->x1d = 4;
            break;
        case 2:
        case 3:
        case 4:
            rec->x1d = 3;
            break;
    }
    rec->x22 = kind;
}
