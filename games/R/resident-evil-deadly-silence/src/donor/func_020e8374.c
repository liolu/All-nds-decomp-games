/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02085740 from https://github.com/watamelonman/smtsj-decomp libs/CRI/cri_0208539c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
typedef unsigned char u8;
typedef signed char s8;
void func_020e8788(void);
void func_020e877c(void);
typedef struct Unk0208539cRecord {
    s8 unk_000;
    s8 unk_001;
    u8 padding_002[2];
    s32 unk_004;
    s32 unk_008;
    s32 unk_00c;
    s32 unk_010;
    s32 unk_014;
    s32 unk_018;
    char text[28];
} Unk0208539cRecord;
void func_020e8720(u32 value, u32 argument);
extern const char data_021312d8[];
s32 func_020e8374(Unk0208539cRecord *record, s32 offset, s32 origin) {
    if (record == 0) {
        func_020e8720(0, (u32) data_021312d8);
        return 0;
    }
    func_020e8788();
    if (origin == 0) {
        record->unk_010 = offset;
    } else if (origin == 2) {
        record->unk_010 = record->unk_00c + offset;
    } else if (origin == 1) {
        record->unk_010 += offset;
    }
    record->unk_010 = record->unk_010 < record->unk_00c ? record->unk_010 : record->unk_00c;
    record->unk_010 = record->unk_010 > 0 ? record->unk_010 : 0;
    func_020e877c();
    return record->unk_010;
}
