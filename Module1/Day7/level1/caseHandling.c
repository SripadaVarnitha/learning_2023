//to perform the case handling of the given file
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void changeCase(char *str, char option)
{
    int i = 0;
    switch (option)
    {
        case 'u':
            while (str[i])
            {
                str[i] = toupper(str[i]);
                i++;
            }
            break;
        case 'l':
            while (str[i])
            {
                str[i] = tolower(str[i]);
                i++;
            }
            break;
        case 's':
            str[0] = toupper(str[0]);
            while (str[i])
            {
                if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
                {
                    str[i + 1] = toupper(str[i + 1]);
                }
                else
                {
                    str[i + 1] = tolower(str[i + 1]);
                }
                i++;
            }
            break;
        default:
            break;
    }
}

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        printf("Insufficient arguments.\n");
        printf("Usage: ./cp <option> <source_file> <destination_file>\n");
        return 1;
    }

    char option = 'n'; // 'n' represents no option passed
    if (argc > 3)
    {
        option = argv[1][1];
    }

    FILE *sourceFile = fopen(argv[2], "r");
    FILE *destinationFile = fopen(argv[3], "w");

    if (!sourceFile)
    {
        printf("Unable to open the source file.\n");
        return 1;
    }

    if (!destinationFile)
    {
        printf("Unable to create the destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    char line[256];
    while (fgets(line, sizeof(line), sourceFile))
    {
        changeCase(line, option);
        fputs(line, destinationFile);
    }

    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copied successfully with case handling.\n");

    return 0;
}
