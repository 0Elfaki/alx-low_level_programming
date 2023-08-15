#include "main.h"
#include <stdio.h>

int main(void){
	char text[] = "_putchar";
	int i = 0;

	while (text[i] != '\0') {
		_putchar(text[i]);
		i++;
	}

	_putchar('\n');
	return 0;
}

int _putchar(char c) {
	return write(1, &c,1);
}
