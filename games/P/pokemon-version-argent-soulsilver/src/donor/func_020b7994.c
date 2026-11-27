/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_G2dGetNewOamManagerInstance from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroSystem/src/g2d_oam.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
extern void func_020d4790(register u16 value, register u16 *dst, register u32 size);
typedef struct {
    union {
        u32 attr01;
        struct {
            u16 attr0;
            u16 attr1;
        };
        struct {
            u32 y : 8;
            u32 rsMode : 2;
            u32 objMode : 2;
            u32 mosaic : 1;
            u32 colorMode : 1;
            u32 shape : 2;

            u32 x : 9;
            u32 rsParam : 5;
            u32 size : 2;
        };
        struct {
            u32 _0 : 28;
            u32 flipH : 1;
            u32 flipV : 1;
            u32 _1 : 2;
        };
    };
    union {
        struct {
            u16 attr2;
            u16 _3;
        };
        u32 attr23;
        struct {
            u32 charNo : 10;
            u32 priority : 2;
            u32 cParam : 4;
            u32 _2 : 16;
        };
    };
} GXOamAttr;
typedef struct OamManagerRange {
    u16 first;
    u16 last;
    u16 next;
} OamManagerRange;
typedef struct OamManagerInstance {
    u32 type;
    OamManagerRange oam;
    OamManagerRange affine;
    u16 managerId;
    u16 padding;
    BOOL useFastTransfer;
} OamManagerInstance;
typedef struct OamManagerBuffer {
    u16 oamOwners[128];
    GXOamAttr oamBuffer[128];
    u16 affineOwners[32];
} OamManagerBuffer;
extern u16 data_021d8534;
extern OamManagerBuffer data_021d8538[3];
extern BOOL func_020b7994(OamManagerInstance *pMan, u16 oamFirst, u16 numOam, u16 affineFirst, u16 numAffine, int type);
static inline BOOL IsOamRangeFree(const u16 *owners, u16 first, u16 last) {
    const u16 *p   = owners + first;
    const u16 *end = owners + last;
    for (; p <= end; p++) {
        if (*p != 0xffff) {
            return 0;
        }
    }
    return 1;
}
static inline BOOL IsAffineRangeFree(const u16 *owners, u32 first, u32 last) {
    const u16 *p   = owners + first;
    const u16 *end = owners + last;
    for (; p <= end; p++) {
        if (*p != 0xffff) {
            return 0;
        }
    }
    return 1;
}
BOOL func_020b7994(OamManagerInstance *pMan, u16 oamFirst, u16 numOam, u16 affineFirst, u16 numAffine, int type) {
    OamManagerBuffer *buffer = &data_021d8538[type];
    u16 oamLast              = oamFirst + (numOam - 1);
    if (IsOamRangeFree(buffer->oamOwners, oamFirst, oamLast)) {
        pMan->managerId = data_021d8534++;
        pMan->oam.first = oamFirst;
        pMan->oam.last  = oamLast;
        pMan->oam.next  = oamFirst;
        func_020d4790(pMan->managerId, &buffer->oamOwners[oamFirst], (oamLast - oamFirst + 1) * 2);
    } else {
        return 0;
    }
    u16 *affineOwners = buffer->affineOwners;
    if (numAffine == 0) {
        pMan->affine.first = 32;
        pMan->affine.last  = 0;
        pMan->affine.next  = pMan->affine.first;
    } else {
        u16 affineLast = affineFirst + (numAffine - 1);
        if (IsAffineRangeFree(affineOwners, affineFirst, affineLast)) {
            pMan->affine.first = affineFirst;
            pMan->affine.last  = affineLast;
            pMan->affine.next  = affineFirst;
            func_020d4790(pMan->managerId, &affineOwners[affineFirst], (affineLast - affineFirst + 1) * 2);
        } else {
            return 0;
        }
    }
    pMan->useFastTransfer = 0;
    pMan->type            = type;
    return 1;
}
