/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* init from projets/blue-dragon-awakened-shadow/src/donor/init.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef int BOOL;
extern void func_0200745c(u16 data, void *destp, u32 size);
static inline void MI_CpuFill16(void *dest, u16 data, u32 size) {
    ((void) 0);
    ((void) 0);

    func_0200745c(data, dest, size);
}
static inline void MI_CpuClear16(void *dest, u32 size) {
    MI_CpuFill16(dest, 0, size);
}
extern void func_0200766c(const void *src, void *dest, u32 size);
extern const u16(*ctrdgi_fl_maxtime);
typedef struct DWCBMApInfo {
    u8 ispId[32];
    u8 ispPass[32];
    u8 ssid[2][32];
    u8 wep[4][16];
    u8 ip[4];
    u8 gateway[4];
    u8 dns[2][4];
    u8 netmask;
    u8 wep2[4][5];
    u8 authType;
    u8 wepMode : 2;
    u8 wepNotation : 6;
    u8 setType;
    u8 rsv[7];
    u8 state;
} DWCBMApInfo;
typedef struct DWCMemPage {
    DWCBMApInfo ap;
    u8 wifi[14];
    u16 crc;
} DWCMemPage;
typedef struct DWCMemMap {
    DWCMemPage page[4];
} DWCMemMap;
typedef struct DWCWiFiInfo {
    u64 attestedUserId;
    u64 notAttestedId;
    u16 pass;
    u16 randomHistory;
} DWCWiFiInfo;
enum DWCSetType {
    DWC_SETTYPE_MANUAL,
    DWC_SETTYPE_AOSS,
    DWC_SETTYPE_EASY,
    DWC_SETTYPE_NONE = 0xFF,
};
extern const u8 *func_020922a8(const DWCWiFiInfo *info);
extern BOOL func_020929ac(DWCWiFiInfo *wifiinfo);
extern int func_0209277c(DWCMemMap *mm);
int func_0209277c(DWCMemMap *mm) {
    DWCWiFiInfo info;

    MI_CpuClear16(mm, sizeof(DWCMemMap));

    for (int i = 0; i < 3; i++) {
        mm->page[i].ap.setType = DWC_SETTYPE_NONE;
    }

    func_020929ac(&info);
    u8 *addr = func_020922a8(&info);

    for (int i = 0; i < 2; i++) {
        func_0200766c(addr, &mm->page[i].wifi, sizeof(mm->page[i].wifi));
    }

    return 0;
}
