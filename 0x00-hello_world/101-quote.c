#include <unistd.h>
#include <string.h>
#include <errno.h>

int main() {
    const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    size_t len = strlen(message);
    ssize_t bytes_written = write(STDERR_FILENO, message, len);

    if (bytes_written == -1) {
        write(STDERR_FILENO, "Error writing to stderr: ", strlen("Error writing to stderr: "));
        write(STDERR_FILENO, strerror(errno), strlen(strerror(errno)));
        write(STDERR_FILENO, "\n", 1);
        return 1;
    }

    return 1;
}

