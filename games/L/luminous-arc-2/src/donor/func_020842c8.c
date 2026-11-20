/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWC_GetApInfo from https://github.com/ntrtwl/NitroDWC libraries/base/src/dwc_connectinet.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
typedef u32 OSIntrMode;
extern OSIntrMode func_02006be0(void);
extern OSIntrMode func_02006bf4(OSIntrMode state);
extern void func_020075b0(void *dest, u8 data, u32 size);
extern void func_0200766c(const void *src, void *dest, u32 size);
static inline void MI_CpuClear8(void *dest, u32 size) {
    func_020075b0(dest, 0, size);
}
extern void func_02005aac(void *startAddr, u32 nBytes);
extern const u16(*ctrdgi_fl_maxtime);
enum {
    DWC_AC_AP_TYPE_USER1,
    DWC_AC_AP_TYPE_USER2,
    DWC_AC_AP_TYPE_USER3,
    DWC_AC_AP_TYPE_USB,
    DWC_AC_AP_TYPE_SHOP,
    DWC_AC_AP_TYPE_FREESPOT,
    DWC_AC_AP_TYPE_WAYPORT,
    DWC_AC_AP_TYPE_NINTENDOWFC,
    DWC_AC_AP_TYPE_NINTENDOSPOT,
    DWC_AC_AP_TYPE_UNKNOWN = 99,
    DWC_AC_AP_TYPE_FALSE   = 0xff
};
extern u8 func_0207b620(void);
extern BOOL func_0207b650(u8 *apSpotInfo);
typedef enum {
    DWC_CONNECTINET_STATE_NOT_INITIALIZED = 0,
    DWC_CONNECTINET_STATE_IDLE,
    DWC_CONNECTINET_STATE_OPERATING,
    DWC_CONNECTINET_STATE_OPERATED,
    DWC_CONNECTINET_STATE_CONNECTED,
    DWC_CONNECTINET_STATE_DISCONNECTING,
    DWC_CONNECTINET_STATE_DISCONNECTED,
    DWC_CONNECTINET_STATE_ERROR,
    DWC_CONNECTINET_STATE_FATAL_ERROR,
    DWC_CONNECTINET_STATE_LAST
} DWCInetResult;
typedef enum {
    DWC_APINFO_AREA_JPN = 0,
    DWC_APINFO_AREA_USA,
    DWC_APINFO_AREA_EUR,
    DWC_APINFO_AREA_AUS,
    DWC_APINFO_AREA_KOR,
    DWC_APINFO_AREA_UNKNOWN = 0xff
} DWCApInfoArea;
typedef enum {
    DWC_APINFO_TYPE_USER0 = 0,
    DWC_APINFO_TYPE_USER1,
    DWC_APINFO_TYPE_USER2,
    DWC_APINFO_TYPE_USB,
    DWC_APINFO_TYPE_SHOP,
    DWC_APINFO_TYPE_FREESPOT,
    DWC_APINFO_TYPE_WAYPORT,
    DWC_APINFO_TYPE_OTHER,
    DWC_APINFO_TYPE_NINTENDOWFC = DWC_APINFO_TYPE_OTHER,
    DWC_APINFO_TYPE_NINTENDOSPOT,
    DWC_APINFO_TYPE_UNKNOWN = 99
} DWCApInfoType;
typedef struct DWCstApInfo {
    DWCApInfoType aptype;
    DWCApInfoArea area;
    char spotinfo[9 + 1];
    char essid[32 + 1];
    u8 bssid[6];
} DWCApInfo;
extern BOOL func_020842c8(DWCApInfo *apinfo);
extern DWCInetResult func_02083f6c(void);
extern u32(SOC_NtoHl)(u32 netlong);
extern u16(SOC_NtoHs)(u16 netshort);
extern u32(SOC_HtoNl)(u32 hostlong);
extern u16(SOC_HtoNs)(u16 hostshort);
DWCInetResult func_02083f6c(void);
extern u8 *func_02095530(void);
extern u8 *func_02095574(u16 *length);
BOOL func_020842c8(DWCApInfo *apinfo) {
    OSIntrMode preirq;
    unsigned char *wcmapbssid;
    unsigned char *wcmapessid;
    unsigned short essidlen;
    u8 apSpotInfo[10];

    MI_CpuClear8(apinfo, sizeof(DWCApInfo));
    apinfo->area = DWC_APINFO_AREA_UNKNOWN;

    if (func_02083f6c() != DWC_CONNECTINET_STATE_CONNECTED) {
        return 0;
    }

    apinfo->aptype = (DWCApInfoType) func_0207b620();
    if (apinfo->aptype == DWC_AC_AP_TYPE_FALSE || apinfo->aptype > DWC_AC_AP_TYPE_UNKNOWN) {
        apinfo->aptype = (DWCApInfoType) DWC_AC_AP_TYPE_UNKNOWN;
        return 0;
    }

    preirq     = func_02006be0();
    wcmapbssid = func_02095530();
    func_02005aac(wcmapbssid, 6);

    if (wcmapbssid == 0) {
        preirq = func_02006bf4(preirq);
        return 0;
    }

    func_0200766c(wcmapbssid, apinfo->bssid, 6);

    if (apinfo->aptype >= 0 && apinfo->aptype < 3) {
        wcmapessid = func_02095574(&essidlen);
        func_02005aac(wcmapessid, 32);

        if (wcmapessid == 0) {
            preirq = func_02006bf4(preirq);
            return 0;
        }

        func_0200766c(wcmapessid, apinfo->essid, essidlen);
    }

    preirq = func_02006bf4(preirq);

    if (func_0207b650(apSpotInfo)) {
        apinfo->area =
            (apSpotInfo[0] >= '0' && apSpotInfo[0] <= '9') ? (DWCApInfoArea) (apSpotInfo[0] - '0') : DWC_APINFO_AREA_UNKNOWN;
        func_0200766c(&apSpotInfo[1], apinfo->spotinfo, 9);
    } else {
        apinfo->area = DWC_APINFO_AREA_UNKNOWN;
    }

    return 1;
}
