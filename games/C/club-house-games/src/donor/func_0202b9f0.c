/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_GfdDumpLnkPlttVramManagerEx from https://github.com/RonyxDumb/mkds src/arm9/02017138_func_02017138.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned long u32;
typedef void (*NNSGfdLnkDumpCallBack)(u32 addr, u32 szByte, void *pUserData);
extern void func_0202b9f0(NNSGfdLnkDumpCallBack pFunc, void *pUserData);
typedef struct NNSiGfdLnkVramBlock NNSiGfdLnkVramBlock;
struct NNSiGfdLnkVramBlock {
    u32 addr;
    u32 szByte;
    NNSiGfdLnkVramBlock *pBlkPrev;
    NNSiGfdLnkVramBlock *pBlkNext;
};
typedef struct NNSiGfdLnkVramMan {
    NNSiGfdLnkVramBlock *pFreeList;
} NNSiGfdLnkVramMan;
extern void func_0202ba14(const NNSiGfdLnkVramBlock *pFreeListHead, NNSGfdLnkDumpCallBack pFunc, void *pUserData);
typedef struct NNS_GfdLnkPlttVramManager {
    NNSiGfdLnkVramMan mgr;
    NNSiGfdLnkVramBlock *pBlockPoolList;
    u32 szByte;
    NNSiGfdLnkVramBlock *pWorkHead;
    u32 szByteManagementWork;
} NNS_GfdLnkPlttVramManager;
extern NNS_GfdLnkPlttVramManager data_0223b494;
void func_0202b9f0(NNSGfdLnkDumpCallBack pFunc, void *pUserData) {
    ((void) 0);
    func_0202ba14(data_0223b494.mgr.pFreeList, pFunc, pUserData);
}
