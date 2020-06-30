void mx_printchar(char c);

void mx_printint(int n) {
    if (n < 0) {
        mx_printchar('-');
    }

    if (n <= 2147483647 && n >= -2147483648) {
        if (n == 0) {
            return;
        } else {
            int reminder = n % 10;

            mx_printint(n > 0 ? n / 10 : n / -10);
            mx_printchar(reminder > 0 ? reminder + '0' : -reminder + '0');
        }
    }
}
