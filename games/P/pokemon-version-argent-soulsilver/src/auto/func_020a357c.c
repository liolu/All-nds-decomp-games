/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a357c from https://github.com/Project-Holon/aletheia src/game/ov009/soc.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef struct SOCInAddr {
    u32 addr;
} SOCInAddr;
extern char *func_020a357c(struct SOCInAddr in);
extern char *func_020a35fc(int af, void *src, char *dst, unsigned int len);
extern char *func_020a357c(struct SOCInAddr in);
extern char *func_020a35fc(int af, void *src, char *dst, unsigned int len);
extern char data_021d452c[16];
char *func_020a357c(struct SOCInAddr in) {
    func_020a35fc(2, &in, data_021d452c, 16);
    return data_021d452c;
}
char *func_020a35fc(int af, void *src, char *dst, unsigned int len);
