<h1>C - Function pointers Project</h1>
<p>During this project, I acquired knowledge on function pointers in C, comprehending their purpose, memory addresses, and practical implementation. I grasped how to leverage them effectively, expanding my programming capabilities.</p>

<h2>Learning Objectives</h2>
<p>At the end of this project, I am expected to be able to explain to anyone, without the help of Google:<br>What are function pointers and how to use them<br>What does a function pointer exactly hold<br>Where does a function pointer point to in the virtual memory</p>

<h2>General Definitions</h2>
<ul>
<h3><li>What are function pointers and how to use them</li></h3>
<p>In C, function pointers are pointers that point to functions instead of data variables. They provide a way to store the address of a function and allow you to call that function indirectly through the pointer. Function pointers are powerful and versatile, commonly used in various scenarios such as callback mechanisms, dynamic dispatch, and function arrays.</p>
<h3><li>What does a function pointer exactly hold</li></h3>
<p>In C, a function pointer holds the memory address of a function. Instead of pointing to data variables like regular pointers, function pointers point to the starting address of a specific function in memory. This allows indirect invocation of functions through the pointer, providing flexibility and dynamic behavior in the code.</p>
<h3><li>Where does a function pointer point to in the virtual memory</li></h3>
<p>In C, a function pointer points to the starting address of the machine code representing a specific function in the virtual memory. When a C program is compiled and executed, each function is translated into machine code, which is a sequence of binary instructions that the processor can execute.<br>The function pointer stores this memory address, which is the location in the virtual memory where the machine code of the function resides. When the program uses the function pointer to call the function indirectly, it jumps to that memory address and begins executing the instructions of the function.</p>
</ul>
<h2>Tasks</h2>
0. What's my name - <b>0-print_name.c:</b>C function that prints a name.<br>

1. If you spend too much time thinking about a thing, you'll never get it done - <b>1-array_iterator.c:</b> C function that executes a function given as a parameter on each element of an array.<br>

2. To hell with circumstances; I create opportunities - <b>2-int_index.c:</b> C function that searches for an integer.<br>Returns the index of the first element for which the <b>cmp</b> function does not return <b>0</b>.<br>
If no element is matched or size <= 0, the function returns <b>-1</b>.<br>

3. A goal is not always meant to be reached, it often serves simply as something to aim at - <b>3-op_functions.c:</b> File containing the following five functions:<br>
op_add: Returns the sum of a and b.<br>
op_sub: Returns the difference of a and b.<br>
op_mul: Returns the product of a and b.<br>
op_div: Returns the division of a by b.<br>
op_mod: Returns the remainder of the division of a by b.<br>

<b>3-get_op_func.c:</b> C function that selects the correct function from <b>3-op_functions.c</b> to perform the operation asked by the user.<br>If the operator argument s does not match any of the five expected operators <b>(+, -, *, /, %)</b>, the function returns <b>NULL</b>.<b>3-main.c:</B> C program that performs simple mathematical operations.<br>Prints the result of the operation, followed by a new line.<br>Usage ./a.out num1 operator num2<br>The program assumes num1 and num2 are integers that can be converted from string input to int using atoi.<br>The program assumes that the result of all operations can be stored in an int.<br>operator is one of either + (addition), - (subtraction), * (multiplication), / (division), or % (modulo).<br>If the number of arguments is incorrect, the program prints Error followed by a new line and exits with a status value of 98.<br>If the operator is none of the above, the program prints Error followed by a new line and exits with a status value of 99.<br>If the user tries to divide (/ or %) by 0, the program prints Error followed by a new line and exits with a status value of 100.<br>

4. Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker - C program that prints the opcodes of its own main function, followed by a new line.<br>Usage: <b>./main number_of_bytes</b><br>Output format:<br>the opcodes should be printed in hexadecimal, lowercase<br>each opcode is two char long<br>
listing ends with a new line.
