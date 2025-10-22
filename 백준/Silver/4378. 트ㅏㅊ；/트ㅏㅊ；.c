#include <stdio.h>

int main(void) {
    
    char str[100000];
    while (fgets(str,100000,stdin) != NULL ){
    for(int i = 0; str[i] != '\0'; i++){
        char ch = str[i];
        if (ch == ' ' || ch == '\n') {
            printf("%c",ch);
        }
        else if (ch == '1') printf("%c",'`');
        else if (ch == '2') printf("%c",'1');
        else if (ch == '3') printf("%c",'2');
        else if (ch == '4') printf("%c",'3');
        else if (ch == '5') printf("%c",'4');
        else if (ch == '6') printf("%c",'5');
        else if (ch == '7') printf("%c",'6');
        else if (ch == '8') printf("%c",'7');
        else if (ch == '9') printf("%c",'8');
        else if (ch == '0') printf("%c",'9');
        else if (ch == '-') printf("%c",'0');
        else if (ch == '=') printf("%c",'-');

        else if (ch == 'W') printf("%c",'Q');
        else if (ch == 'E') printf("%c",'W');
        else if (ch == 'R') printf("%c",'E');
        else if (ch == 'T') printf("%c",'R');
        else if (ch == 'Y') printf("%c",'T');
        else if (ch == 'U') printf("%c",'Y');
        else if (ch == 'I') printf("%c",'U');
        else if (ch == 'O') printf("%c",'I');
        else if (ch == 'P') printf("%c",'O');
        else if (ch == '[') printf("%c",'P');
        else if (ch == ']') printf("%c",'[');
        else if (ch == '\\') printf("%c",']');

        else if (ch == 'S') printf("%c",'A');
        else if (ch == 'D') printf("%c",'S');
        else if (ch == 'F') printf("%c",'D');
        else if (ch == 'G') printf("%c",'F');
        else if (ch == 'H') printf("%c",'G');
        else if (ch == 'J') printf("%c",'H');
        else if (ch == 'K') printf("%c",'J');
        else if (ch == 'L') printf("%c",'K');
        else if (ch == ';') printf("%c",'L');
        else if (ch == '\'') printf("%c",';');

        else if (ch == 'X') printf("%c",'Z');
        else if (ch == 'C') printf("%c",'X');
        else if (ch == 'V') printf("%c",'C');
        else if (ch == 'B') printf("%c",'V');
        else if (ch == 'N') printf("%c",'B');
        else if (ch == 'M') printf("%c",'N');
        else if (ch == ',') printf("%c",'M');
        else if (ch == '.') printf("%c",',');
        else if (ch == '/') printf("%c",'.');

        else printf("%c",ch);
    }
    }
    
    return 0;
}
