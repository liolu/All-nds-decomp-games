/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_GfdSaveVramManager from https://github.com/Project-Holon/aletheia src/game/arm9/nns_gfd_vram_manager.c (license: none
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
extern void func_020b5c98(u32 *dst);
extern NNSGfdTexVramSlot data_02110970[5];
void func_020b5c98(u32 *dst) {
    int i                = 0;
    NNSGfdTexVramSlot *t = data_02110970;
    int j                = i;

    for (; i < 5; i++) {
        dst[j]     = t->cur;
        dst[j + 1] = t->end;
        t++;
        j += 2;
    }
}
