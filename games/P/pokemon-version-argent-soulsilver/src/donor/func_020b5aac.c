/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNSi_GfdUpdateVramManager from https://github.com/Project-Holon/aletheia src/game/arm9/nns_gfd_vram_manager.c (license: none
 * (MIT = tooling only)), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct NNSGfdTexVramSlot {
    u32 cur;
    u32 end;
    u32 enable;
    u32 modeFlag;
    u16 kind;
    u16 pad_12;
    u32 base;
} NNSGfdTexVramSlot;
extern void func_020b5aac(void);
extern NNSGfdTexVramSlot data_02110970[5];
extern u16 data_021d84e0;
void func_020b5aac(void) {
    int i;
    u32 lo               = 0;
    NNSGfdTexVramSlot *t = data_02110970;
    int n                = data_021d84e0;

    if (n > 1u) {
        n++;
    }

    for (i = lo; i < 5; i++, t++) {
        if (i < n) {
            t->enable = 1;
        } else {
            t->enable = lo;
        }
        if (t->modeFlag != 0) {
            t->cur = lo;
            t->end = 0x10000;
        } else {
            t->cur = lo;
            t->end = 0x20000;
        }
    }
}
