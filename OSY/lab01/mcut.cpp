#include <iostream>

using namespace std;

int main(int argc, char** argv) 

{

    int final_length;

    string string_line;

    if(argv[1])

    {

        final_length = atoi(argv[1]);

    }

    else {

        return 1;

    }

    char *line = NULL;

	size_t size = 0;

	ssize_t ret;

	while ((ret = getline(& line, & size, stdin)) != -1) 

    {

        string_line = line;

        string_line = string_line.substr(0, final_length);

        printf("%s\n", string_line.c_str());

        if (line) 

        {

            free(line);

            line = NULL;

            size = NULL;

        }

    }

    return 0;

}
