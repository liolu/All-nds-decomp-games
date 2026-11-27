/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* gti2GetChallenge from https://github.com/Project-Holon/aletheia src/game/ov009/gt2auth.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned int u32;
extern unsigned int current_time(void);
extern void func_02019fa0(unsigned int seed);
extern void func_02019fa0(u32 v);
extern int rand();
extern unsigned char *gti2GetChallenge(unsigned char *buffer);
unsigned char *gti2GetChallenge(unsigned char *buffer) {
    int i;
    int oddmode;

    func_02019fa0(current_time());
    buffer[0] = (unsigned char) (33 + rand() % 93);

    oddmode = 0;
    for (i = 1; i < 32; i++) {
        oddmode   = ((buffer[i - 1] & 1) ^ (i & 1) ^ oddmode ^ (buffer[0] & 1) ^ ((buffer[0] < 79) ? 1 : 0) ^
                   ((buffer[i - 1] < buffer[0]) ? 1 : 0));
        buffer[i] = (unsigned char) (33 + rand() % 93);

        if ((oddmode && (buffer[i] & 1) == 0) || (!oddmode && ((buffer[i] & 1) == 1))) {
            buffer[i]++;
        }
    }
    return buffer;
}
