To solve the problem of determining whether the factorial of a given number \( N \) is even or not, we need to consider some properties of factorials and even numbers. Here’s the step-by-step reasoning and approach to solve this problem efficiently:

### Key Observations
1. **Factorial Growth**:
   - The factorial of a number \( N \) (denoted as \( N! \)) is the product of all positive integers up to \( N \).
   - For example, \( 5! = 5 \times 4 \times 3 \times 2 \times 1 = 120 \).

2. **Even and Odd Factorials**:
   - Any integer greater than or equal to 2 has at least one even factor (2 or more), making the factorial even.
   - The only factorial that is not even is \( 1! \), which equals 1, and is odd.

### Conclusion
- For \( N = 1 \), \( 1! = 1 \) which is odd.
- For \( N \geq 2 \), \( N! \) will always include the number 2 as a factor, thus making \( N! \) even.

### Implementation
Given the constraints \( 1 \leq N \leq 10^9 \), calculating the factorial directly for such large numbers is computationally infeasible. However, based on our observations, we can simplify the task:
- If \( N \) is 1, print "NO".
- If \( N \) is 2 or greater, print "YES".

