/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* PMi_SendLEDPatternCommand from https://github.com/Project-Holon/aletheia src/game/arm9/pm.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
extern u32 PM_SendUtilityCommand(u32 number, u16 parameter, u16 *retValue);
extern unsigned int func_0200ff10(unsigned int pattern);
extern u32 PM_SendUtilityCommand(u32 number, u16 parameter, u16 *retValue);
extern unsigned int func_0200ff10(unsigned int pattern);
u32 PM_SendUtilityCommand(u32 number, u16 parameter, u16 *retValue);
unsigned int func_0200ff10(unsigned int pattern) {
    return PM_SendUtilityCommand(0x12, (u16) pattern, 0);
}
