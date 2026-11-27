/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* GFL_NET_IsSendQueueEntryOfHandle from https://github.com/Project-Holon/aletheia src/game/arm9/net.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct NetMemberRec {
    u8 ownMac[6];
    u8 peerMac[6];
    u8 netID;
    u8 active;
    u8 peerKey;
    u8 ownKey;
} NetMemberRec;
typedef struct NetTimingReq {
    u8 timingNo;
    u8 armed;
} NetTimingReq;
typedef struct GFLNetHandle {
    void *workBuf;
    u32 workSize;
    NetMemberRec *memberRec[9];
    NetTimingReq timingReq[8];
    u8 reserved3C[2];
    u16 notifiedMask;
    u16 memberMask;
    u8 reserved42[2];
    u16 connectFlags;
    u16 tag;
    u8 netID;
    u8 isRemote;
    u8 state;
    u8 pad4B[3];
    u8 joinPhase;
    u8 pad4F;
} GFLNetHandle;
extern int _s32_div_f(u32 command, u32 destNetId);
extern int func_0208f420(GFLNetHandle *handle);
extern int func_0208f400(GFLNetHandle *handle, u32 command);
int func_0208f400(GFLNetHandle *handle, u32 command) {
    u32 aid = func_0208f420(handle);

    return _s32_div_f(command, aid);
}
