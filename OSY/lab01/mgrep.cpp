#include <iostream>

using namespace std;

int main(int argc, char** argv) 

{

    string string_line;

    string the_word;

    if(argv[1])

    {

        the_word = argv[1];

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

        if (string_line.find(the_word) != string::npos) 

        {

            printf("%s\n", line_to_print.c_str());

        } 

        if (line) 

        {

            free(line);

            line = NULL;

            size = NULL;

        }

    }

    return 0;

}
