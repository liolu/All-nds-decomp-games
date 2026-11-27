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
extern UnkVramTransferManager data_021d84f0;
void func_020b61e8(UnkVramTransferTask *task);
UnkVramTransferTask *func_020b626c(UnkVramTransferManager *mgr);
BOOL func_020b628c(UnkVramTransferManager *mgr);
void func_020b62ec(void) {
    UnkVramTransferManager *mgr = &data_021d84f0;
    UnkVramTransferTask *task   = func_020b626c(mgr);

    while (func_020b628c(mgr)) {
        func_020b61e8(task);
        mgr->totalSize -= task->szByte;
        task = func_020b626c(mgr);
    }
}
