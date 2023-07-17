<h1>C - Preprocessor Project</h1>
<p>Throughout this project, I gained valuable insights into the C preprocessor and its powerful capabilities. I deepened my understanding of common predefined macros, which are predefined symbols that provide information about the environment and the code being compiled, such as the current file, line number, and compiler version.</p>
<h3>Learning Objectives of this project</h3>
<p>At the end of this project, I am expected to be able to explain to anyone, without the help of Google:<br> What are macros and how to use them<br>What are the most common predefined macros<br>How to include guard your header files</p>

<h3>General Definitions</h3>
<ul>
<h3><li>What are macros and how to use them</li></h3>
<p>In C programming, macros are a way to define reusable code snippets or constants using the preprocessor. Macros are defined using the <b>#define</b> directive and can be used to perform text substitution in your code before it is compiled. e.g <br><b>#define MACRO_NAME macro_value</b><br>The <b>MACRO_NAME</b> is the identifier you choose for your macro, and<b> macro_value</b> represents the value or code snippet that will be substituted when the macro is used.</p>
<h3><li>What are the most common predefined macros</li></h3>
<p>In C, there are a number of commonly used predefined macros that offer important information on the environment, compiler, and code being generated. Here are a few of the more frequent ones:<br>
There are several common predefined macros in C that provide useful information about the environment, compiler, and code being compiled. Here are some of the most commonly used ones:<br>

1. <b>__LINE__</b>: This macro expands to the current line number in the source code as an integer.<br>

2. <b>__FILE__</b>: This macro expands to the name of the current source file as a string.<br>

3. <b>__DATE__</b>: This macro expands to the current date in the format "Mmm dd yyyy" (e.g., "Jul 17 2023").<br>

4. <b>__TIME__</b>: This macro expands to the current time in the format "hh:mm:ss" (e.g., "13:45:30").<br>

5. <b>__STDC__</b>: This macro is defined by the compiler if the compiler complies with the ISO C standard. Its value is typically 1.<br>

6. <b>__cplusplus</b>: This macro is defined by C++ compilers and expands to a value greater than 1 when compiling C++ code.<br>

7. <b>_WIN32</b>: This macro is defined by many Windows-based compilers when compiling for a Windows environment.<br>

8. <b>__GNUC__</b>: This macro is defined by the GNU C compiler (gcc) and its derivatives. It indicates the version of the compiler.<br>

These predefined macros can be useful for conditional compilation, generating informative error messages, or providing compile-time information. For example, they can be used in <b>#ifdef</b> or <b>#if</b> directives to conditionally compile certain sections of code based on the platform or other criteria.</p>
<h3><li>How to include guard your header files</li></h3>
<p>Guards are commonly used in header files to prevent repetitive inclusions of the same header, which can result in compilation issues and duplicate definitions. Here's how to incorporate guards in your header files:</p>
1. Choose a unique identifier for your include guard. It is customary to use the header file name in all uppercase letters, replacing any period <b>(.)</b> or slash <b>(/)</b> characters with underscores <b>(_)</b>.<br>

2. Add the include guard to your header file using conditional compilation directives. Typically, this involves adding <b>#ifndef</b>, <b>#define</b>, and <b>#endif</b> directives.e.g <br>
<b>#ifndef HEADER_FILE_NAME_H</b>
<b>#define HEADER_FILE_NAME_H</b>

// Content of your header file goes here

<b>#endif  // HEADER_FILE_NAME_H</b><br>

3. In the <b>#ifndef</b> directive, check if the include guard identifier has not been defined previously. If it has not been defined, the code within the <b>#ifndef</b> block will be included.<br>

4. In the <b>#define</b> directive, define the include guard identifier. This ensures that subsequent inclusions of the header file will skip the block of code inside the <b>#ifndef</b> block.<br>
5. Finally, end the include guard with the <b>#endif</b> directive.<br>
With this structure, the include guard identifier will not be defined when your header file is included for the first time; instead, the header file's content will be handled. The header file's contents will not be included on subsequent inclusions since the include guard identifier will already be specified. Guards assist guarantee that header file material is only used once in a translation unit, avoiding redundant definitions and compilation issues.</p>
</ul>

<h3>Tasks</h3>
<p>
0. Object-like Macro - Header file that defines a macro named <b>SIZE</b> as an abbreviation for the token <b>1024</b>.

1. Pi - Header file that defines a macro named <b>PI</b> as an abbreviation for the token<b> 3.14159265359</b>.

2. File name -  C program that prints the name of the file it was compiled from followed by a new line.<br>

3. Function-like macro - Header file that defines a function-like macro <b>ABS(x)</b> that computes the absolute value of a number <b>x</b>.<br>

4. SUM - Header file that defines a function-like macro <b>SUM(x, y)</b> that computes the sum of the numbers <b>x</b> and <b>y</b>
