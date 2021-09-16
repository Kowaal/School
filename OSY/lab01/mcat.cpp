#include <iostream>

using namespace std;

int main(int argc, char** argv) 

{

    FILE * file;

    char * line = NULL;

    size_t len = 0;

    ssize_t read;

    file = fopen(argv[1], "r");

    if (file == NULL)

        exit(EXIT_FAILURE);

    while ((read = getline(&line, &len, file)) != -1) 

    {

        printf("%s", line);

        if (line) {

            free(line);

            line = NULL;

            len = NULL;

        }

    }

    printf("\n");

    

    fclose(file);

    return 0;

}
