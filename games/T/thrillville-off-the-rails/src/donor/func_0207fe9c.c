/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GetSymbol from https://github.com/RonyxDumb/mkds src/arm9/0212d328_Sound_GetGroupInfoEntry.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef struct NNSSndArcOffsetTable {
    u32 count;
    u32 offset[0];
} NNSSndArcOffsetTable;
extern const char data_020df65c;
extern const char *func_0207fe9c(const NNSSndArcOffsetTable *table, int index, const void *base);
extern const void *GetPtrConst(const void *base, u32 offset);
static inline const void *GetPtrConst(const void *base, u32 offset) {
    if (offset == 0) {
        return ((void *) 0);
    }
    return (const u8 *) base + offset;
}
const char *func_0207fe9c(const NNSSndArcOffsetTable *table, int index, const void *base) {
    if (index < 0) {
        return &data_020df65c;
    }
    if (index >= table->count) {
        return &data_020df65c;
    }

    if (table->offset[index] == 0) {
        return &data_020df65c;
    }

    return (const char *) GetPtrConst(base, table->offset[index]);
}
