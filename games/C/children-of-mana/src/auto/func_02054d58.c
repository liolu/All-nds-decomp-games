/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020618dc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/fs/overlay.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
typedef void (*UnkOverlayCtor)(void);
typedef struct UnkOverlayInfo {
    u32 id;
    u8 *addr;
    u32 ramSize;
    u32 bssSize;
    UnkOverlayCtor *ctorStart;
    UnkOverlayCtor *ctorEnd;
    u32 fileId;
    u32 compressedSize : 24;
    u32 flags : 8;
    u32 target;
    u32 filePos;
    u32 fileLen;
} UnkOverlayInfo;
extern u8 OverlaySignatures[];
extern u8 data_02110188[];
extern void func_0205bba4(const void *addr, u32 count);
extern void func_0205a294(void *dest, u8 value, u32 count);
extern void func_02000934(void *bottom);
extern void func_0205c9c4(void);
u32 func_0205522c(UnkOverlayInfo *info);
BOOL func_02054e58(const u8 *digest, void *src, u32 size);
void func_02054d58(UnkOverlayInfo *info) {
    u32 size = func_0205522c(info);

    if (*(u16 *) 0x027FFC40 == 2) {
        BOOL ok = 0;

        if (info->flags & 2) {
            if (info->id < (data_02110188 - OverlaySignatures) / 20) {
                ok = func_02054e58(OverlaySignatures + info->id * 20, info->addr, size);
            }
        }
        if (!ok) {
            func_0205a294(info->addr, 0, size);
            func_0205c9c4();
            return;
        }
    }

    if (info->flags & 1) {
        func_02000934(info->addr + size);
    }
    func_0205bba4(info->addr, info->ramSize);

    {
        UnkOverlayCtor *p   = info->ctorStart;
        UnkOverlayCtor *end = info->ctorEnd;
        for (; p < end; p++) {
            if (*p != 0) {
                (**p)();
            }
        }
    }
}
