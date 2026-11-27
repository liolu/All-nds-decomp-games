/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_SndArcGetSeqParam from https://github.com/Project-Holon/aletheia src/game/arm9/nns_snd_arc.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct NNSSndArcSeqInfo {
    u32 fileId;
    u16 bankNo;
} NNSSndArcSeqInfo;
extern u8 *func_020c9644(int entryNo);
extern NNSSndArcSeqInfo *func_020c965c(int entryNo);
u8 *func_020c9644(int entryNo) {
    void *ptr = func_020c965c(entryNo);
    if (ptr == 0) {
        return 0;
    }
    return (u8 *) ptr + 4;
}
NNSSndArcSeqInfo *func_020c965c(int entryNo);
