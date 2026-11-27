/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0204706c from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_0204706c.legacy_sp3.c (license: MIT),
 * reused by tools/donor_match.py */
struct State {
    char pad0[0x24];
    int state;
    char pad1[6];
    unsigned short text[26];
    char pad2[6];
    void *field68;
    int field6c;
    int field70;
    int field74;
};
extern struct State *data_0210e738;
extern int DWCi_IsError(void);
extern int DWC_GetInetStatus(void);
extern int DWCi_WStrLen(unsigned short *arr);
extern void func_0204e5fc(int arg);
extern void func_0204f1ac(int a, int b);
extern void func_0205cc34(void *a);
extern void MIi_CpuClear16();
extern void MIi_CpuCopy16();
int func_0204dd28(unsigned short *text, int unused, int a, int b) {
    unsigned int len;
    if (text == 0) {
        return 0;
    }
    if (DWCi_IsError() != 0 || data_0210e738->state != 0) {
        return 0;
    }
    data_0210e738->field70 = a;
    data_0210e738->field74 = b;
    if (text == 0 || *text == 0) {
        len = 0;
    } else {
        MIi_CpuClear16(0, data_0210e738->text, 0x34);
        if ((unsigned int) DWCi_WStrLen(text) > 25) {
            len = 25;
        } else {
            len = DWCi_WStrLen(text);
        }
        MIi_CpuCopy16(text, data_0210e738->text, len * 2);
    }
    data_0210e738->text[len] = 0;
    if (DWC_GetInetStatus() != 4) {
        func_0204f1ac(2, -60010);
        return 1;
    }
    func_0204e5fc(1);
    func_0205cc34(data_0210e738->field68);
    return 1;
}
