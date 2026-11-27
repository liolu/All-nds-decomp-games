/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a35fc from https://github.com/Project-Holon/aletheia src/game/ov009/soc.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
extern char *func_020a35fc(int af, void *src, char *dst, unsigned int len);
extern void func_020a3680(unsigned long adr_u32, unsigned char *adr_4u8);
extern void func_020d4a50(const void *srcp, void *dstp, u32 size);
extern int func_020d168c(char *dst, unsigned int len, const char *fmt, ...);
extern char *func_020a35fc(int af, void *src, char *dst, unsigned int len);
extern void func_020a3680(unsigned long adr_u32, unsigned char *adr_4u8);
extern char data_02110698[];
char *func_020a35fc(int af, void *src, char *dst, unsigned int len) {
    unsigned long addr32;
    unsigned char addr[4];

    if (af != 2) {
        return 0;
    }
    if (len < 0x10) {
        return 0;
    }
    func_020d4a50(src, &addr32, 4);
    func_020a3680(addr32, addr);
    func_020d168c(dst, 16, data_02110698, addr[3], addr[2], addr[1], addr[0]);
    return dst;
}
void func_020a3680(unsigned long adr_u32, unsigned char *adr_4u8);
