/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef signed char s8;
typedef struct CallbackNode {
    void (*func)(void);
    void *arg;
    struct CallbackNode *next;
} CallbackNode;
extern s8 data_02123270;
extern u32 data_02123278;
extern u32 data_02123274;
extern CallbackNode data_02123288;
extern CallbackNode data_0212327c;
extern void func_02073afc(void);
extern void func_02073af0(void);
extern void func_020636cc(void);
extern void func_0205d9a0(CallbackNode *node);
extern void func_0205d988(CallbackNode *node);
extern void *func_02073c14(void);
extern void func_020750e8(void);
extern void func_020743f8(void);

/* SoundSystem_Init from https://github.com/sturmds/advance-wars-dual-strike-decomp src/game/main/sound/sound_system_init.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
void func_02073b6c(void) {
    if (data_02123278 != 0) {
        return;
    }
    data_02123278 = 1;
    func_020636cc();
    data_0212327c.func = func_02073afc;
    data_0212327c.arg  = ((void *) 0);
    data_02123288.func = func_02073af0;
    data_02123288.arg  = ((void *) 0);
    func_0205d9a0(&data_0212327c);
    func_0205d988(&data_02123288);
    func_02073c14();
    func_020750e8();
    func_020743f8();
    data_02123270 = -1;
    data_02123274 = 1;
}
