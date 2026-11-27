/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNSi_GfdSetTexVramSlotOrder from https://github.com/Project-Holon/aletheia src/game/arm9/nns_gfd_vram_manager.c (license:
 * none (MIT = tooling only)), reused by tools/donor_match.py */
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
extern void func_020b59dc(u32 a, u32 b, u32 c, u32 d, u32 e);
extern NNSGfdTexVramSlot data_02110970[5];
extern NNSGfdTexVramSlot *data_02110954[7];
void func_020b59dc(u32 a, u32 b, u32 c, u32 d, u32 e) {
    data_02110954[2] = &data_02110970[a];
    data_02110954[3] = &data_02110970[b];
    data_02110954[4] = &data_02110970[c];
    data_02110954[5] = &data_02110970[d];
    data_02110954[6] = &data_02110970[e];
}
