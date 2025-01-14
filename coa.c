#include <stdio.h>

int summation(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Summation of numbers from 1 to %d is %d\n", number, summation(number));
    return 0;
}

The process of translating high-level C code to machine code for the x86 architecture, specifically the 8086 microprocessor, involves several stages, each of which translates the C source code into a form that can be executed by the hardware. Here’s a breakdown of the steps involved in this process:

1. High-Level C Code (Human-Readable Code)
The initial C code is written by the programmer. It’s designed to be easy to understand, with high-level abstractions such as loops, conditionals, and function calls. Here’s the provided C code:

#include <stdio.h>

int summation(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Summation of numbers from 1 to %d is %d\n", number, summation(number));
    return 0;
}
2. Preprocessing
The first stage of the compilation process is preprocessing. During this phase, the C code undergoes the following transformations:

Macro Expansion: Preprocessor directives like #include <stdio.h> are handled. The contents of stdio.h are inserted into the code.
File Inclusion: Necessary files (such as header files) are included.
Conditional Compilation: Any conditional code is processed.
After preprocessing, the C code is ready for compilation, with macros expanded, and all include files processed.

3. Compilation (High-level Code to Assembly)
In this step, the C code is translated into assembly code for the target architecture, in this case, the 8086 microprocessor. The C code is converted into a more machine-specific low-level assembly language that uses instructions specific to the 8086 architecture.

Key operations:

Data Types: The C variable types like int are mapped to registers or memory locations that are specific to the architecture.
Function Calls: The function summation and main are converted into assembly routines. Function arguments are passed via registers or the stack, and return values are handled similarly.
Assembly Code Example for 8086

An example of assembly code generated for the 8086 (simplified):

; Function summation(int n)
summation:
    ; Setup the sum to 0
    mov ax, 0              ; sum = 0
    mov bx, 1              ; i = 1
.loop:
    cmp bx, di             ; Compare i with n (di holds n)
    jg .done                ; If i > n, exit loop
    add ax, bx             ; sum += i
    inc bx                 ; Increment i
    jmp .loop               ; Repeat loop
.done:
    ret

; Function main
main:
    ; Print prompt
    mov ah, 09h            ; DOS print function
    lea dx, prompt         ; Load address of prompt
    int 21h                ; Call DOS interrupt to print

    ; Read input (number)
    mov ah, 01h            ; DOS input function
    int 21h                ; Read character input
    sub al, '0'            ; Convert ASCII to integer
    mov di, ax             ; Store input number in di (n)

    ; Call summation function
    call summation         ; ax will hold the result

    ; Print result
    mov ah, 09h            ; Print result
    lea dx, resultMessage  ; Load address of result message
    int 21h                ; Call DOS interrupt to print
    ret

prompt db 'Enter a number: $'
resultMessage db 'Summation is: $'
4. Assembly to Machine Code
In this step, the assembly code is assembled into machine code. The assembler converts the assembly instructions into the corresponding binary opcodes, which the 8086 CPU can understand.

For instance:

The assembly instruction mov ax, 0 would be translated into the binary opcode for the MOV instruction with the appropriate operands.
The instruction add ax, bx would similarly be converted into the binary representation of the addition operation on the 8086.
5. Linking (Combining Object Files)
The assembler generates an object file (.obj or .o), which contains machine code but may still have unresolved references (like function calls or variable addresses). The linker resolves these references and combines the object files into a single executable. The linker also handles:

Address resolution: Resolving memory addresses for variables and function calls.
Library linking: If the program uses external libraries (like the C standard library in the case of printf and scanf), the linker links in the necessary machine code for those functions.
The output of this step is an executable file (e.g., .exe or .com on DOS systems) that can be run on the 8086 architecture.

6. Execution (Machine Code)
The final executable file contains machine code, which is loaded into memory when the program is run. At this point, the program can be executed directly by the CPU. The 8086 CPU fetches, decodes, and executes the machine instructions one by one.

Each instruction might perform the following operations:

Moving data between registers and memory.
Performing arithmetic or logical operations.
Jumping to different parts of the program based on conditions (such as the loop in the summation function).
For example, the instruction add ax, bx will add the value in register bx to register ax and store the result back in ax.

7. Optimization (Optional)
The compiler may apply various optimization techniques during the compilation process to improve performance or reduce code size. This could involve:

Loop unrolling to reduce the overhead of the loop.
Register allocation optimization.
Removal of unnecessary operations.
Summary of the Translation Process:
High-Level C Code → Readable, portable program.
Preprocessing → Handling includes, macros, and conditionals.
Compilation → C code is converted into assembly code for the 8086.
Assembly → Assembly code is converted to machine code (binary opcodes).
Linking → Resolves addresses and links external libraries to create an executable.
Execution → The CPU executes the machine code.
Thus, the translation from high-level C code to executable machine code on the 8086 involves multiple steps, ensuring that the code is both efficient and compatible with the 8086 architecture.
#include <stdio.h>   // Includes standard input/output library
#include <def.h>     // Includes user-defined header file or declaration of functions
#define PI 3.14159

//Every instance of PI in the code will be replaced with 3.14159 during preprocessing.

float area = PI * r * r;  // Becomes: float area = 3.14159 * r * r;