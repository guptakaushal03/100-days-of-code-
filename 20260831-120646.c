#include <stdio.h>

int main() {
    printf("Step 1\n");

    goto jump_here; // Instantly teleports past Step 2

    printf("Step 2 (This gets skipped!)\n");

    jump_here: // This is the label bookmark
    printf("Step 3 (We landed here safely!)\n");

    return 0;
}
    