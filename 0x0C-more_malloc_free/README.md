<h1>C - More malloc, free Project</h1>
<p>In this project, I gained experience in using essential memory management functions in C, such as <b>exit()</b>, <b>calloc()</b>, and <b>realloc()</b>. These functions allowed me to control program termination, allocate memory dynamically, and resize memory blocks as needed.</p>

<h3>Learning Objectives for this project</h3>
<p>At the end of this project, you are expected to be able to explain to anyone, without the help of Google: How to use the exit function, What are the functions calloc and realloc from the standard library and how to use them</p>

<h3>General</h3>
<ul>
<h2><li>How to use the exit function</li></h2>
<p>In C, the <b>exit()</b> function is used to terminate the program and return control to the operating system. It allows you to exit the program at any point and perform cleanup tasks before termination. The <b>exit()</b> function takes an integer argument called the exit status, which is used to indicate the reason for program termination.</p> 
<p>It's worth noting that the <b>exit()</b> function immediately terminates the program and skips any remaining code after the <b>exit()</b> statement in the same function. If you need to perform any cleanup tasks before exiting, such as freeing allocated memory or closing files, make sure to do so before calling <b>exit()</b>.</p>
<h2><li>What are the functions <b>calloc</b> and <b>realloc</b> from the standard library and how to use them</li></h2>
<p>
1. <b>calloc()</b>: The <b>calloc()</b> function is used to dynamically allocate memory for an array of elements, initializing them to zero. It takes two arguments: the number of elements to allocate and the size (in bytes) of each element.

2. <b>realloc()<b>: The <b>realloc()</b> function is used to dynamically resize previously allocated memory. It takes two arguments: a pointer to the previously allocated memory block and the new size (in bytes) to be allocated.</p>
</ul>

<h3>Tasks</h3>
<p>
0. Trust no one - C function that returns a pointer to a newly-allocated space in memory using <b>malloc</b>. If <b>malloc</b> fails, the function causes normal process termination with a status value of<b> 98</b>.

1. string_nconcat - C function that returns a pointer to a newly-allocated space in memory containing the concatenation of two strings.<br> The returned pointer contains <b>s1</b> followed by the first <b>n</b> bytes of <b>s2</b>, null-terminated.<br> If <b>n</b> is greater than or equal to the length of <b>s2</b>, the entire string <b>s2</b> is used.<br> If <b>NULL</b> is passed, the function treats the parameter as an empty string.<br> If the function fails - returns <b>NULL</b>.

2. <b> ` _calloc`</b> - C function that returns a pointer to a newly-allocated space in memory for an array, using m<b>alloc</b>.<br> Allocates memory for an array of <b>nmemb</b> elements of <b>size</b> bytes each.<br> The memory is set to zero.<br> If <b>nmemb</b> = 0,<b> size</b> = <b>0</b>, or the function fail - returns <b>NULL</b>.

3. array_range - C function that returns a pointer to a newly-allocated space in memory containing an array of integers. The array contains all the values from parameters <b>min</b> to <b>max</b>, inclusive, ordered from <b>min</b> to <b>max</b>. If <b>min > max</b> or the function fails - returns <b>NULL</b>.

4. <b> `_realloc`</b> - C function that reallocates a memory block using malloc and free.<br> The parameter ptr is a pointer to the memory previously allocated with a call to malloc: malloc(old_size).<br>The paramter old_size is the size, in bytes, of the allocated space for ptr.<br> The paramter new_size is the new size, in bytes, of the new memory block. <br> The contens of ptr are copied to the newly-allocated space in the range from the start of ptr up to the minimum of old_size and new_size. <br> If new_size > old_size, the "added" memory is not initialized.<br> If new_size == old_size, the function returns ptr.<br> If ptr is NULL, the call is equivalent to malloc(new_size) for all values of old_size and new_size.<br> If new_size = 0 and ptr is not NULL, the call is equivalent to free(ptr) and the function returns NULL.

5. We must accept finite disappointment, but never lose infinite hope - C program that multiplies two positive numbers.<br> Usage: mul num1 num2.<br> The function assumes num1 and num2 are passed in base 10.<br> Prints the result followed by a new line.<br> If the number of arguments is incorrect or either of num1 or num2 contains non-digits, the function prints Error followed by a new line and exits with a status of 98.</p>
