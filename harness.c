#include <stdio.h>
#include <string.h>
int main(void) {
    // Declare a buffer array of characters to store the line of text entered by the user.
    // Fixed size of 256 bytes allows up to 255 characters plus 1 null terminator byte ('\0').
    char input[256];

    // Enter an infinite loop (1 always evaluates to true) to continuously handle user input.
    while (1) {
        // Print the prompt prompt text to indicate the system is ready for user input.
        printf("User> ");

        // Force stdout buffer to flush immediately so the prompt renders prior to input blocking.
        fflush(stdout);

        // Read up to 255 characters from standard input (stdin) into the input buffer array.
        // fgets returns NULL if reading fails or if end-of-file (EOF/Ctrl+D) is encountered.
        if (fgets(input, sizeof(input), stdin) == NULL) {
            // Exit loop gracefully on read error or EOF.
            break;
        }

        // strcspn calculates the index of the first trailing newline '\n' in the input string.
        // Replacing that index with the null terminator '\0' cleanly strips the trailing newline.
        input[strcspn(input, "\n")] = '\0';

        // strcmp returns 0 when two strings are identical character-for-character.
        // Check if the user entered the command "exit".
        if (strcmp(input, "exit") == 0) {
            // Print shutdown confirmation message.
            printf("AI> Exiting harness. Goodbye!\n");
            // Break out of the infinite while loop to end the program.
            break;
        }
        // Check if the user entered the command "hello".
        else if (strcmp(input, "hello") == 0) {
            // Output the hard-coded response greeting.
            printf("AI> Hello! I am your mock AI harness.\n");
        }
        // Execute default branch for any unrecognized input string.
        else {
            // Echo back the parsed user input to simulate a basic model response.
            printf("AI Echo> %s\n", input);
        }
    }

    // Return status code 0 to indicate successful program completion to the operating system.
    return 0;
}
