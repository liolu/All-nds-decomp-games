/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* WcmCountBits from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroWiFi/src/wcm_control.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
extern u32 func_02089018(u32 value);
// clang-format off
asm u32 func_02089018(u32 value) {
    mov r1, r0
    mov r0, #0
    mov r3, #1
@loop:
    clz r2, r1
    rsbs r2, r2, #0x1f
    bcc @done
    b @clear
@done:
    bx lr
@clear:
    bic r1, r1, r3, lsl r2
    add r0, r0, #1
    b @loop
}
// clang-format on
