<h1>C - Structures, typedef Project</h1>
<p>Throughout this project, I learned a lot about how structures and typedef are implemented in the C programming language. I learned how to use structures and typedef efficiently in C applications. This newfound understanding enabled me to improve my abilities in data organization and manipulation, resulting in a more structured and understandable codebase. I honed my skills in exploiting these principles to increase program efficiency and maintainability via hands-on experience.</p>
<h3>Learning Objectives of this Project</h3>
<p>At the end of this project, I am expected to be able to explain to anyone, without the help of Google:<br>What are structures, when, why and how to use them.<br>How to use typedef.</p>
<h3>General Definitions</h3>
<ul>
<h3><li>What are structures, when, why and how to use them</li></h3>
<p>In C, structures are user-defined data types that allow the grouping of different variables under a single name. They are used to organize related data elements into a single unit, known as a structure. Structures provide a way to represent real-world entities or complex data structures in a program.<br>

Structures are typically employed when there is a need to store and manipulate multiple variables that are logically connected or belong to the same entity. For example, a structure can be used to represent a person's information, with variables like name, age, and address grouped together.<br>

To define a structure in C, the <b>"struct"</b> keyword is used, followed by the structure name and a list of variables inside curly braces. After defining a structure, you can declare variables of that structure type, assign values to its members, and access them using the dot (.) operator.<br>

Structures facilitate better organization and improve code readability by grouping related variables together. They are particularly useful when working with large data sets or complex data structures, as they allow for easier access, manipulation, and passing of data between functions. Structures in C are a powerful tool for creating custom data types that encapsulate multiple variables, enhancing code organization, modularity, and maintainability.</p>

<h3><li>How to use typedef</li></h3>
<p>In C, the <b>"typedef"</b> keyword is used to create a new name (alias) for an existing data type. It allows you to define your own names for existing types, making the code more readable and providing a level of abstraction.</p>
<p><b>typedef</b> is commonly used to create aliases for complex or lengthy data types, such as structures, pointers, or function pointers. By defining meaningful aliases, you can make your code more concise and enhance its readability. <b>typedef</b> in C provides a way to define custom names for existing data types, improving code clarity and making it easier to work with complex or lengthy types.</p>
</ul>

<h2>Tasks</h2>
0. Poppy - dog.h: Header file that defines a new type struct dog with the following elements:<br>
name, type = char *
<br>age, type = float<br>
owner, type = char *

1. A dog is the only thing on earth that loves you more than you love yourself -   C function that initializes a variable of type struct dog.<br>

2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad - C function that prints a <b>struct dog</b>.<br>

3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read - Header file that defines a new type <b>dog_t</b> as a new name for the type <b>struct dog</b>.<br>

4. A door is what a dog is perpetually on the wrong side of - C function that creates a dog.<br>

5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg - C function that frees dogs.
