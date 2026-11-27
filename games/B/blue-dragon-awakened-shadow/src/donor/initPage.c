/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* initPage from https://github.com/ntrtwl/NitroDWC libraries/bm/src/dwc_bm_init.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
extern void MIi_CpuClear16(u16 data, void *destp, u32 size);
static inline void MI_CpuFill16(void *dest, u16 data, u32 size) {
    ((void) 0);
    ((void) 0);

    MIi_CpuClear16(data, dest, size);
}
static inline void MI_CpuClear16(void *dest, u32 size) {
    MI_CpuFill16(dest, 0, size);
}
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
enum DWCSetType {
    DWC_SETTYPE_MANUAL,
    DWC_SETTYPE_AOSS,
    DWC_SETTYPE_EASY,
    DWC_SETTYPE_NONE = 0xFF,
};
extern void initPage(DWCMemMap *mm, int page);
void initPage(DWCMemMap *mm, int page) {
    MI_CpuClear16(&mm->page[page], sizeof(DWCMemPage));
    mm->page[page].ap.setType = DWC_SETTYPE_NONE;
}
