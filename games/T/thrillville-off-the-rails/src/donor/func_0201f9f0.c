/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0201d924 from projets/code-lyoko/src/donor/func_0201d924.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
extern void func_02022e48(const void *startAddr, u32 nBytes);
extern void func_02022e6c(void);
typedef enum WMPort {
    WM_PORT_RAWDATA    = 0,
    WM_PORT_BT         = 1,
    WM_PORT_RESERVE_02 = 2,
    WM_PORT_RESERVE_03 = 3,
    WM_PORT_RESERVE_10 = 8,
    WM_PORT_RESERVE_11 = 9,
    WM_PORT_RESERVE_12 = 10,
    WM_PORT_RESERVE_13 = 11
} WMPort;
typedef enum WMPriorityLevel {
    WM_PRIORITY_URGENT = 0,
    WM_PRIORITY_HIGH,
    WM_PRIORITY_NORMAL,
    WM_PRIORITY_LOW
} WMPriorityLevel;
typedef enum WMErrCode {
    WM_ERRCODE_SUCCESS            = 0,
    WM_ERRCODE_FAILED             = 1,
    WM_ERRCODE_OPERATING          = 2,
    WM_ERRCODE_ILLEGAL_STATE      = 3,
    WM_ERRCODE_WM_DISABLE         = 4,
    WM_ERRCODE_NO_KEYSET          = 5,
    WM_ERRCODE_NO_DATASET         = 5,
    WM_ERRCODE_INVALID_PARAM      = 6,
    WM_ERRCODE_NO_CHILD           = 7,
    WM_ERRCODE_FIFO_ERROR         = 8,
    WM_ERRCODE_TIMEOUT            = 9,
    WM_ERRCODE_SEND_QUEUE_FULL    = 10,
    WM_ERRCODE_NO_ENTRY           = 11,
    WM_ERRCODE_OVER_MAX_ENTRY     = 12,
    WM_ERRCODE_INVALID_POLLBITMAP = 13,
    WM_ERRCODE_NO_DATA            = 14,
    WM_ERRCODE_SEND_FAILED        = 15,
    WM_ERRCODE_DCF_TEST,
    WM_ERRCODE_WL_INVALID_PARAM,
    WM_ERRCODE_WL_LENGTH_ERR,
    WM_ERRCODE_FLASH_ERROR,
    WM_ERRCODE_MAX
} WMErrCode;
typedef void (*WMCallbackFunc)(void *arg);
extern WMErrCode func_0202c010(WMCallbackFunc callback, void *arg, const u16 *sendData, u16 sendDataSize, u16 destBitmap,
                               u16 port, u16 prio);
static inline WMErrCode WM_SetMPDataToPort(WMCallbackFunc callback, const u16 *sendData, u16 sendDataSize, u16 destBitmap,
                                           u16 port, u16 prio) {
    return func_0202c010(callback, 0, sendData, sendDataSize, destBitmap, port, prio);
}
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
extern WMErrCode func_0201f9f0(u32 body_len, u16 pollbmp, u32 *sendbuf);
extern BOOL func_0201fb6c(void);
extern void func_0201f938(void *arg);
extern MBWMWork *data_020ec2cc;
extern BOOL func_0201fb6c(void);
WMErrCode func_0201f9f0(u32 body_len, u16 pollbmp, u32 *sendbuf) {
    WMErrCode result;

    ((void) 0);

    func_02022e48(sendbuf, sizeof(body_len));
    func_02022e6c();

    if (!func_0201fb6c()) {
        return WM_ERRCODE_FAILED;
    }

    result = WM_SetMPDataToPort(func_0201f938, (u16 *) sendbuf, (u16) body_len, pollbmp, WM_PORT_BT, WM_PRIORITY_LOW);
    if (result != WM_ERRCODE_OPERATING) {
        return result;
    }

    data_020ec2cc->mpBusy = 1;
    return WM_ERRCODE_OPERATING;
}
extern void func_0201f938(void *arg);
