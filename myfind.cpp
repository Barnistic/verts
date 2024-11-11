#include <iostream>

int main() {
  //Usage: /myfind [-R] [-i] searchpath filename1 [filename2] …[filenameN]
  //Example: ./myfind ./ test.txt test.doc test

  /* Argument list:
    -R:
            o should switch myfind in recursive mode and find all matching files in and below the searchpath folder
                    (else the files should only be searched in the searchpath folder)
    • -i
            o case in-sensitive search
    • searchpath
            o can be an absolute or a relative path.
    • filename
            o only filenames as plain string
            o no support for paths, subpaths, wildcards required.
   */

  //Output: <pid>: <filename>: <complete-path-to-found-file>\n

  //Each file search should be a child-process using fork()

  /* Marking System:
      9: concurrency and synchronized output
    • 3: argument management with proper handling of multiple files
    • 3: recursive find
    • 2: case-insensitive use
    • 3: Makefile, structure, error-handling, code quality, indentation, comments
    • 5: protocol
   */

  std::cout << "Test" << std::endl;

  return 0;
}