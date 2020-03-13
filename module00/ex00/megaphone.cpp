//
// Created by Djevayo Pattij on 1/12/20.
//

#include <cctype>
#include <cstring>
#include <iostream>

int main(int argc, char** argv)
{
    // if there are no arguments,
    // print the default message
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }

    // for each argument
    for (int arg_idx = 1; arg_idx < argc; arg_idx += 1) {
        char* arg = argv[arg_idx];

        // for each character in the argument
        for (size_t cidx = 0; cidx < strlen(arg); cidx += 1) {
            // print its uppercase equivalent
            std::cout << (char)toupper(arg[cidx]);
        }
    }

    // print a newline
    std::cout << std::endl;
    return 0;
}
