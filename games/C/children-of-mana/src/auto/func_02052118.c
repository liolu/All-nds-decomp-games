/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205e9b4 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/ctrdg/ctrdg_common.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef volatile u16 vu16;
typedef s32 BOOL;
typedef struct UnkCtrdgInfo {
    u16 unk_00;
    u8 unk_02[3];
    u8 unk_05_0 : 1;
    u8 unk_05_1 : 1;
    u8 unk_05_2 : 6;
    u16 unk_06;
    u32 unk_08;
} UnkCtrdgInfo;
typedef struct UnkCtrdgCommon2 {
    vu16 unk_00;
    u16 unk_02;
} UnkCtrdgCommon2;
typedef struct UnkCtrdgLock {
    u32 unk_00;
    u32 unk_04;
} UnkCtrdgLock;
typedef struct UnkCtrdgCycles {
    s32 unk_00;
    s32 unk_04;
} UnkCtrdgCycles;
extern UnkCtrdgCommon2 data_0211ade8;
extern BOOL func_02052118(void);
extern void func_020520d0(UnkCtrdgCycles *cycles);
extern void func_0205209c(const UnkCtrdgCycles *cycles);
extern void func_0205201c(u16 lockId, UnkCtrdgLock *lock);
extern void func_02051ff4(u16 lockId, UnkCtrdgLock *lock);
extern UnkCtrdgCommon2 data_0211ade8;
BOOL func_02052118(void) {
    BOOL ret           = 1;
    UnkCtrdgInfo *info = ((UnkCtrdgInfo *) 0x027FFC30);
    UnkCtrdgLock lock;
    UnkCtrdgCycles cycles;

    if (info->unk_00 == 0xFFFF) {
        return 0;
    }
    if (info->unk_05_1 == 1) {
        return 0;
    }

    func_0205201c(data_0211ade8.unk_02, &lock);
    func_020520d0(&cycles);
    {
        u8 *rom = ((u8 *) 0x08000000);
        if ((rom[0xB2] == 0x96 && info->unk_00 != *(u16 *) (rom + 0xBE)) ||
            (rom[0xB2] != 0x96 && info->unk_00 != *(u16 *) 0x0801FFFE) ||
            (info->unk_08 != *(u32 *) (rom + 0xAC) && info->unk_05_0)) {
            ret            = 0;
            info->unk_05_1 = 1;
        }
    }
    func_0205209c(&cycles);
    func_02051ff4(data_0211ade8.unk_02, &lock);
    return ret;
}
void func_020520d0(UnkCtrdgCycles *cycles);
void func_0205209c(const UnkCtrdgCycles *cycles);
void func_0205201c(u16 lockId, UnkCtrdgLock *lock);
void func_02051ff4(u16 lockId, UnkCtrdgLock *lock);
