#include <stdio.h>
int main() {
    // Lotta interesting things here
    // GetChar will not consume the new line required to... input a char
    // EOF will cause future calls to getChar to return EOF
    // So once you send EOF you are done
    int c;
    c = getchar();
    getchar(); // Consume the /n
    printf("%i\n", c != EOF);
    c = getchar();
    printf("%i\n", c != EOF);
}