/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* get48bits_2 from https://github.com/Project-Holon/aletheia src/game/ov009/biginteger.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned long long u64;
extern u64 func_02040e7c(u16 *s);
// clang-format off
asm u64 func_02040e7c(u16 *s)
{
	ldrh r1, [r0]
	ldrh r0, [r0, #-2]
	mov r0, r0, lsl #16
	bx lr
}
// clang-format on
