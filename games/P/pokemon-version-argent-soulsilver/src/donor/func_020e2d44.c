/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CTRDGi_EraseFlashChipAT from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroSDK/src/ctrdg/CTRDG_flash_AT29LV512.c
 * (license: none), reused by tools/donor_match.py */
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
extern u32 func_020e2844(CTRDGTaskInfo *arg);
extern u16 func_020e2d44(void);
extern const u16(*ctrdgi_fl_maxtime);
u32 func_020e2844(CTRDGTaskInfo *arg);
u16 func_020e2d44(void) {
    CTRDGTaskInfo p;
    return (u16) func_020e2844(&p);
}
