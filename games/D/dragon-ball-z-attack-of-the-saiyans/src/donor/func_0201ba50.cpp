/* compiler: 2.0/sp1p5 -O4,p -ipa file -inline on,noauto */
/* func_ov005_02069d50 from https://github.com/aricloverEXTRA/PartnersInTimeDECOMP src/scene_support_ov005/entry_list.cpp
 * (license: none), reused by tools/donor_match.py */
extern "C" {
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
}
typedef struct Overlay5SoundSlot {
    u16 state;
    u16 priority;
    u16 delay;
    u16 wait;
} Overlay5SoundSlot;
extern "C" {
extern Overlay5SoundSlot data_020cc270[32];
extern void func_02083330(void *destination, u8 value, u32 size);
void func_0201ba50(void) {
    func_02083330(data_020cc270, 0, sizeof(data_020cc270));
}
}
