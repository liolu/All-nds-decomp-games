/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef signed char s8;
typedef struct CallbackNode {
    void (*func)(void);
    void *arg;
    struct CallbackNode *next;
} CallbackNode;
extern s8 data_020ea670;
extern u32 data_020ea678;
extern u32 data_020ea674;
extern CallbackNode data_020ea688;
extern CallbackNode data_020ea67c;
extern void func_02075150(void);
extern void func_02075144(void);
extern void func_020686dc(void);
extern void func_0206d3b4(CallbackNode *node);
extern void func_0206d39c(CallbackNode *node);
extern void *func_02075268(void);
extern void func_02076b5c(void);
extern void func_02075abc(void);

/* SoundSystem_Init from https://github.com/sturmds/advance-wars-dual-strike-decomp src/game/main/sound/sound_system_init.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
void func_020751c0(void) {
    if (data_020ea678 != 0) {
        return;
    }
    data_020ea678 = 1;
    func_020686dc();
    data_020ea67c.func = func_02075150;
    data_020ea67c.arg  = ((void *) 0);
    data_020ea688.func = func_02075144;
    data_020ea688.arg  = ((void *) 0);
    func_0206d3b4(&data_020ea67c);
    func_0206d39c(&data_020ea688);
    func_02075268();
    func_02076b5c();
    func_02075abc();
    data_020ea670 = -1;
    data_020ea674 = 1;
}
