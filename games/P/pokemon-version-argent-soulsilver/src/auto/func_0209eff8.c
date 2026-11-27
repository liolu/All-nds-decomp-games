/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0209eff8 from https://github.com/ntrtwl/NitroDWC libraries/bm/src/dwc_bm_init.c (license: none), reused by
 * tools/donor_match.py */
enum DWCBMInitResult {
    DWC_BM_INIT_OK          = 0,
    DWC_BM_INIT_WRITE_ERROR = -10000,
    DWC_BM_INIT_READ_ERROR  = -10001,
    DWC_BM_INIT_OK_CLEAR    = -10002,
    DWC_BM_INIT_OK_INIT     = -10003,
};
extern int func_0209eff8(void *work);
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
extern void func_020d4790(u16 data, void *destp, u32 size);
static inline void MI_CpuFill16(void *dest, u16 data, u32 size) {
    ((void) 0);
    ((void) 0);

    func_020d4790(data, dest, size);
}
static inline void MI_CpuClear16(void *dest, u32 size) {
    MI_CpuFill16(dest, 0, size);
}
extern void func_020d4994(void *dest, u8 data, u32 size);
extern void func_020d4a50(const void *src, void *dest, u32 size);
static inline void MI_CpuClear8(void *dest, u32 size) {
    func_020d4994(dest, 0, size);
}
extern const u16(*ctrdgi_fl_maxtime);
typedef struct MATHCRC16Table {
    u16 table[256];
} MATHCRC16Table;
extern void func_020e389c(MATHCRC16Table *table, u16 poly);
static inline void MATH_CRC16InitTable(MATHCRC16Table *table) {
    func_020e389c(table, 0xa001);
}
extern u16 func_020e3a04(const MATHCRC16Table *table, const void *data, u32 dataLength);
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
typedef struct MEMINIT {
    DWCMemMap mm;
    u8 work[256];
    MATHCRC16Table table;
} MEMINIT;
extern BOOL func_0209e5e4(void *work);
extern BOOL func_0209e628(DWCMemMap *mem);
extern BOOL func_0209e6dc(MEMINIT *work);
extern void func_0209e770(const u8 *wifi);
extern BOOL func_0209f300(const DWCBMApInfo *info);
extern int func_0209f400(DWCMemMap *mm);
extern void func_0209f480(DWCMemMap *mm, int page);
int func_0209eff8(void *work) {
    MEMINIT *wk = work;
    BOOL c[4];

    MI_CpuClear8(wk, 0x700);

    if (func_0209e5e4(wk) == 0) {
        return DWC_BM_INIT_READ_ERROR;
    }

    MATH_CRC16InitTable(&wk->table);

    if (func_0209e628(&wk->mm) == 0) {
        return DWC_BM_INIT_READ_ERROR;
    }

    MI_CpuClear8(c, sizeof(c));

    for (int i = 0; i < 3; i++) {
        u16 hash = func_020e3a04(&wk->table, &wk->mm.page[i], sizeof(DWCMemPage) - sizeof(wk->mm.page[i].crc));
        if (hash == wk->mm.page[i].crc && func_0209f300(&wk->mm.page[i].ap)) {
            c[i] = 1;
        }
    }

    u16 hash = func_020e3a04(&wk->table, &wk->mm.page[3], sizeof(DWCMemPage) - sizeof(wk->mm.page[3].crc));
    if (hash == wk->mm.page[3].crc) {
        c[3] = 1;
    }

    if (c[0] && c[1] && c[2] && c[3]) {
        func_0209e770(wk->mm.page[0].wifi);
        return DWC_BM_INIT_OK;
    }

    if (!c[0] && !c[1] && !c[2] && !c[3]) {
        func_0209f400(&wk->mm);
        if (func_0209e6dc(work)) {
            return DWC_BM_INIT_OK;
        } else {
            return DWC_BM_INIT_WRITE_ERROR;
        }
    }

    if ((!c[0] || !c[1]) && (!c[2] || !c[3])) {
        func_0209f400(&wk->mm);
        if (func_0209e6dc(work)) {
            return DWC_BM_INIT_OK;
        } else {
            return DWC_BM_INIT_WRITE_ERROR;
        }
    }

    if (!c[0] && !c[1]) {
        func_0209f400(&wk->mm);
        if (func_0209e6dc(work)) {
            return DWC_BM_INIT_OK_INIT;
        } else {
            return DWC_BM_INIT_WRITE_ERROR;
        }
    }

    if (!c[0]) {
        func_0209f480(&wk->mm, 0);
        func_020d4a50(&wk->mm.page[1].wifi, &wk->mm.page[0].wifi, sizeof(wk->mm.page[0].wifi));
        wk->mm.page[0].ap.state = wk->mm.page[1].ap.state;
    } else if (!c[1]) {
        func_0209f480(&wk->mm, 1);
        func_020d4a50(&wk->mm.page[0].wifi, &wk->mm.page[1].wifi, sizeof(wk->mm.page[0].wifi));
        wk->mm.page[1].ap.state = wk->mm.page[0].ap.state;
    }

    func_0209e770(wk->mm.page[0].wifi);

    if (!c[2]) {
        func_0209f480(&wk->mm, 2);
    }

    if (!c[3]) {
        MI_CpuClear16(&wk->mm.page[3], sizeof(DWCMemPage));
    }

    BOOL clear = 0;
    for (int i = 0; i < 3; i++) {
        if (!c[i] && wk->mm.page[0].ap.state & (1 << i)) {
            wk->mm.page[0].ap.state &= ~(1 << i);
            clear                   = 1;
            wk->mm.page[1].ap.state = wk->mm.page[0].ap.state;
        }
    }

    if (!func_0209e6dc(work)) {
        return DWC_BM_INIT_WRITE_ERROR;
    }

    if (clear) {
        return DWC_BM_INIT_OK_CLEAR;
    } else {
        return DWC_BM_INIT_OK;
    }
}
BOOL func_0209f300(const DWCBMApInfo *info);
int func_0209f400(DWCMemMap *mm);
void func_0209f480(DWCMemMap *mm, int page);
