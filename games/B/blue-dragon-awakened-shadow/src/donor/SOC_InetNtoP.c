/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* SOC_InetNtoP from https://github.com/Project-Holon/aletheia src/game/ov009/soc.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
extern char *SOC_InetNtoP(int af, void *src, char *dst, unsigned int len);
extern void SOC_U32to4U8(unsigned long adr_u32, unsigned char *adr_4u8);
extern void MI_CpuCopy8(const void *srcp, void *dstp, u32 size);
extern int OS_SNPrintf(char *dst, unsigned int len, const char *fmt, ...);
extern char *SOC_InetNtoP(int af, void *src, char *dst, unsigned int len);
extern void SOC_U32to4U8(unsigned long adr_u32, unsigned char *adr_4u8);
extern char data_020f8f50[];
char *SOC_InetNtoP(int af, void *src, char *dst, unsigned int len) {
    unsigned long addr32;
    unsigned char addr[4];

    if (af != 2) {
        return 0;
    }
    if (len < 0x10) {
        return 0;
    }
    MI_CpuCopy8(src, &addr32, 4);
    SOC_U32to4U8(addr32, addr);
    OS_SNPrintf(dst, 16, data_020f8f50, addr[3], addr[2], addr[1], addr[0]);
    return dst;
}
void SOC_U32to4U8(unsigned long adr_u32, unsigned char *adr_4u8);
