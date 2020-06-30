#include <stdlib.h>
char *mx_strnew(const int size) {
    char *str = NULL;
    int i = 0;
    str = (char *)malloc((size + 1) * sizeof(char));
    if (str == NULL)
        return NULL;
    else {
        for (; i < size + 1; i++) {
            str[i] = '\0';
        }
        return str;
    }
}
