
## Brainstorming
### Potential Features
- Built-in types (static typing)
    - `int` (32-bit)
    - `float` (32-bit)
    - `double` (64-bit)
    - `char`
    - `string`
    - `bool`
    - Lists `[type]`
    - Hashmaps `{type}`
        - Custom key types with functions that implement `hash()`
    - Functions
    - Classes
    - `nil`
- Control flow constructs
    - `if` conditions 
    - `for` loops
    - `while` loops
- Garbage Collection
    - TODO: Which strategy?
        - Tracing (mark-and-sweep)
        - Reference counting
- Modules
    - TODO: How?
        - Idea 1: Module AST node
- Type inference
- Special debug flags
    - `--gen-ast` to print out the AST
    - `--gen-llvm-ir` to print out the LLVM IR
- Standard library
    - IO
    
### Implementation Order
1. Lexer
2. Parser
3. Additional AST Passes (e.g. type inference)
4. Code generation

### Reserved Keywords (Based on Below)
- `let`
- `mut`
- `string`
- `int`
- `bool`
- `fn`
- `return`
- `for`
- `class`
- `module`
- `import`
- `float`
- `while`
- `if`
- `else`
- `char`
- `double`
- `nil`

### Potential Examples

```rust
// Constant
let x = 0;

// Variable
let mut y: int = 0;
y = 37;

// Lists
let mut l: [int] = [];

let mut l1: [int] = [1,2,3,4];
l1[2] = 0;

// Hashmaps (keys must be hashable)
let mut m: {string, int} = [{"test",  1}, 
                            {"test2", 6}];
m["test"] = 3;


// === Functions 
// Automatically infer return type.
fn func(x: int, y: int) {
    return x + y;
}

// Automatically infer argument types, manually annotate return type
fn func2(x, y) -> int {
    return x - y;
}

// Alternative style (the above examples gets translated to the below)
let func3: fn(x: int, y: int) -> int = {
    return x * y;
}

// With default arguments
let func4: fn(x = 3: int, y = 5: int) -> int = {
    return x / y;
}

// Assigining functions to other functions
let func4 = func3;

// === Conditionals 
if 3 > 1 {
    println("Printed");
}

if 2 > 1 && 1 < 0 {
    println("Not printed");
}

// === Looping mechanisms 
let mut c: int = 5;
while c > 0 {
    println(c);
    c--;
}

for i: int in [1..10] {
    println(i);
}

// === Classes 
class Point {
    mut x: float,
    mut y: float
};

let p = Point(3.0, 4.0);

class Circle {
    mut p: Point;
    mut radius: float;
};

class CircleWithFunction {
    mut circle: Circle;
    mut area: fn() -> float = {
        return Circle.radius * 2 * 3.1415;
    };
};

// Inheritance
class Parent {
    mut attr: string;
};

class Child is Parent {
    mut derivedAttr: string;
};

let mut parent: Parent = Child();

// === Modules 
// File a.tda

module A {
    let mut x = 0;
};

// File b.tda
import A;
module B {
    
};
