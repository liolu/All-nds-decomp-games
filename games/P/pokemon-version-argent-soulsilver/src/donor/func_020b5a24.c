/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_GfdInitVramManager from https://github.com/Project-Holon/aletheia src/game/arm9/nns_gfd_vram_manager.c (license: none
 * (MIT = tooling only)), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef u32 uptr;
extern void func_020b59dc(u32 a, u32 b, u32 c, u32 d, u32 e);
extern void func_020b5a24(u32 mode, u32 flag);
extern void func_020b5aac(void);
extern u32 func_020b5b20(u32 size, u32 which);
extern u32 func_020b5c90(void);
extern u16 data_021d84e0;
extern u32 data_02110944;
extern u32 data_02110948;
void func_020b59dc(u32 a, u32 b, u32 c, u32 d, u32 e);
void func_020b5a24(u32 mode, u32 flag) {
    if (mode <= 2) {
        func_020b59dc(4, 3, 2, 0, 1);
    } else {
        func_020b59dc(4, 3, 0, 2, 1);
    }

    data_021d84e0 = (u16) mode;
    func_020b5aac();

    if (flag == 0) {
        return;
    }

    data_02110944 = (uptr) func_020b5b20;
    data_02110948 = (uptr) func_020b5c90;
}
void func_020b5aac(void);
u32 func_020b5b20(u32 size, u32 which);
u32 func_020b5c90(void);
