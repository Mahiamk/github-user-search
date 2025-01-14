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
