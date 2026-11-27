/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0209e508 from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroDWC/src/dwc_bm.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
typedef unsigned long long int u64;
typedef int BOOL;
extern void func_020d4a50(const void *src, void *dst, u32 size);
typedef struct MATHCRC16Table {
    u16 table[256];
} MATHCRC16Table;
extern void func_020e389c(MATHCRC16Table *table, u16 poly);
extern void func_020d3f48();
extern void func_020d3f48(void);
typedef __typeof__(sizeof(0)) size_t;
typedef struct DwcBackupPage {
    u8 unk_00[0x40];
    u8 ssid[32];
    u8 unk_60[0x60];
    u8 ip[4];
    u8 gateway[4];
    u8 dns[2][4];
    u8 subnetMaskLen;
    u8 unk_D1[0x16];
    u8 state;
    u8 unk_E8[7];
    u8 apSetUp;
    u8 wifiInfo[14];
    u16 crc;
} DwcBackupPage;
typedef struct DwcBackupPageWork {
    DwcBackupPage page;
    u8 verifyBuffer[0x100];
    MATHCRC16Table crcTable;
} DwcBackupPageWork;
typedef struct DwcWiFiInfo {
    u64 userId;
    u64 pseudoUserId;
    u16 random;
    u16 salt;
} DwcWiFiInfo;
typedef struct DwcBmNvramState {
    volatile u16 error;
    u16 pad;
    volatile s32 ready;
    u32 backupAddress;
} DwcBmNvramState;
extern DwcBmNvramState data_021d43e8;
extern u8 data_021d43f4[];
extern u16 func_020e3a04(const MATHCRC16Table *table, const void *data, u32 dataLength);
extern BOOL func_0209e508(const DwcWiFiInfo *info, DwcBackupPageWork *work);
extern BOOL func_0209ed38(u32 address, u32 size, void *dst);
extern void func_0209edc8(u32 address, u32 size, void *src);
extern BOOL func_0209ee44(void *expected, u32 address, u32 size, void *scratch);
extern BOOL func_0209ee90(void);
extern u8 *func_0209ef2c(const DwcWiFiInfo *info);
BOOL func_0209e508(const DwcWiFiInfo *info, DwcBackupPageWork *work) {
    int i;
    u32 address = data_021d43e8.backupAddress;

    func_0209ef2c(info);
    func_020e389c(&work->crcTable, 0xA001);
    for (i = 0; i < 2; i++, address += 0x100) {
        if (!func_0209ed38(address, 0x100, &work->page)) {
            func_020d3f48();
            return 0;
        }
        func_020d4a50(data_021d43f4, work->page.wifiInfo, 14);
        work->page.crc = func_020e3a04(&work->crcTable, &work->page, ((size_t) &((DwcBackupPage *) 0)->crc));
        do {
            func_0209edc8(address, 0x100, &work->page);
        } while (!func_0209ee44(&work->page, address, 0x100, work->verifyBuffer));
    }
    return func_0209ee90() != 0;
}
