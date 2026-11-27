/* compiler: 2.0/sp1p5  */
/* NNS_FndSetAllocModeForExpHeap from projets/lego-star-wars-ii-the-original-trilogy/src/auto/NNS_FndSetAllocModeForExpHeap.c
 * (same code in another game of this workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef struct UnkExpHeapHead {
    u8 unk_00[0x10];
    u16 unk_10;
    u16 unk_12;
} UnkExpHeapHead;
typedef struct UnkExpHeap {
    u8 unk_00[0x24];
    UnkExpHeapHead unk_24;
} UnkExpHeap;
u16 func_020af04c(UnkExpHeap *heap, u32 mode) {
    UnkExpHeapHead *exp = &heap->unk_24;
    u16 old             = (((exp->unk_12) >> (0)) & ((1 << (1)) - 1));
    do {
        (exp->unk_12) &= ~(((1 << (1)) - 1) << (0));
        (exp->unk_12) |= ((mode) & ((1 << (1)) - 1)) << (0);
    } while (0);
    return old;
}
