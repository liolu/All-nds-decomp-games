/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* WDS_GetApInfoAll from https://github.com/Project-Holon/aletheia src/game/arm9/dwc_ac_wds.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct WMGameInfo {
    unsigned short magicNumber;
    unsigned char ver;
    unsigned char platform;
    unsigned long ggid;
    unsigned short tgid;
    unsigned char userGameInfoLength;
    unsigned char attribute;
    unsigned short parentMaxSize;
    unsigned short childMaxSize;
    unsigned char userGameInfo[0x70];
} WMGameInfo;
typedef struct WMBssDesc {
    u16 length;
    u16 rssi;
    u8 bssid[6];
    u16 ssidLength;
    u8 ssid[32];
    u16 capaInfo;
    struct {
        u16 basic;
        u16 support;
    } rateSet;
    u16 beaconPeriod;
    u16 dtimPeriod;
    u16 channel;
    u16 cfpPeriod;
    u16 cfpMaxDuration;
    u16 gameInfoLength;
    u16 otherElementCount;
    WMGameInfo gameInfo;
} WMBssDesc;
typedef struct WMScanExParam {
    WMBssDesc *scanBuf;
    unsigned short scanBufSize;
    unsigned short channelList;
    unsigned short maxChannelTime;
    unsigned char bssid[6];
    unsigned short scanType;
    unsigned short ssidLength;
    unsigned char ssid[32];
    unsigned short ssidMatchLength;
    unsigned char rsv[14];
} WMScanExParam;
typedef struct MATHCRC16Table {
    u16 table[256];
} MATHCRC16Table;
typedef struct CRYPTORC4Context {
    u8 i;
    u8 j;
    u8 padding[2];
    u8 s[256];
} CRYPTORC4Context;
typedef struct WDSApInfo {
    u8 ssid[32];
    u8 apnum[10];
    u16 hotspotid;
    u8 hotspotname[24];
    u8 wepkey[32];
    u8 channel;
    u8 encryptflag;
    u8 infoflag;
    u8 reserve[5];
    u16 mtu;
    u16 crc;
} WDSApInfo;
typedef struct WDSBriefApInfo {
    int isvalid;
    u16 rssi;
    WDSApInfo apinfo;
} WDSBriefApInfo;
extern int func_02047760(int index, WDSBriefApInfo *briefapinfo);
extern int func_020477fc(WDSBriefApInfo *briefapinfo);
typedef struct WDSWork {
    unsigned char wmwork[3840];
    unsigned char scanbuf[1024];
    WMScanExParam scanparam;
    void (*scancb)(void *);
    WDSApInfo apinfo[16];
    unsigned short rssi[16];
    unsigned short tgid[16];
    long apnum;
    long apindex;
    unsigned long status;
    unsigned short crcContext;
    MATHCRC16Table crcTable;
    CRYPTORC4Context rc4context;
} WDSWork;
extern void MI_CpuFill8(void *dest, u8 data, u32 size);
extern int func_02047760(int index, WDSBriefApInfo *briefapinfo);
extern int func_020477fc(WDSBriefApInfo *briefapinfo);
extern WDSWork *data_0210e644;
int func_02047760(int index, WDSBriefApInfo *briefapinfo);
int func_020477fc(WDSBriefApInfo *briefapinfo) {
    int index;

    if (data_0210e644->status != 2) {
        return -1;
    }
    MI_CpuFill8(briefapinfo, 0, sizeof(WDSBriefApInfo) * 16);
    for (index = 0; index < 16; index++) {
        briefapinfo[index].isvalid = 0;
    }
    for (index = 0; index < data_0210e644->apnum; index++) {
        if (func_02047760(index, &briefapinfo[index]) == -1) {
            break;
        }
    }
    return 0;
}
