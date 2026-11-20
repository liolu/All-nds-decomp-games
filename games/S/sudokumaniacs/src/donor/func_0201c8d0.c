/* compiler: 1.2/sp2p3  */
/* OS_RescheduleThread from projets/rayman-rr/src/auto/OS_RescheduleThread.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef void (*RescheduleCb)(void *, void *);
extern u32 data_0203dd54;
extern void *data_0203dd60;
extern RescheduleCb data_0203dd5c;
extern u8 data_0203dd68[];
extern unsigned long func_0201e408(void);
extern s32 func_0201c9bc(void);
extern s32 func_0201d0f8(void *ctx);
extern void func_0201d144(void *ctx);
void func_0201c8d0(void) {
    u8 *info;
    u8 *cur;
    u8 *sel;

    info = data_0203dd68;
    if (data_0203dd54 != 0) {
        return;
    }
    if (*(u16 *) (info + 2) != 0 || func_0201e408() == 0x12) {
        *(u16 *) info = 1;
        return;
    }
    cur = *(u8 **) data_0203dd60;
    sel = (u8 *) func_0201c9bc();
    if (cur == sel) {
        return;
    }
    if (sel == 0) {
        return;
    }
    if (*(u32 *) (cur + 0x64) != 2) {
        if (func_0201d0f8(cur) != 0) {
            return;
        }
    }
    if (data_0203dd5c != 0) {
        data_0203dd5c(cur, sel);
    }
    if (*(RescheduleCb *) (info + 0xc) != 0) {
        (*(RescheduleCb *) (info + 0xc))(cur, sel);
    }
    *(u8 **) (data_0203dd68 + 4) = sel;
    func_0201d144(sel);
}
