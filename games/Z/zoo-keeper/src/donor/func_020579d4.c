/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* MbParent_PortCallback from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/mb/mb_parent_ind_callback.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct RadioNotice {
    u16 apiid;
    u16 errcode;
    u16 state;
    u16 reason;
} RadioNotice;
typedef struct WMGameInfo {
    u16 magicNumber;
    u8 ver;
    u8 platform;
    u32 ggid;
    u16 tgid;
    u8 userGameInfoLength;
    u8 attribute;
    u16 parentMaxSize;
    u16 childMaxSize;
    u8 userGameInfo[112];
} WMGameInfo;
typedef struct WMBssDesc {
    u16 length;
    u16 rssi;
    u8 bssid[6];
    u16 ssidLength;
    u8 ssid[32];
    u16 capaInfo;
    u16 rateSetBasic;
    u16 rateSetSupport;
    u16 beaconPeriod;
    u16 dtimPeriod;
    u16 channel;
    u16 cfpPeriod;
    u16 cfpMaxDuration;
    u16 gameInfoLength;
    u16 otherElementCount;
    WMGameInfo gameInfo;
} WMBssDesc;
typedef struct WMStartScanCallback {
    u16 apiid;
    u16 errcode;
    u16 wlCmdID;
    u16 wlResult;
    u16 state;
    u8 macAddress[6];
    u16 channel;
    u16 linkLevel;
    u16 ssidLength;
    u8 ssid[32];
    u16 gameInfoLength;
    WMGameInfo gameInfo;
} WMStartScanCallback;
typedef void (*WMCallbackFunc)(void *arg);
typedef struct DlPlayScannedHost {
    WMBssDesc bssDesc;
    WMStartScanCallback scan;
    u8 pad_178[8];
} DlPlayScannedHost;
typedef struct DlPlayStationArea {
    u8 pad_00[0x08];
    u32 ggid;
    u16 unk_0c;
    u16 unk_0e;
    u16 maxChildren;
    u16 unk_12;
    u16 unk_14;
    u16 unk_16;
    u16 beaconPeriod;
    u8 pad_1a[0x32 - 0x1a];
    u16 channel;
    u16 parentMaxSize;
    u16 childMaxSize;
    u8 pad_38[0x40 - 0x38];
    u16 mpSendBuffer[2];
    u8 pad_44[0x320 - 0x44];
    u32 unk_320;
    u8 pad_324[0x440 - 0x324];
    WMBssDesc scanBuffer;
    u16 sendSize;
    u16 unk_502;
    u16 *mpRecvBuffer;
    WMCallbackFunc wmCallback;
    u8 sendQueued;
    u8 started;
    u8 pad_50e[0x518 - 0x50e];
    u16 mpSendSize;
    u16 mpRecvSize;
    void (*callback)(u32 type, void *arg);
    WMBssDesc *connectBssDesc;
    u16 unk_524;
    u16 unk_526;
    u16 unk_528;
    u16 unk_52a;
    u16 unk_52c;
    u8 pad_52e[2];
    u16 userName[4];
    u16 unk_538[8];
    u16 unk_548;
    u8 pad_54a[0x5e0 - 0x54a];
    u16 foundCount;
    u16 aid;
    u32 unk_5e4;
    u32 scanAllChannels;
    u32 lastFoundIndex;
    u8 pad_5f0[0x600 - 0x5f0];
    DlPlayScannedHost found[16];
} DlPlayStationArea;
extern DlPlayStationArea *data_0206ef98;
void func_020579d4(RadioNotice *ind) {
    if (ind->errcode != 0) {
        return;
    }
    switch (ind->state) {
        case 7:
        case 9:
            break;
        case 21:
            data_0206ef98->callback(9, ind);
            break;
    }
}
