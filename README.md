# ansi-format
C/C++ Code formatting tool that converts modern _"C++"_ comments <'//'> to their ANSI-styled equivalent <'/* ... */'>, keeping original identation width

## Example
Original source:
```cpp
// This is an integer wrapper
// This comment block is supposed to describe
// this class, but this class is totally trivial
// and boring
template<typename I>
class Integer
{
    ...
};
```

Will be formatted to
```cpp
/*
* This is an integer wrapper
* This comment block is supposed to describe
* this class, but this class is totally trivial
* and boring
*/
template<typename I>
class Integer
{
    ...
};
```

## Usage
```bash
ansi-format [-i/--inplace] [-v/--verbose] [SourceFile(s) ...]
```

### Flags
-v / --verbose: enable verbose output to stderr

-i / --inplace: edit files inplace (simillar to sed or clang-format)

-h / --help: display help

## Author
Ron Shabi, 2024 <<ron@ronsh.net>>