/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* get48bits_3 from https://github.com/Project-Holon/aletheia src/game/ov009/biginteger.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned long long u64;
extern u64 func_02040e8c(u16 *s);
// clang-format off
asm u64 func_02040e8c(u16 *s)
{
	ldrh r1, [r0]
	ldrh r2, [r0, #-2]
	ldrh r3, [r0, #-4]
	orr r0, r3, r2, lsl #16
	bx lr
}
// clang-format on
