#include <stdlib.h>

char *mx_strnew(const int size) {
    char *str = NULL;
    
    str = (char *)malloc((size + 1) * sizeof(char));
    if (str == NULL)
        return NULL;
    else {
        for (int i = 0; i < size + 1; i++) {
            str[i] = '\0';
        }
        return str;
    }
}
