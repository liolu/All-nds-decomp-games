/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* DWCi_MOV_MBP_Start from https://github.com/Project-Holon/aletheia src/game/ov016/dwc_mov_mbp.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct MBGameRegistry {
    char *romFilePathp;
    u16 *gameNamep;
    u16 *gameIntroductionp;
    char *iconCharPathp;
    char *iconPalettePathp;
    u32 ggid;
    u8 maxPlayerNum;
    u8 pad[3];
    u8 userParam[32];
} MBGameRegistry;
extern void func_02002dd0(MBGameRegistry *gameInfo, u16 channel);
extern int func_02002ca8(MBGameRegistry *gameInfo);
extern void func_02002694(unsigned short v);
extern int func_02056b1c(int channel);
extern void func_02002694(unsigned short v);
extern void func_0204a304(void);
extern void func_02002dd0(MBGameRegistry *gameInfo, u16 channel);
extern int func_02002ca8(MBGameRegistry *gameInfo);
void func_02002dd0(MBGameRegistry *gameInfo, u16 channel) {
    func_02002694(2);
    if (func_02056b1c(channel)) {
        func_02002694(7);
        return;
    }
    if (func_02002ca8(gameInfo)) {
        return;
    }
    func_0204a304();
}
int func_02002ca8(MBGameRegistry *gameInfo);
void func_02002694(unsigned short v);
