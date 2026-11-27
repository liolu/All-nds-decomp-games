/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0204681c from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/jpn/main/func_0204681c.legacy_sp3.c (license:
 * MIT), reused by tools/donor_match.py */
extern unsigned char *func_0206d4dc(void *entry);
extern void *data_0210e738;
extern void *data_0210e740[];
void *func_0204e430(int key) {
    int i;
    if (data_0210e738 == 0) {
        return 0;
    }
    for (i = 0; i < 0x20; i++) {
        void *e = data_0210e740[i];
        if (e != 0) {
            if (key == (int) func_0206d4dc(e)[1]) {
                return data_0210e740[i];
            }
        }
    }
    return 0;
}
