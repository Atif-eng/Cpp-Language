# Cpp-Language

A beginner-friendly collection of small C++ programs covering core language concepts. Each file is meant to be simple, standalone, and easy to compile and run individually.

This repository is useful for learning:

- Hello world and output basics
- Variables and data types
- Operators and math operations
- Conditional logic
- Loops
- Functions
- Strings and input handling

## Repository structure

```text
Cpp-Language/
├── Hello_world.cpp
├── comment.cpp
├── data_type.cpp
├── output.cpp
├── user_input.cpp
├── Function/
│   └── function.cpp
├── Loops/
│   ├── for_loop.cpp
│   ├── nested.cpp
│   └── average_using_do_loop.cpp
├── if_else/
│   └── if else.cpp
├── math_operations/
│   ├── Max_Function.cpp
│   ├── Min_Funxtion.cpp
│   ├── Sqrt.cpp
│   ├── log.cpp
│   └── round.cpp
├── operator/
│   ├── Arthimetic_operator.cpp
│   ├── Assihnment_operator.cpp
│   ├── comparesion_operator.cpp
│   ├── divide.cpp
│   ├── multi.cpp
│   ├── sub.cpp
│   └── sum.cpp
├── string method/
│   ├── Hello_world.cpp
│   ├── append.cpp
│   ├── find_ last_element_in_string.cpp
│   ├── indexing.cpp
│   ├── length_of_string.cpp
│   ├── special_character.cpp
│   ├── update_in_a_string.cpp
│   └── user_input.cpp
└── README.md
```

## Topics covered

- Basic syntax and comments
- `cout` / `cin` usage
- Primitive data types
- Arithmetic, comparison, and assignment operators
- Mathematical functions (`sqrt`, `log`, `round`)
- `if` / `else` conditions
- `for`, `while`, and `do-while` loops
- String handling and indexing
- Simple function examples

## Requirements

You need a C++ compiler installed on your system.

Common options:

- `g++` (GNU Compiler Collection)
- `clang++`

## Compile and run a file

From the repo root, compile a single program:

```bash
g++ Hello_world.cpp -o hello
./hello
```

To compile a program inside a folder:

```bash
g++ "string method/length_of_string.cpp" -o length_string
./length_string
```

## Example

```cpp
#include <iostream>
using namespace std;

int main() {
    string s = "Hello world";
    cout << s;
    return 0;
}
```

## Notes

This repository is intentionally simple and learning-oriented. Most files are independent examples and do not rely on a shared project build system.

Some filenames include minor spelling inconsistencies or placeholder file names, which may be useful to fix later as the repo is cleaned up.

## Suggested next steps

- Pick a topic directory and run each example.
- Modify the examples to experiment with different inputs.
- Try combining multiple concepts into a small project.

## License

This repository does not currently include a license file. If you plan to reuse or distribute the code, add a license explicitly.
