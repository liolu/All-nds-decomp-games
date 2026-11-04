/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205dacc from projets/children-of-mana/src/auto/func_0205dacc.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef volatile u32 vu32;
typedef volatile u16 vu16;
typedef s32 BOOL;
typedef void (*UnkPmCallback)(u32 result, void *arg);
extern u32 data_0206d990;
extern u32 func_0204f160(u32 type, UnkPmCallback callback, void *arg);
extern u32 func_0204f124(u32 type);
extern BOOL func_0204ec40(u32 sw, u32 backLight, BOOL skipWait, BOOL isSync);
extern u32 func_0204f160(u32 type, UnkPmCallback callback, void *arg);
extern u32 func_0204f124(u32 type);
BOOL func_0204ec40(u32 sw, u32 backLight, BOOL skipWait, BOOL isSync) {
    switch (sw) {
        case 1:
            if (!skipWait) {
                if ((u32) ((*(vu32 *) 0x027ffc3c) - data_0206d990) <= 7) {
                    return 0;
                }
            }
            if (backLight) {
                if (isSync) {
                    func_0204f124(backLight);
                } else {
                    func_0204f160(backLight, 0, 0);
                }
            }
            (*(vu16 *) 0x04000304) |= 1;
            break;
        case 0:
            (*(vu16 *) 0x04000304) &= ~1;
            data_0206d990 = (*(vu32 *) 0x027ffc3c);
            if (backLight) {
                if (isSync) {
                    func_0204f124(backLight);
                } else {
                    func_0204f160(backLight, 0, 0);
                }
            }
            break;
    }
    return 1;
}
