# Terminal Calculator in C

## Deliverables
- `calculator.c`
- `README.md` (this file)

## Compile Command
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator`

## Run Instructions
`./calculator`  
Follow the on-screen menu to perform calculations.

## Supported Operations
- Addition (`+`)
- Subtraction (`-`)
- Multiplication (`*`)
- Division (`/`)

## Numeric Behavior
- Works with integers only
- Division results are truncated to integers
- No floating-point operations

## Known Limitations
- Non-numeric input may cause undefined behavior
- Only integer menu options are validated
- Advanced input validation is optional
