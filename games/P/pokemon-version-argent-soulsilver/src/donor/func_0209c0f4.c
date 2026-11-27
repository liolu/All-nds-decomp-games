/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* SPLUtil_DrawXYPlane from https://github.com/Project-Holon/aletheia src/game/arm9/spl_emitter.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef s16 fx16;
typedef s32 fx32;
extern void func_0209c0f4(s32 s, s32 t, s32 x, s32 y);
extern void func_0209c0f4(s32 s, s32 t, s32 x, s32 y);
static inline void G3_Begin(u32 p) {
    (*(volatile u32 *) 0x04000500) = p;
}
static inline void G3_End(void) {
    (*(volatile u32 *) 0x04000504) = 0;
}
static inline void G3_TexCoord(fx32 s, fx32 t) {
    (*(volatile u32 *) 0x04000488) = (u32) (u16) (s >> 8) | ((u32) (u16) (t >> 8) << 16);
}
static inline void G3_Vtx10(fx16 x, fx16 y, fx16 z) {
    (*(volatile u32 *) 0x04000490) =
        ((u32) ((((u32) ((x) >> 6) & 0x3ff) << 0) | (((u32) ((y) >> 6) & 0x3ff) << 10) | (((u32) ((z) >> 6) & 0x3ff) << 20)));
}
void func_0209c0f4(s32 s, s32 t, s32 x, s32 y) {
    G3_Begin(1);
    G3_TexCoord(0, 0);
    G3_Vtx10((fx16) (x - 0x1000), (fx16) (y + 0x1000), 0);
    G3_TexCoord(s, 0);
    G3_Vtx10((fx16) (x + 0x1000), (fx16) (y + 0x1000), 0);
    G3_TexCoord(s, t);
    G3_Vtx10((fx16) (x + 0x1000), (fx16) (y - 0x1000), 0);
    G3_TexCoord(0, t);
    G3_Vtx10((fx16) (x - 0x1000), (fx16) (y - 0x1000), 0);
    G3_End();
}
extern u32 (*const func_02054A68_Hooks[])(s32, s32, void *);
extern u32 (*const func_02054A68_Hooks2[])(s32, s32, s32, s32);
extern u32 (*const func_02054718_Hooks[])(s32, s32, void *);
extern u32 (*const func_02054718_Hooks2[])(s32, s32, s32, s32);
extern u32 (*const func_0205429C_Hooks[])(s32, s32, void *);
extern u32 (*const func_0205429C_Hooks2[])(s32, s32, s32, s32);
extern u32 (*const func_02053E1C_Hooks[])(s32, s32, void *);
extern u32 (*const func_02053E1C_Hooks2[])(s32, s32, s32, s32);
