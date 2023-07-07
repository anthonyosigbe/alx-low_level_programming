<h1>0x0A. C - argc, argv Project</h1>
<p>In this project, I learnt how to utilize argc and argv arguments sent to C functions, as well as how to use __attribute__((unused)) or void to build functions with unused variables or parameters.</p>

<h3>Learning Objectives for this Project</h3>
<p>At the end of this project, you are expected to be able to explain to anyone, without the help of Google</h3>

<h3>General Definitions</h3>
<ul>
<b><li>How to use arguments passed to your program</li></b>
<p>In C, you can access the command-line arguments passed to your program through the argv parameter in the main function. The argc parameter indicates the number of arguments.</p>
<b><li>What are two prototypes of main that you know of, and in which case do you use one or the other</li></b>
<p>In the C language, there are two commonly used prototypes for the main function:<br>
1. <b>int main(void):</b> This prototype indicates that the main function takes no command-line arguments and does not accept any parameters. It returns an integer value as the exit status of the program.

2. <b>int main(int argc, char *argv[]) or int main(int argc, char **argv):</b> This prototype indicates that the main function accepts command-line arguments. It takes two parameters: argc, which represents the number of command-line arguments, and argv, which is an array of strings containing the actual command-line arguments. It also returns an integer value as the exit status of the program. <br>

<b>When to use each prototype:</b> <br>
1. Use <b>int main(void)</b> when your program does not require any command-line arguments. This is the simplest and most basic form of the <b>main</b> function.

2. Use <b>int main(int argc, char *argv[])</b> when your program needs to process command-line arguments. The argc parameter provides the count of command-line arguments, and argv allows you to access and process each argument individually. 
<b><li>How to use __attribute__((unused)) or (void) to compile functions with unused variables or parameters</li></b>
<p>
In C, you can use the __attribute__((unused)) attribute or the (void) parameter declaration to compile functions with unused variables or parameters without generating warnings.</p>
</ul>

<h3>Tasks</h3>
0. It ain't what they call you, it's what you answer to - C program that prints its name, followed by a new line. If the program is renamed, the program will print the new name without having to be compiled again. The path should not be removed before the name of the program.

1. Silence is argument carried out by other means - C program that prints the number of arguments passed to it, followed by a new line.

2. The best argument against democracy is a five-minute conversation with the average voter - C program that prints all arguments it receives, including the first one. Arguments are printed one per line, ending with a new line.

3. Neither irony nor sarcasm is argument - C program that multiplies two numbers and prints the result, followed by a new line. The program assumes the two numbers and result of the multiplication can be stored in an int. If the program does not receive two arguments, it prints Error followed by a new line and returns 1.

4. To infinity and beyond - C program that adds two positive numbers and prints the result, followed by a new line. The program assumes that the numbers and result of the addition can be stored in an int. If no number is passed to the program, it prints 0 followed by a new line. If one of the numbers contains symbols that are not digits, the program prints Error followed by a new line and returns 1.

5. Minimal Number of Coins for Change - C program that prints the minimum number of coins to make change for an amount of money. Usage: ./change cents where cents is the amount of cents needed to give back. Change can use an unlimited number of coins of values 25, 10, 5, 2 and 1 cent. If the number passed as the argument is negative, the program prints 0 followed by a new line. If the number of arguments passed to the program is not exactly one, it prints Error followed by a new line and returns 1.
