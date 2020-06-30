#include <unistd.h>

void mx_printchar (char c);
void mx_printstr(char *str);

int main(int argc, char** argv){
	for(int i = 1; i < argc; i++){
		mx_printstr(argv[i]);
		mx_printchar('\n');
	}	
}
