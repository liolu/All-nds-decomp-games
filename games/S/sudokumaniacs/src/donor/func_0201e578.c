/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205cb24 from projets/children-of-mana/src/auto/func_0205cb24.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
extern u32 func_0201e3b0(void);
extern u32 func_0201e3c4(u32 state);
extern u32 data_0203e0b4;
extern u16 data_0203e0b8[9];
extern u32 func_0201e570(register u32 value);
void func_0201e578(u32 bank, u16 lockID) {
    u32 mask;
    u32 enabled = func_0201e3b0();

    mask = bank & data_0203e0b4 & 0x1ff;

    while (1) {
        s32 i = 31 - func_0201e570(mask);
        if (i < 0) {
            break;
        }
        mask &= ~(1 << i);
        if (data_0203e0b8[i] == lockID) {
            data_0203e0b8[i] = 0;
            data_0203e0b4 &= ~(1 << i);
        }
    }
    func_0201e3c4(enabled);
}
