<h1>0x08. C - Recursion Project</h1>
<p> In this project, I learned about recursion in C.</p>

<h3>Learning Objectives</h3>
<p>At the end of this project, I am able to explain to anyone what Recursion is, without the help of Google</p>

<h3>General Definitions</h3>
<ul>
<li>What is recursion</li>
<p>Recursion is a programming technique or concept in which a function calls itself directly or indirectly to solve a problem by breaking it down into smaller, simpler instances of the same problem. In simpler terms, recursion involves solving a problem by solving smaller instances of the same problem.<br> When a function calls itself, it enters a new instance of that function on the call stack. Each instance of the function works on a smaller or simpler version of the original problem until it reaches a base case, which is a condition that specifies when the function should stop calling itself recursively. The base case is essential to prevent infinite recursion and ensure that the recursion eventually terminates.</p>
<li>How to implement recursion</li>
<p>To implement recursion in a programming language, you typically need to define a recursive function. Here's a step-by-step guide on how to implement recursion:

1. <b>Identify the base case:</b> Determine the simplest version of the problem that can be solved without further recursion. The base case serves as the termination condition for the recursive function.

2. <b>Define the recursive function:</b> Create a function that will call itself to solve smaller instances of the problem. The function should take necessary parameters and return a value or perform some action.

3. <b>Check for the base case:</b> At the beginning of the recursive function, check if the base case has been reached. If so, return the appropriate value or perform the necessary action to stop the recursion.

4. <b>Break down the problem:</b> If the base case has not been reached, break down the original problem into smaller subproblems. Determine how to transform the current problem into a simpler version that can be solved recursively.

5. <b>Make the recursive call:</b> Call the recursive function within itself, passing the smaller subproblem as arguments. This step effectively reduces the problem size and moves closer to the base case.

6. <b>Combine results:</b> If necessary, combine the results obtained from the recursive calls to form the final result or perform additional computations.

7. <b>Return the result:</b> Return the final result of the recursive function.</p>
<li>In what situations you should implement recursion</li>
<p>Recursion is particularly useful in situations where a problem can be divided into smaller, simpler instances of the same problem. Here are some common situations where implementing recursion can be beneficial:

1.<b> Tree or graph traversal:</b> When dealing with tree or graph data structures, recursion can be used to traverse and process each node or vertex. By recursively calling the function on child nodes or adjacent vertices, you can perform operations such as searching, printing, or modifying the structure.

2. <b>Divide and conquer algorithms:</b> Many algorithms follow a "divide and conquer" approach, where a problem is divided into subproblems of the same type. Recursion can be employed to solve these subproblems and combine their results to solve the original problem. Examples include sorting algorithms like merge sort and quicksort.

3. <b>Backtracking:</b> Backtracking algorithms involve exploring all possible solutions to a problem by trying different choices at each step and backtracking when a solution is not viable. Recursion is often used to implement backtracking algorithms, as each recursive call represents a new choice or decision point.

4. <b>Mathematical sequences and series: </b>Certain mathematical problems, such as computing the Fibonacci sequence or finding combinations and permutations, can be naturally solved using recursive approaches. The problem is broken down into simpler instances, allowing you to apply the same computation recursively.

5. <b>Dynamic programming:</b> Recursive functions are often used in dynamic programming, a technique that solves complex problems by breaking them down into overlapping subproblems. Recursive calls can help memoize (store) intermediate results, reducing redundant computation and improving efficiency.

6. <b>Parsing and expression evaluation:</b> When parsing expressions or evaluating mathematical formulas, recursion can be employed to handle nested structures. Recursive descent parsing, for example, involves defining recursive functions for each grammar rule to parse complex expressions.</p>
<li>In what situations you shouldn’t implement recursion</li>
<p>While recursion is a useful technique in many scenarios, there are certain situations where it might not be the best choice. Here are some situations where you may want to avoid implementing recursion:
1. <b>Large input sizes:</b> Recursive algorithms can consume a significant amount of memory due to the call stack. If the input size is very large, recursion may lead to stack overflow errors or excessive memory usage. In such cases, an iterative or optimized approach might be more appropriate.

2. <b>Tail recursion not supported:</b> Some programming languages do not optimize tail recursion, which can result in excessive stack usage for deep recursion. If tail recursion is not supported or optimized in your chosen language, using recursion for problems that require deep recursion might lead to performance issues.

3. <b>Performance requirements:</b> Recursive algorithms can be less efficient than their iterative counterparts due to the overhead of function calls and potential redundant computation. If performance is a critical factor and there are alternative non-recursive approaches available, it may be advisable to consider those options.

4. <b>Problems with overlapping subproblems:</b> Recursive algorithms can suffer from inefficiency when there are overlapping subproblems, i.e., when the same subproblem is solved multiple times. In such cases, dynamic programming or memoization techniques can be used to avoid redundant computation and improve performance.

5. <b>Complex control flow:</b>Recursive algorithms can sometimes result in complex control flow, making the code harder to understand and debug. Iterative solutions may provide clearer and more maintainable code in such situations.

6. <b>Limited stack size:</b> In some constrained environments, such as embedded systems or platforms with limited stack size, recursive algorithms may not be feasible due to the risk of exceeding the available stack space. Iterative approaches or alternative algorithms that use an explicit stack data structure might be more suitable.

7. <b>Sequential dependencies:</b>If solving a problem requires processing the results in a specific order or maintaining a certain sequence, recursive algorithms may not be the best choice. Iterative solutions often offer more control over the order of operations and can be better suited for problems with sequential dependencies.</p>
</ul>

<h3>Tasks</h3>
<p>
0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget - C function that prints a string, followed by a new line.

1. Why is it so important to dream? Because, in my dreams we are together - C function that prints a string in reverse.

2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange - C function that returns the length of a string.

3. You mustn't be afraid to dream a little bigger, darling - C function that returns the factorial of a given number.

4. Once an idea has taken hold of the brain it's almost impossible to eradicate - C function that returns the value of a number x raised to the value of an input y. If y is less than 0, the function returns -1.

5. Your subconscious is looking for the dreamer - C function that returns the natural square root of a number. If the number does not have a natural square root, the function returns -1.

6. Inception. Is it possible? - C function that checks in an integer is a prime number. If the integer is prime, the function returns 1. Otherwise, the function returns 0.

7. They say we only use a fraction of our brain's true potential. Now that's when we're awake. When we're asleep, we can do almost anything - C function that checks if a string is a palindrome. If the string is a palindrome, the function returns 1. Otherwise, the function returns 0.

8. Inception. Now, before you bother telling me it's impossible... - C function that compares two strings s1 and s2. s2 can contain the special character `*`.  If the strings can be considered identical, the function returns 1. Otherwise, the function returns 0. </p>

