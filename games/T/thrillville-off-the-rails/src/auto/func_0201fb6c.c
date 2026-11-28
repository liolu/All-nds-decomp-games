/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* IsSendEnabled from https://github.com/ntrtwl/NitroSDK libraries/mb/src/mb_wm.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
extern const u16(*ctrdgi_fl_maxtime);
typedef void (*MBWMCallbackFunc)(u16 type, void *arg);
typedef struct {
    MBWMCallbackFunc mpCallback;
    u32 *sendBuf;
    u32 *recvBuf;
    BOOL start_mp_busy;
    u16 sendBufSize;
    u16 recvBufSize;
    u16 pSendLen;
    u16 pRecvLen;
    u16 blockSizeMax;
    u16 mpStarted;
    u16 endReq;
    u16 child_bitmap;
    u16 mpBusy;
    u8 _padding[2];
} MBWMWork;
extern BOOL func_0201fb6c(void);
extern MBWMWork *data_020ec2cc;
BOOL func_0201fb6c(void) {
    return (data_020ec2cc->mpStarted == 1) && (data_020ec2cc->mpBusy == 0) && (data_020ec2cc->endReq == 0);
}
