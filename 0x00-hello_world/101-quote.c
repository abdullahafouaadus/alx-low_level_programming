#include <unistd.h>

int main() {
    char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(STDERR_FILENO, text, sizeof(text) - 1);  // Use sizeof to calculate the length of the text
    return 0;
}
