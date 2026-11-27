/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* OS_AllocFromArenaLo from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_arena.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
extern void *func_020be804(u32 id);
extern void *func_020be7f0(u32 id);
extern void func_020be5b4(u32 id, void *lo);
void *func_020be804(u32 id);
void *func_020be7f0(u32 id);
void func_020be5b4(u32 id, void *lo);
void *func_020be52c(u32 id, u32 size, u32 align) {
    void *ptr = func_020be7f0(id);
    u32 newLo;

    if (!ptr) {
        return 0;
    }

    ptr   = (void *) (((u32) ptr + align - 1) & ~(align - 1));
    newLo = (u32) ((u8 *) ptr + size + align - 1) & ~(align - 1);

    if (newLo > (u32) func_020be804(id)) {
        return 0;
    }
    func_020be5b4(id, (void *) newLo);
    return ptr;
}
