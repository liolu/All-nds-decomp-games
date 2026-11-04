/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209da10 from projets/pokemon-dash/src/donor/func_0209da10.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
#pragma cplusplus off
void func_0205b558(int ch) {
    while (*(volatile unsigned *) (0x40000b0 + (ch * 3 + 2) * 4) & 0x80000000)
        ;
}
