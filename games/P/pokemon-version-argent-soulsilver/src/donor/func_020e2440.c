/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CTRDGi_EraseFlash4KBCoreAT from https://github.com/ctrl-cheeb-del/pokeheartgold
 * lib/NitroSDK/src/ctrdg/CTRDG_flash_AT29LV512.c (license: none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef u32 (*CTRDG_TASK_FUNC)(struct CTRDGTaskInfo_tag *);
typedef struct CTRDGTaskInfo_tag {
    CTRDG_TASK_FUNC task;
    CTRDG_TASK_FUNC callback;
    u32 result;
    u8 *data;
    u8 *adr;
    u32 offset;
    u32 size;
    u8 *dst;
    u16 sec_num;
    u8 busy;
    u8 param[1];
} CTRDGTaskInfo;
extern u32 func_020e2440(CTRDGTaskInfo *arg);
extern u16 func_020e27a8(u16 p_secNo);
extern const u16(*ctrdgi_fl_maxtime);
u32 func_020e2440(CTRDGTaskInfo *arg) {
    u32 result;
    u16 i, p_secNo, retry;
    CTRDGTaskInfo p = *arg;
    u16 l_secNo     = p.sec_num;

    if (l_secNo >= 16) {
        return 0x8000 | 0x00ff;
    }

    p_secNo = (u16) (l_secNo << 5);
    for (i = 0; i < 32; i++) {
        for (retry = 2; retry > 0; retry--) {
            result = func_020e27a8(p_secNo);
            if (result == 0) {
                break;
            }
        }
        p_secNo++;
        if (result) {
            break;
        }
    }

    return result;
}
u16 func_020e27a8(u16 p_secNo);
