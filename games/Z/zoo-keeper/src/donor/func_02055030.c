/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02007ec4 from https://github.com/ai-tdd-labs/mkds-decomp ai/scratch/agent_02007ec4.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct SharedDataRecord {
    u8 prefix[0x0c];
    u16 packedValueLow;
    u16 packedValueHigh;
    u16 copiedValue;
    u8 payloadTail[0x2a];
    u16 headerSize;
    u8 unknown_3e[6];
    u32 packedValue;
    u16 copiedValueMirror;
    u8 status;
    u8 options;
    u16 primaryLimit;
    u16 secondaryLimit;
} SharedDataRecord;
extern void func_0204aac8(const void *source, void *destination, u32 size);
void func_02055030(SharedDataRecord *record, u16 primaryLimit, u16 secondaryLimit, int enableOption4, int enableOption8) {
    volatile u16 *sharedData = (volatile u16 *) 0x027ffc40;
    const void *source       = (*sharedData == 2) ? (const void *) (sharedData + 1) : 0;

    func_0204aac8(source, record, 0x3c);

    record->headerSize        = 0x10;
    record->packedValue       = record->packedValueLow | ((u32) record->packedValueHigh << 16);
    record->copiedValueMirror = record->copiedValue;
    record->status            = 0;
    record->primaryLimit      = primaryLimit;
    record->secondaryLimit    = secondaryLimit;
    record->options           = (enableOption4 ? 4 : 0) | (enableOption8 ? 8 : 0) | 1;
}
