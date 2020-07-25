/* ************************************************************************** */
/*                                                                            */
/*   Project: cppmodules                                  ::::::::            */
/*   Members: dpattij                                   :+:    :+:            */
/*   Copyright: 2020                                   +:+                    */
/*                                                    +#+                     */
/*                                                   +#+                      */
/*                                                  #+#    #+#                */
/*   while (!(succeed = try()));                   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>

int main(int argc, char **argv)
{
	try {
		// check argument count
		if (argc != 4) {
			std::cout << "argument count invalid" << std::endl;
			return 1;
		}

		// setup files
		std::ofstream inputfile, outputfile;
		inputfile.open(argv[1], std::ios::in);

		std::string outputfilename(argv[1]);
		outputfilename.append(".REPLACE");
		outputfile.open(outputfilename.c_str(), std::ios::out);

		// convert ofstream into stringstream
		std::stringstream buffer;
		buffer << inputfile.rdbuf();

		// read buffer to string
		std::string contents = buffer.str();

		// pretty basic idea:
		// search for a string occurrence
		// write everything up until that occurrence
		// write the replacement string
		// skip the string occurrence
		// redo that until eof is reached
		int prev = 0;
		int next = 0;
		while (true) {
			next = contents.find(argv[2], prev);
			if (next != -1) {
				// std::cout << contents.substr(prev, next - prev);
				// std::cout << argv[3];
				outputfile << contents.substr(prev, next - prev);
				outputfile << argv[3];
				next += strlen(argv[2]);
			}
			else
				break;
			prev = next;
		}

		// close (and flush) all files
		inputfile.close();
		outputfile.flush();
		outputfile.close();

	} catch (std::exception &e) {
		std::cout << "some error occurred: " << e.what() << std::endl;
	}
}
