/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02072d44 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/gfd/gfd_lnktex.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkLnkVramBlock {
    u32 addr;
    u32 szByte;
    struct UnkLnkVramBlock *pPrev;
    struct UnkLnkVramBlock *pNext;
} UnkLnkVramBlock;
typedef struct {
    UnkLnkVramBlock *pFreeList;
} UnkLnkVramMan;
extern BOOL NNSi_GfdFreeLnkVram(UnkLnkVramMan *pMgr, UnkLnkVramBlock **ppBlockPool, u32 baseAddr, u32 szByte);
typedef struct {
    UnkLnkVramMan mgr;
    UnkLnkVramMan mgrFor4x4;
    UnkLnkVramBlock *pBlockPool;
    u32 szByte;
    u32 szByteFor4x4;
    void *pWork;
    u32 szWork;
} UnkLnkTexVramManager;
extern UnkLnkTexVramManager mgr_;
extern int NNS_GfdFreeLnkTexVram(u32 texKey);
static inline u32 KeyAddr_(u32 key) {
    return (u32) ((key & 0xffff) << 3);
}
static inline u32 KeySize_(u32 key) {
    return (u32) (((key & 0x7fff0000) >> 16) << 4);
}
static inline BOOL Key4x4_(u32 key) {
    return (BOOL) ((key & 0x80000000) >> 31);
}
int NNS_GfdFreeLnkTexVram(u32 texKey) {
    u32 addr       = KeyAddr_(texKey);
    u32 szByte     = KeySize_(texKey);
    BOOL is4x4comp = Key4x4_(texKey);
    BOOL result;

    if (szByte != 0) {
        if (is4x4comp) {
            result = NNSi_GfdFreeLnkVram(&mgr_.mgrFor4x4, &mgr_.pBlockPool, addr, szByte);
        } else {
            result = NNSi_GfdFreeLnkVram(&mgr_.mgr, &mgr_.pBlockPool, addr, szByte);
        }
        if (result) {
            return 0;
        } else {
            return 1;
        }
    }
    return 2;
}
