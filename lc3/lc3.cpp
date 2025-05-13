#define MEMORY_MAX (1 << 16)


int main(int argc, char** argv) {
    // Each unsgined int is 16 bits, and so 2^16  * 16 bits ~ 128 KB in memory
    unsigned int memory[MEMORY_MAX];
    // Registers 10 registers 
    enum {
        R_R0 = 0,
        R_R1,
        R_R2,
        R_R3,
        R_R4,
        R_R5,
        R_R6,
        R_R7,
        R_PC,
        R_COND,
        R_COUNT
    };

    unsigned int reg[10];

    // OP Codes
    enum
    {
    OP_BR = 0, /* branch */
    OP_ADD,    /* add  */
    OP_LD,     /* load */
    OP_ST,     /* store */
    OP_JSR,    /* jump register */
    OP_AND,    /* bitwise and */
    OP_LDR,    /* load register */
    OP_STR,    /* store register */
    OP_RTI,    /* unused */
    OP_NOT,    /* bitwise not */
    OP_LDI,    /* load indirect */
    OP_STI,    /* store indirect */
    OP_JMP,    /* jump */
    OP_RES,    /* reserved (unused) */
    OP_LEA,    /* load effective address */
    OP_TRAP    /* execute trap */
    };

}
    