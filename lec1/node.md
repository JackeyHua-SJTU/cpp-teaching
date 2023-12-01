### Computer Basics
#### CLI (Command Line Interface)
- A direct way to interact with the computer, *Shell*
- **Terminal**: A program that runs a shell

```shell
    cd (change directory) [.., ~, /, .]
    ls (list) [-a, -l]
    pwd (print working directory)
    mkdir (make directory)
  ```

#### Programming Languages
- Machine Language: 0 and 1
- Assembly Language: Human readable, but still machine language. Interact directly with hardware. Interpreted by an **assembler**.
- High-level Language

#### C++ 
Common used compilers: `g++`, `clang++`

- Preprocess
  - `g++ -E`
- Compile into assembly
  - `g++ -S`
- Assemble into machine code
  - `g++ -c`
- Link into executable
  - Dynamic Library `.so`
  - Static Library `.a`


### C++ Basics
- Annotation
  - `//`
  - `/* */`
- Header File
  - `#include <standard lib>`
  - `#include "user defined"`
  - reuse code from other files
- Namespace
  - `using namespace std;`
  - `using std::cout;`
  - Variables with same name in different namespaces are allowed
    - `A::x` and `B::x`
- Variable
  - integer
    - `int`
    - `short`
    - `long`
    - `long long`
    - `unsigned`
  - floating point
    - `float`
    - `double`
    - `long double`
  - character
    - `char`
  - boolean
    - `bool`
  - enumeration
    - `enum`
  - Declare and initialize
    - `int x = 1;`
    - `int x(1);`
    - `int x{1};`
    - `int x; x = 1;`

