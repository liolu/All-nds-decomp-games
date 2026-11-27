/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_AllocFromArenaHi from https://github.com/RonyxDumb/mkds src/arm9/0200ef4c_Os_ComputeMemoryRegionStartAddress.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef enum {
    OS_ARENA_MAIN         = 0,
    OS_ARENA_MAIN_SUBPRIV = 1,
    OS_ARENA_MAINEX       = 2,
    OS_ARENA_ITCM         = 3,
    OS_ARENA_DTCM         = 4,
    OS_ARENA_SHARED       = 5,
    OS_ARENA_WRAM_MAIN    = 6,
    OS_ARENA_WRAM_SUB     = 7,
    OS_ARENA_WRAM_SUBPRIV = 8,
    OS_ARENA_MAX          = 9
} OSArenaId;
extern void *func_020d2ac4(OSArenaId id);
extern void *func_020d2ad8(OSArenaId id);
extern void func_020d2c78(OSArenaId id, void *newHi);
extern void *func_020d2d0c(OSArenaId id, u32 size, u32 align);
void *func_020d2ac4(OSArenaId id);
void *func_020d2ad8(OSArenaId id);
void func_020d2c78(OSArenaId id, void *newHi);
void *func_020d2d0c(OSArenaId id, u32 size, u32 align) {
    void *ptr;
    u8 *arenaHi;

    arenaHi = func_020d2ac4(id);
    if (!arenaHi) {
        return ((void *) 0);
    }

    arenaHi = (u8 *) (((u32) (arenaHi)) & ~((align) -1));
    arenaHi -= size;
    arenaHi = ptr = (void *) (((u32) (arenaHi)) & ~((align) -1));

    if (arenaHi < (u8 *) func_020d2ad8(id)) {
        return ((void *) 0);
    }

    func_020d2c78(id, arenaHi);

    return ptr;
}
