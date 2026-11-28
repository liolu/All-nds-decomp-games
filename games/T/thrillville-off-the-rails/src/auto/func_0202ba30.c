/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207d440 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/wm/wm_sta.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef void (*UnkWmCallbackFunc)(void *arg);
extern void func_0202aeb0(u32 id, UnkWmCallbackFunc callback);
extern u32 func_0202ad0c(void *data, u32 length);
extern u32 func_0202abdc(s32 paramNum, ...);
typedef struct UnkWmScanParam {
    void *scanBuf;
    u16 channel;
    u16 maxChannelTime;
    u8 bssid[6];
} UnkWmScanParam;
typedef struct UnkWmStartScanReq {
    u16 apiid;
    u16 channel;
    void *scanBuf;
    u16 maxChannelTime;
    u8 bssid[6];
} UnkWmStartScanReq;
u32 func_0202ba30(UnkWmCallbackFunc callback, UnkWmScanParam *param) {
    UnkWmStartScanReq req;
    u32 result = func_0202abdc(3, 2, 3, 5);

    if (result != 0) {
        return result;
    }
    if (param == 0) {
        return 6;
    }
    if (param->scanBuf == 0) {
        return 6;
    }
    if (param->channel < 1 || param->channel > 14) {
        return 6;
    }

    func_0202aeb0(10, callback);
    req.apiid          = 10;
    req.channel        = param->channel;
    req.scanBuf        = param->scanBuf;
    req.maxChannelTime = param->maxChannelTime;
    req.bssid[0]       = param->bssid[0];
    req.bssid[1]       = param->bssid[1];
    req.bssid[2]       = param->bssid[2];
    req.bssid[3]       = param->bssid[3];
    req.bssid[4]       = param->bssid[4];
    req.bssid[5]       = param->bssid[5];
    result             = func_0202ad0c(&req, sizeof(UnkWmStartScanReq));
    if (result != 0) {
        return result;
    }
    return 2;
}
