/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0203e95c from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_0203e95c.legacy_sp3.c (license: MIT),
 * reused by tools/donor_match.py */
typedef struct {
    char _0[0xcb0];
    unsigned long long tick;
    char _cb8[0x59];
    signed char slot;
} game_0203e95c_t;
extern char WCM_Bssid_Any[];
extern char WCM_Essid_Any[];
extern long long OS_GetTick(void);
extern void func_02046760(int a0, int a1, int a2, int a3);
int func_020461f4(game_0203e95c_t *g) {
    g->tick = OS_GetTick();
    g->slot = 0;
    g->tick = OS_GetTick();
    func_02046760((int) WCM_Bssid_Any, (int) WCM_Essid_Any, g->slot, 0x200000);
    return 3;
}
