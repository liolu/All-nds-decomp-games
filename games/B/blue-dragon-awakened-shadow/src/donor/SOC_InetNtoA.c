/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* SOC_InetNtoA from https://github.com/Project-Holon/aletheia src/game/ov009/soc.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef struct SOCInAddr {
    u32 addr;
} SOCInAddr;
extern char *SOC_InetNtoA(struct SOCInAddr in);
extern char *SOC_InetNtoP(int af, void *src, char *dst, unsigned int len);
extern char *SOC_InetNtoA(struct SOCInAddr in);
extern char *SOC_InetNtoP(int af, void *src, char *dst, unsigned int len);
extern char data_0210e34c[16];
char *SOC_InetNtoA(struct SOCInAddr in) {
    SOC_InetNtoP(2, &in, data_0210e34c, 16);
    return data_0210e34c;
}
char *SOC_InetNtoP(int af, void *src, char *dst, unsigned int len);
