<h1>C - Variadic functions Project</h1>
<p>Throughout the course of this project, I learned significant insights on the use of variadic functions in C, notably the actual application of the <b>va_start</b>, <b>va_arg</b>, and <b>va_end</b> macros. I also investigated the relevance of the const type qualifier and its implementation in the C programming language. By investigating these ideas, I gained a better knowledge of how to effectively handle variable arguments and enforce immutability for improved program stability and dependability. As a result, this experience has widened my expertise in C programming and improved my toolset for dealing with a variety of problems in future projects.</p>

<h2>Learning Objectives</h2>
<p>At the end of this project, I am expected to be able to explain to anyone, without the help of Google:<br>What are variadic functions<br>How to use <b>va_start</b>, <b>va_arg</b> and <b>va_end</b> macros<br>Why and how to use the <b>const</b> type qualifier.</p>

<h2>General Definitions</h2>
<ul>
<h3><li>What are variadic functions</li></h3>
<p>In C, a variadic function is a function that can accept a variable number of arguments. This allows you to create functions that can work with a different number of parameters each time they are called. Variadic functions are commonly used when the number of arguments is not known in advance or when dealing with functions that can perform operations on different types of data. The standard C library provides a macro and a set of functions that allow you to work with variadic arguments.</p>
<h3><li>How to use va_start, va_arg and va_end macros</li></h3>
1. Include the <stdarg.h> header:<br>
Before using the variadic macros, make sure to include the <stdarg.h> header in your C source file. This header provides the necessary functionality for working with variadic arguments.<br>

2. Define the variadic function:<br>
Create a function that takes a variable number of arguments by including an ellipsis ... in the function parameter list after the fixed parameters.<br>

3. Initialize the <b>va_list</b> with <b>va_start</b>:<br>
Inside the function, declare a <b>va_list</b> type variable, and initialize it using the <b>va_start</b> macro. The <b>va_start</b> macro takes two arguments: the <b>va_list</b> variable and the last fixed parameter of the function.<br>

4. Access arguments with <b>va_arg</b>:<br>
To access individual arguments within the function, use the <b>va_arg</b> macro. This macro takes two arguments: the <b>va_list</b> variable and the type of the argument. It returns the value of the next argument of the specified type.<br>

5. Clean up with <b>va_end</b>:<br>
After processing the variadic arguments, make sure to clean up the <b>va_list</b> using the <b>va_end</b> macro.

<h3><li>Why and how to use the const type qualifier</li></h3>
<p>The const type qualifier in C is used to declare variables as read-only, meaning their values cannot be modified once they are initialized. It is a valuable feature that can enhance the safety, maintainability, and readability of your code.</p>

<h3>main reasons why and how to use the const type qualifier:</h3>
1. <b>Prevent accidental modification:</b> By using <b>const</b>, you can protect variables from unintended changes in your code. This can help avoid bugs and make your code more robust.<br>

2. <b>Improve code readability:</b> Marking variables as <b>const</b> makes it clear to other developers that the variable's value should not be changed. This improves the readability of your code and makes it easier to understand the intended usage of each variable.<br>

3. <b>Enable compiler optimizations:</b> The <b>const</b> qualifier provides valuable information to the compiler about the immutability of variables. This can enable the compiler to perform optimizations and potentially improve the performance of your code.<br>

4. <b>Enhance program correctness:</b> Using <b>const</b> can help catch programming errors during the compilation phase. If you attempt to modify a const variable, the compiler will generate an error, alerting you to the problem.<br>

<h3>How to use const:</h3>
1. <b>Constant variables:</b> To declare a constant variable, use the const keyword before the data type during variable declaration. Once assigned a value, a constant variable cannot be modified later in the program.<br>

2. <b>Constant pointers:</b> You can use const with pointers to indicate that the data pointed to by the pointer is constant, and therefore, it should not be modified using that pointer.<br>

3. <b>Constant pointer to a constant:</b> You can also have a constant pointer to a constant, which means both the pointer and the data it points to cannot be modified.<br>

4. <b>Function parameters:</b>You can use const to declare function parameters as read-only, indicating that the function will not modify their values.<br>

5. <b>Function return values:</b> You can use const to declare functions that return constant values. This means that the returned value should not be modified.
</ul>

<h2>Tasks</h2>
0. Beauty is variable, ugliness is constant -  function that returns the sum of all its paramters.<br> If the parameter <b>n == 0</b>, the function returns <b>0</b>.<br>

1. To be is to be the value of a variable - C function that prints numbers, followed by a new line.<br> The paramter <b>separator</b> is the string to be printed between numbers.<br>The paramter <b>n</b> is the number of integers passed to the function.<br>If <b>separator</b> is<b> NULL</b>, it is not printed.<br>

2. One woman's constant is another woman's variable - C function that prints strings, followed by a new line.<br>
The parameter <b>separator</b> is the string to be printed between the strings.<br>
The parameter <b>n</b> is the number of strings passed to the function.<br>
If <b>separator</b> is <b>NULL</b>, it is not printed.<br>
If one of the strings is <b>NULL</b>, the function prints <b>(nil)</b> instead.<br>

3. To be is a to be the value of a variable - C function that prints anything.
