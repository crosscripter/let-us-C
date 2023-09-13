
# Make Array
A simple example of common concepts in C:

* Manual memory allocation via `malloc`
* `atexit` exit handlers to `free` up memory
* Dynamic array population using `rand` 
* Scanning user input with `scanf`
* Failing gracefully with `fprintf(stderr, ...)` and proper `EXIT_` codes
* Command-line argument parsing with `atoi`
* Block sizing with `sizeof` and using `size_t` 
* Pointer creation, tracking and addressing
* Bitstrings via `#define` macros

## Usage
run `make` to compile and build the executable:
```
$ make
```

and then run the program:
```
$ makeArray <count of elements>
```
If the `<count>` of elements is missing the program
will prompt you to enter a size between 0 and `MAX_SIZE`

The program will then dynamicall allocate enough memory to 
hold an array of `<count>` random `int` elements and display the 
addresses of each offset of the allocated block, plus the 
hex, binary and decimal representation of each byte.

WHen the program receives the exit signal the `atexit` cleanup handler
is called and all dynamically allocated memory including our array is
zeroed out and then `free`ed back to the host OS.


## TODOS
* The bitstrings are not always correct 
* Memory leak detection via `valgrind` (so far nothing I can see)


<center>Created with low-level <3 by `@crosscripter`</center>
