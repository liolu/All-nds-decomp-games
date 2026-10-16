/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02072824 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/gfd/gfd_vramtransfer.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef s32 BOOL;
typedef struct {
    u32 type;
    const void *pSrc;
    u32 dstAddr;
    u32 szByte;
} UnkVramTransferTask;
typedef struct {
    UnkVramTransferTask *pTaskArray;
    u32 lengthOfArray;
    u16 idxFront;
    u16 idxRear;
    u16 numTasks;
    u32 totalSize;
} UnkVramTransferManager;
extern UnkVramTransferManager data_020d6cdc;
void func_0202fefc(UnkVramTransferTask *task);
UnkVramTransferTask *func_0202ff80(UnkVramTransferManager *mgr);
BOOL func_0202ffa0(UnkVramTransferManager *mgr);
void func_02030000(void) {
    UnkVramTransferManager *mgr = &data_020d6cdc;
    UnkVramTransferTask *task   = func_0202ff80(mgr);

    while (func_0202ffa0(mgr)) {
        func_0202fefc(task);
        mgr->totalSize -= task->szByte;
        task = func_0202ff80(mgr);
    }
}
