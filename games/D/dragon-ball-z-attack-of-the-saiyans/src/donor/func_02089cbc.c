/* compiler: 2.0/sp1p5  */
/* CARD_Init from projets/blue-dragon-awakened-shadow/src/auto/CARD_Init.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef struct {
    u32 pad0[7];
    u32 src;
    u32 dst;
    u32 len;
    u32 dma;
    u32 pad2c[3];
    u32 callback;
    u32 callback_arg;
    u8 pad40[0xd4];
    u32 flag;
} CardCommon;
typedef struct {
    u32 pad[8];
    void *read_func;
} RomStat;
extern CardCommon data_020da680;
extern RomStat data_020daca0;
extern void func_02088c50(void);
extern void *func_02089d2c(void);
extern void func_02089f10(void);
void func_02089cbc(void) {
    CardCommon *const p = &data_020da680;
    if (!p->flag) {
        p->flag = 1;
        p->src = p->dst = p->len = 0;
        p->dma                   = (u32) ~0;
        p->callback              = 0;
        p->callback_arg          = 0;
        data_020daca0.pad[0]     = 0;
        func_02088c50();
        data_020daca0.read_func = func_02089d2c();
        func_02089f10();
    }
}
