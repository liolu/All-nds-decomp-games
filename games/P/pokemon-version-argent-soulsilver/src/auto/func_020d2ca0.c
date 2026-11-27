/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020d2ca0 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_arena.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
extern void *func_020d2ac4(u32 id);
extern void *func_020d2ad8(u32 id);
extern void func_020d2c8c(u32 id, void *lo);
void *func_020d2ac4(u32 id);
void *func_020d2ad8(u32 id);
void func_020d2c8c(u32 id, void *lo);
void *func_020d2ca0(u32 id, u32 size, u32 align) {
    void *ptr = func_020d2ad8(id);
    u32 newLo;

    if (!ptr) {
        return 0;
    }

    ptr   = (void *) (((u32) ptr + align - 1) & ~(align - 1));
    newLo = (u32) ((u8 *) ptr + size + align - 1) & ~(align - 1);

    if (newLo > (u32) func_020d2ac4(id)) {
        return 0;
    }
    func_020d2c8c(id, (void *) newLo);
    return ptr;
}
