void mx_printchar (char c);

void mx_print_alphabet(){
    for(int i = 0; i < 26; i++){
        if(i % 2 == 0)
            mx_printchar(65 + i);
        else
            mx_printchar(97+i);
    }
    mx_printchar('\n');
}
