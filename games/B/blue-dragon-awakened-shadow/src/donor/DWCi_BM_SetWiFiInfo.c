/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_BM_SetWiFiInfo from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroDWC/src/dwc_bm.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
typedef unsigned long long int u64;
typedef int BOOL;
extern void MI_CpuCopy8(const void *src, void *dst, u32 size);
typedef struct MATHCRC16Table {
    u16 table[256];
} MATHCRC16Table;
extern void MATHi_CRC16InitTableRev(MATHCRC16Table *table, u16 poly);
extern void OS_Terminate();
extern void OS_Terminate(void);
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
extern DwcBmNvramState nv_result;
extern u8 Wifi[];
extern u16 MATH_CalcCRC16(const MATHCRC16Table *table, const void *data, u32 dataLength);
extern BOOL DWCi_BM_SetWiFiInfo(const DwcWiFiInfo *info, DwcBackupPageWork *work);
extern BOOL readNvram(u32 address, u32 size, void *dst);
extern void writeNvram(u32 address, u32 size, void *src);
extern BOOL verify(void *expected, u32 address, u32 size, void *scratch);
extern BOOL writeDisable(void);
extern u8 *DWCi_BACKUPlConvWifiInfo(const DwcWiFiInfo *info);
BOOL DWCi_BM_SetWiFiInfo(const DwcWiFiInfo *info, DwcBackupPageWork *work) {
    int i;
    u32 address = nv_result.backupAddress;

    DWCi_BACKUPlConvWifiInfo(info);
    MATHi_CRC16InitTableRev(&work->crcTable, 0xA001);
    for (i = 0; i < 2; i++, address += 0x100) {
        if (!readNvram(address, 0x100, &work->page)) {
            OS_Terminate();
            return 0;
        }
        MI_CpuCopy8(Wifi, work->page.wifiInfo, 14);
        work->page.crc = MATH_CalcCRC16(&work->crcTable, &work->page, ((size_t) &((DwcBackupPage *) 0)->crc));
        do {
            writeNvram(address, 0x100, &work->page);
        } while (!verify(&work->page, address, 0x100, work->verifyBuffer));
    }
    return writeDisable() != 0;
}
