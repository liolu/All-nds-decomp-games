/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* codetovalue from https://github.com/Project-Holon/aletheia src/game/arm9/dwc_ac_shop_usb.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
extern long func_020470a4(unsigned char c);
long func_020470a4(unsigned char c) {
    if (c >= 'A' && c <= 'Z') {
        return c - 'A';
    }
    if (c >= 'a' && c <= 'z') {
        return (long) (c - 'a') + 26;
    }
    if (c >= '0' && c <= '9') {
        return (long) (c - '0') + 52;
    }
    if (c == '+') {
        return 62;
    }
    if (c == '/') {
        return 63;
    }
    return -(c != '=');
}
