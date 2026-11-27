/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CTRDGi_WriteAndVerifyAgbFlashSectorCore from https://github.com/RushRE/SonicRushAdventure-Decomp
 * lib/NitroSDK/src/ctrdg/ARM9/ctrdg_flash_common.c (license: none), reused by tools/donor_match.py */
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
extern u16 func_020e21c4(u16 sec_num, u8 *src);
extern u32 func_020e21dc(u16 sec_num, u8 *src, u32 size);
extern const u16(*ctrdgi_fl_maxtime);
extern u32 func_020e2118(CTRDGTaskInfo *arg);
extern u32 func_020e2118(CTRDGTaskInfo *arg);
extern const u16(*ctrdgi_fl_maxtime);
u32 func_020e2118(CTRDGTaskInfo *arg) {
    u16 retry;
    u32 result;
    CTRDGTaskInfo p = *arg;
    u16 sec_num     = p.sec_num;
    u32 offset      = p.offset;
    u8 *src         = p.data;
    u32 verifysize  = p.size;

    retry = 0;
    while (retry < 3) {
        result = (u32) func_020e21c4(sec_num, src);
        if (result == 0) {
            result = func_020e21dc(sec_num, src, verifysize);
            if (result == 0) {
                break;
            }
        }
        retry++;
    }
    return result;
}
u16 func_020e21c4(u16 secNo, u8 *src);
u32 func_020e21dc(u16 sec_num, u8 *src, u32 size);
