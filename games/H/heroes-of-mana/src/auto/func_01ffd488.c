/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_01ffd488(void) {
    ldmfd sp!, {pc}
}
// clang-format on
