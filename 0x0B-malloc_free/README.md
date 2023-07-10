<h1>C - malloc, free Memory Allocation Project</h1>
<p>During this project, I acquired knowledge about the distinction between automatic and dynamic location in addition to gaining proficiency in utilizing essential concepts such as malloc, free, and valgrind in the C programming language. Through hands-on experience, I gained a deeper understanding of memory management and the significance of efficient resource allocation. Moreover, I honed my skills in debugging and identifying memory leaks using the powerful tool, valgrind, which facilitated the development of robust and error-free code.</p>

<h3>Learning Objectives</h3>
<p> At the end of this project, I am expected to be able to explain to anyone, without the help of Google:C - malloc, free</p>

<h3>General Definitions</h3>
<ol>
<b><li>What is the difference between automatic and dynamic allocation</li></b><br>
<h2>Automatic allocation and dynamic allocation are two approaches used in computer programming to manage memory resources.</h2><br>
<h2>Automatic Allocation:</h2><br>
<p>Automatic allocation, also known as static allocation or stack allocation, is a memory management technique where the memory for variables is allocated and deallocated automatically by the compiler or runtime environment. In this approach, memory is allocated for variables when they are declared and deallocated when they go out of scope. The allocation and deallocation happen at compile time or runtime, respectively, based on the program's structure.</p><br>
<h2>The key characteristics of automatic allocation are:</h2><br>
<p>
1. Memory is allocated on the stack.
2. The allocation and deallocation are handled automatically by the system.
3. The size of memory for variables is typically known at compile time.
4. Variables have a limited lifetime within their scope.
5. It is a fast allocation method as memory management is straightforward.</p>

<h2> Dynamic Allocation:</h2>
<p>Dynamic allocation, also known as heap allocation or runtime allocation, is a memory management technique where memory is allocated and deallocated explicitly at runtime. In this approach, the programmer manually requests memory from the heap when needed and explicitly releases it when no longer required. Dynamic allocation provides flexibility in managing memory resources.</p><br>

<h2>The key characteristics of dynamic allocation are:</h2><br>
<p>
1. Memory is allocated on the heap.
2. The allocation and deallocation are explicitly controlled by the programmer using functions like <b>malloc,</b> <b>free</b> etc.
3. The size of memory for variables can be determined at runtime.
4. Variables can have a longer lifetime beyond their immediate scope.
5. It requires manual memory management, including proper deallocation, to avoid memory leaks.<br>
<li>What is <b>malloc</b> and <b>free</b> and how to use them</li>
<h2>malloc and free are functions used in the C programming language to dynamically allocate and deallocate memory on the heap.</h2><br>
<h2>malloc:</h2>
<p><b>malloc</b>  (short for "memory allocation") is a library function in C that is used to request a block of memory from the heap. It takes the size of the memory block to be allocated as an argument and returns a pointer to the beginning of the allocated memory.</p><br>
<h2>free:</h2>
<p><b>free</b> is a library function in C used to deallocate or release the previously allocated memory block on the heap. It takes a pointer to the memory block as an argument and frees the memory associated with it, making it available for future use.</p>
<h2>It's important to note a few things about malloc and free:</h2>
<p>
1. The memory allocated by <b>malloc</b> should be released using <b>free</b> to avoid memory leaks.
2. <b> malloc</b> may fail to allocate memory, in which case it returns a NULL pointer. It's essential to check for this condition before using the allocated memory.
3. The memory allocated by <b>malloc</b> is uninitialized, meaning its contents are undefined. It's the programmer's responsibility to initialize the memory before using it.
4. <b>free</b> should only be called with a pointer that was previously allocated using <b>malloc</b> or related functions. Calling <b>free</b> with an invalid pointer or a pointer that has already been freed can lead to undefined behavior.<br>
<p>Properly managing memory with malloc and free is crucial to avoid memory leaks and ensure efficient memory usage in C programs.</p>
<b><li>Why and when use malloc</li></b><br>
<h2>The malloc function is used in C to dynamically allocate memory on the heap. Here are some reasons why and when you might want to use malloc:</h2>
<p>
1. <b>Variable-sized data structures: </b><b>malloc</b> is commonly used when dealing with variable-sized data structures, such as arrays or linked lists, where the size is determined at runtime. Unlike automatic allocation (stack-based), which requires the size to be known at compile-time, <b>malloc</b> allows you to allocate memory based on dynamic requirements.

2. <b>Large memory requirements: malloc</b> is useful when you need to allocate a large block of memory that exceeds the available stack size. The stack has a limited size, typically a few megabytes, whereas the heap can provide a much larger memory space. So, if you require a significant amount of memory, <b>malloc</b> can accommodate your needs.

3. <b>Data persistence:</b> Memory allocated using <b>malloc</b> remains valid until it is explicitly deallocated using <b>free</b>. This allows you to create data structures or buffers that persist beyond the scope of a function or block. For example, if you need to store data that should be accessible throughout the lifetime of a program, you can allocate memory using <b>malloc</b> to achieve this.

4. <b>Dynamic memory management: malloc</b> allows for dynamic memory management, meaning you can allocate and deallocate memory as needed during the execution of your program. This flexibility can be beneficial in scenarios where memory requirements change dynamically or when you want to optimize memory usage by allocating and deallocating memory as required.

5. <b>Sharing memory between functions: malloc</b> enables you to allocate memory in one function and pass the allocated memory to other functions, ensuring that the data remains accessible across different parts of your program.</p>
</ol>

<h3> Tasks</h3>
<p>
0. Float like a butterfly, sting like a bee - C function that returns a pointer to a newly-allocated space in memory containing an array of characters. The array of characters is initialized to the parameter c. If the function fails or receives size equal to 0 - returns NULL.<br>

1. The woman who has no imagination has no wings - C function that returns a pointer to a newly-allocated space in memory containing a copy of the string passed as parameter. Returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc and can be freed with free. If str is NULL or insufficient memory was available - returns NULL.<br>

2. He who is not courageous enough to take risks will accomplish nothing in life - C function that returns a pointer to a newly-allocated space in memory containing the concatenation of two strings passed as parameters. The returned pointer contains the contents of s1 followed by s2 and is null-terminated. The function treats NULL as an empty string. If the function fails - returns NULL. <br>

3. If you even dream of beating me you'd better wake up and apologize - C function that returns a pointer to a newly-allocated space in memory containing a two-dimensional array of integers. Each element of the two-dimensional array is initialized to 0. If the function fails or either of width or height is 0 or negative - returns NULL.<br>

4. It's not bragging if you can back it up - C function that frees a two-dimensional array previsouly created by the alloc_grid function defined in 3-alloc_grid.c. The program does not crash upon receiving invalid two-dimensional arrays. <br>

5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe -  C function that returns a pointer to a newly-allocated space in memory containing the concatenation of all the arguments of the program. Each argument is followed by a \n in the new string. If ac == 0, av == NULL, or the function fails - returns NULL. <br>

6. I will show you how great I am - C function that splits a string into words. Returns a pointer to a newly-allocated space in memory containing an array of strings (words). Each element of the array of strings contains a single word, null-terminated. The last element of the returned array is NULL.Words are separated by spaces. If str == NULL, str == "", or the function fails - returns NULL.
