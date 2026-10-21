/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a89c8 from https://github.com/LagoLunatic/ooe libs/GameSpy/serverbrowsing/sb_serverlist.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
int func_020a89c8(int flags) {
    int size = 5;
    if (flags & 2) {
        size += 4;
    }
    if (flags & 8) {
        size += 4;
    }
    if (flags & 16) {
        size += 2;
    }
    if (flags & 32) {
        size += 2;
    }
    return size;
}
