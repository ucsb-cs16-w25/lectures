// Check with echo $?

int main(int argc, char *argv[])
{
    // Check if exactly two arguments are provided (excluding program name)
    if (argc != 3)
        return 1;

    char *ptr1 = argv[1]; // Pointer to the first input string
    char *ptr2 = argv[2]; // Pointer to the second input string

    // Loop through both strings character by character
    while (*ptr1 != '\0' && *ptr2 != '\0')
    {
        if (*ptr1 != *ptr2) // If characters at the current position do not match
            return 1;       // Return 1 (error) since strings are different

        ptr1++; // Move to the next character in first string
        ptr2++; // Move to the next character in second string
    }

    // Ensure both strings end at the same position (to check for different lengths)
    if (*ptr1 != *ptr2)
        return 1;

    return 0; // Return 0 (success) if the strings are identical
}