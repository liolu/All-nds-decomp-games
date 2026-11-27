/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* SPL_EMITTER_AllocNodeFromHeap from https://github.com/Project-Holon/aletheia src/game/arm9/spl_emitter.c (license: none (MIT
 * = tooling only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef struct SPLNode {
    struct SPLNode *next;
    struct SPLNode *prev;
} SPLNode;
typedef struct SPLList {
    SPLNode *first;
    int count;
    SPLNode *last;
} SPLList;
typedef struct SPLList SPLList;
typedef struct SPLNode SPLNode;
typedef void *(*AllocFn)(u32 size);
struct VramNodeHeap {
    AllocFn alloc;
    u32 reserved0;
    int effectCount;
    u32 reserved2;
    u32 nodeListFirst;
    u32 nodeListCount;
    u32 nodeListLast;
    u32 rowListFirst;
    u32 rowListCount;
    u32 rowListLast;
    u32 reserved3;
    u32 reserved4;
    u16 reserved5;
    u16 reserved6;
    u16 nodeCount;
    u16 rowCount;
    u32 b0 : 6;
    u32 b6 : 6;
    u32 b12 : 6;
    u32 b18 : 6;
    u32 b24 : 1;
    u32 b25 : 7;
    u32 reserved7;
    u32 reserved8;
    u32 reserved9;
    u16 reserved10;
    u16 reserved11;
};
typedef struct SPLList SPLList;
typedef struct SPLNode SPLNode;
extern void func_0209def8(SPLList *list, SPLNode *node);
extern struct VramNodeHeap *func_020988f4(AllocFn alloc, u16 n1, u16 n2, u16 limitA, u16 limitB, u16 maxResIndex);
struct VramNodeBlob9C {
    u8 b[0x9c];
};
struct VramRowBlob44 {
    u8 b[0x44];
};
extern void func_020d4994(void *dest, u8 data, u32 size);
extern void func_0209def8(SPLList *list, SPLNode *node);
extern struct VramNodeHeap *func_020988f4(AllocFn alloc, u16 n1, u16 n2, u16 limitA, u16 limitB, u16 maxResIndex);
void func_0209def8(SPLList *list, SPLNode *node);
extern u32 (*const func_02054A68_Hooks[])(s32, s32, void *);
extern u32 (*const func_02054A68_Hooks2[])(s32, s32, s32, s32);
extern u32 (*const func_02054718_Hooks[])(s32, s32, void *);
extern u32 (*const func_02054718_Hooks2[])(s32, s32, s32, s32);
extern u32 (*const func_0205429C_Hooks[])(s32, s32, void *);
extern u32 (*const func_0205429C_Hooks2[])(s32, s32, s32, s32);
extern u32 (*const func_02053E1C_Hooks[])(s32, s32, void *);
extern u32 (*const func_02053E1C_Hooks2[])(s32, s32, s32, s32);
struct VramNodeHeap *func_020988f4(AllocFn alloc, u16 n1, u16 n2, u16 limitA, u16 limitB, u16 maxResIndex) {
    struct VramNodeHeap *h;
    struct VramNodeBlob9C *p;
    struct VramRowBlob44 *q;
    int i;

    h = alloc(sizeof(struct VramNodeHeap));
    func_020d4994(h, 0, sizeof(struct VramNodeHeap));
    h->nodeCount     = n1;
    h->rowCount      = n2;
    h->b0            = limitB;
    h->b6            = maxResIndex;
    h->b12           = h->b0;
    h->b18           = limitA;
    h->b24           = 0;
    h->b25           = 0;
    h->alloc         = alloc;
    h->effectCount   = 0;
    h->nodeListCount = 0;
    h->rowListCount  = 0;
    h->reserved0     = 0;
    h->nodeListFirst = 0;
    h->rowListFirst  = 0;
    h->reserved7     = 0;
    h->reserved10    = 0;

    p = alloc(n1 * sizeof(struct VramNodeBlob9C));
    func_020d4994(p, 0, n1 * sizeof(struct VramNodeBlob9C));
    for (i = 0; i < n1; i++) {
        func_0209def8((SPLList *) (&h->nodeListFirst), (SPLNode *) (&p[i]));
    }

    q = alloc(n2 * sizeof(struct VramRowBlob44));
    func_020d4994(q, 0, n2 * sizeof(struct VramRowBlob44));
    for (i = 0; i < n2; i++) {
        func_0209def8((SPLList *) (&h->rowListFirst), (SPLNode *) (&q[i]));
    }

    h->reserved3 = 0;
    h->reserved4 = 0;
    h->reserved5 = h->reserved6 = 0;
    return h;
}
