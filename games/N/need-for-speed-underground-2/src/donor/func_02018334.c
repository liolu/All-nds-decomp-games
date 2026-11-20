/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* Sound_GetBankIDFromSequenceID from https://github.com/taxicat1/pl-mpr-client src/sound.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
extern const u16(*ctrdgi_fl_maxtime);
typedef struct NNSSndSeqParam {
    u16 bankNo;
    u8 volume;
    u8 channelPrio;
    u8 playerPrio;
    u8 playerNo;
    u16 reserved;
} NNSSndSeqParam;
extern const NNSSndSeqParam *func_02018394(int seqNo);
extern u16 func_02018334(int seqID);
u16 func_02018334(int seqID) {
    const NNSSndSeqParam *param = func_02018394(seqID);
    if (param == 0) {
        return 0;
    }

    return param->bankNo;
}
