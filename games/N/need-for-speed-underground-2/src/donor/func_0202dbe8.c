/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* DebugMenu_Init from https://github.com/SHOEGAZEssb/Rosy-Rupeeland-Decomp src/system/debug_menu.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef signed int s32;
typedef struct DebugMenu DebugMenu;
typedef struct DebugMenuVTable {
    DebugMenu *(*destroy)(DebugMenu *menu);
    DebugMenu *(*destroyAndFree)(DebugMenu *menu);
    int (*update)(DebugMenu *menu);
} DebugMenuVTable;
struct DebugMenu {
    DebugMenuVTable *vtable;
    u8 baseFields[0x20];
    s32 selection;
};
extern DebugMenuVTable data_0209a3ec;
extern DebugMenu *func_0202dbe8(DebugMenu *menu);
extern void func_02030a64(void *scene);
extern DebugMenuVTable data_0209a3ec;
DebugMenu *func_0202dbe8(DebugMenu *menu) {
    func_02030a64(menu);
    menu->vtable    = &data_0209a3ec;
    menu->selection = 0;
    return menu;
}
