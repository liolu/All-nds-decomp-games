/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CompareList from https://github.com/Project-Holon/aletheia src/game/arm9/dwc_ac_beacon.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
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
typedef struct {
    unsigned char find : 4;
    unsigned char duplicate : 4;
    unsigned char type;
    unsigned char channel;
    unsigned char length;
    unsigned char ssid[32];
} ACSL;
extern int func_02044db0(WMBssDesc *bssdesc);
extern int strncmp(const char *s1, const char *s2, unsigned long n) __attribute__((pure));
extern int func_02044e44(WMBssDesc *bssdesc, unsigned char num, ACSL *list);
int func_02044db0(WMBssDesc *bssdesc);
int func_02044e44(WMBssDesc *bssdesc, unsigned char num, ACSL *list) {
    int i;
    int type;

    if (bssdesc->ssidLength == 32 && (type = func_02044db0(bssdesc)) > 0) {
        return type;
    }
    for (i = 0; i < num; i++, list++) {
        if ((unsigned char) bssdesc->ssidLength == list->length &&
            strncmp((char *) bssdesc->ssid, (char *) list->ssid, bssdesc->ssidLength) == 0) {
            return list->type;
        }
    }
    return -1;
}
