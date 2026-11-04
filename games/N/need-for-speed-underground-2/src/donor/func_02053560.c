/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_MOV_WH_SetGgid from https://github.com/Project-Holon/aletheia src/game/ov016/dwc_mov_wh.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
struct DWC_MOV_WH_BSS {
    void (*wh_trace)();
    struct WHWork *wh;
};
typedef struct WHWork {
    int f_00;
    unsigned short f_04;
    char pad_06[0x0C - 0x06];
    unsigned short tgid;
    unsigned short f_0E;
    unsigned short f_10;
    unsigned short f_12;
    unsigned short f_14;
    unsigned short f_16;
    unsigned short f_18;
    char pad_1A[0x32 - 0x1A];
    unsigned short pchannel;
    unsigned short f_34;
    unsigned short f_36;
    char pad_38[0x40 - 0x38];
    int sysState;
    int connectMode;
    int f_48;
    int (*judgeAcceptFunc)(void *cb);
    unsigned short f_50;
    unsigned short bitmap;
    int f_54;
    unsigned long randSeed;
    unsigned short channel;
    unsigned short minBusyRatio;
    unsigned short busyChannelBitmap;
    char pad_62[0xF80 - 0x62];
    unsigned short sendBuf[0x70];
    unsigned short recvBuf[0x120];
    int sendBufSize;
    int recvBufSize;
    char pad_12A8[0x13A8 - 0x12A8];
    int f_13A8;
    unsigned short (*parentWEPKeyGenerator)(unsigned short *wepkey, void *param);
    int f_13B0;
    char pad_13B4[0x0C];
    unsigned short wepkey[0x10];
    char dsInfo[0x1C00 - 0x13E0];
    char receiveData[1];
} WHWork;
typedef struct {
    void (*wh_trace)(int level, const char *fmt, ...);
    WHWork *wh;
} DWC_MOV_WH_BSS;
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct {
    u32 reserved00;
    u16 reserved04;
    u8 pad0[0x48 - 6];
    u32 reserved48;
    u32 reserved4c;
    u16 reserved50;
    u16 reserved52;
    u32 reserved54;
    u8 pad1[0x12a0 - 0x58];
    u32 reserved12a0;
    u32 reserved12a4;
} Wh;
extern void func_02053560(unsigned int v);
extern struct DWC_MOV_WH_BSS data_021751e0;
void func_02053560(unsigned int v) {
    WHWork *q                              = data_021751e0.wh;
    ((unsigned int *) ((char *) q + 4))[1] = v;
}
extern Wh *wh;
