/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* ConvAddress from https://github.com/Project-Holon/aletheia src/game/arm9/dwc_ac_test.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
extern unsigned long func_02046b98(unsigned char *add);
unsigned long func_02046b98(unsigned char *add) {
    unsigned long address;

    address = 0;
    address |= (unsigned long) add[0] << 24;
    address |= (unsigned long) add[1] << 16;
    address |= (unsigned long) add[2] << 8;
    address |= add[3];
    return ((address >> 24) & 0xff) | ((address >> 8) & 0xff00) | ((address << 8) & 0xff0000) | ((address << 24) & 0xff000000);
}
