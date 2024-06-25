
## Problem: Factorial Even or Odd

### Problem Description

Given an integer \( N \) (1 ≤ \( N \) ≤ \( 10^9 \)), determine whether the factorial of \( N \) is even or odd.

### Input
- A single integer \( N \).

### Output
- Print "YES" if the factorial of \( N \) is even.
- Print "NO" if the factorial of \( N \) is odd.

### Example
- **Input**: 9
- **Output**: YES

### Explanation
- Factorials example: \( 4! = 4 \times 3 \times 2 \times 1 = 24 \), which is even.

### Solution

Given the constraints, calculating the factorial of \( N \) directly for large \( N \) is impractical due to extremely large numbers. However, an optimized solution is based on the properties of factorials:

1. For \( N = 1 \), \( 1! = 1 \) which is odd.
2. For \( N \geq 2 \), the factorial \( N! \) will always include the number 2 as a factor, making it even.

### Code

The provided solution checks whether the factorial of \( N \) is even or odd without actually calculating the factorial for large values of \( N \):

```c
#include <stdio.h>

int main()
{
    long n;
    scanf("%ld", &n);
    if (n == 1)
        printf("NO");
    else
        printf("YES");

    return (0);
}
```

### Explanation of Code

1. **Input Handling**: Reads the input value into `n`.
2. **Even/Odd Check**:
   - If \( n \) is 1, it prints "NO" since \( 1! = 1 \) which is odd.
   - For \( n \geq 2 \), it prints "YES" because the factorial of any number 2 or greater is even.

### Additional Notes

- This approach avoids unnecessary computation and efficiently solves the problem within the given constraints.

