#include <unistd.h>

int mx_strlen(char *str);

void mx_printstr(char *str){
	write(1, str, mx_strlen(str));
}
