<h1>C - Singly linked lists Project</h1>
<p>This project allowed me to develop and utilize <b>singly linked lists</b> in C, gaining valuable insights into the appropriate situations for using linked lists as opposed to arrays. Through practical experience, I deepened my understanding of data structures and their applications.</p>

<h2>Learning Objectives</h2>
<p>At the end of this project, I am expected to be able to explain to anyone, without the help of Google:<br>
<ul>
<li>When and why using linked lists vs arrays</li>
<li>How to build and use linked lists</li>
</ul></p>

<h2>General Definitions</h2>
<h3>When and why using linked lists vs arrays</h3>
<p>Linked lists and arrays are fundamental data structures used to organize and store data in computer programs. The choice between them depends on the specific requirements of the application. Linked lists excel in dynamic scenarios, where the size of the data may change frequently. They use pointers to connect elements, allowing easy insertion and deletion operations without shifting elements. This makes linked lists efficient for data that undergoes constant modification.<br> On the other hand, arrays are preferred when the data size remains fixed, or random access to elements is crucial. They use contiguous memory, enabling direct access to any element using an index. Arrays are efficient for searching and accessing data, but resizing requires creating a new array and copying elements, which can be costly.</p>

<h3>How to build and use linked lists</h3>
1. <b>Define the Node Structure:</b><br>
Create a structure that represents a single node in the linked list. Each node should contain the data and a pointer to the next node.

2. <b>Create Functions:</b><br> Implement functions to perform various operations on the linked list, such as creating a new node, inserting elements, deleting elements, and traversing the list.

3. <b>Create the Main Function:</b><br> In the main function, you can create a linked list, insert elements, delete elements, and perform other operations.

4. <b>Compile and Run:</b><br>After writing the code, compile and run it to see the linked list operations in action.

<h2>Tasks</h2>
0. Print list - C function that prints all the elements of a <b>list_t list</b>.<br>If <b>str</b> is <b>NULL</b>, the function prints <b>[0] (nil)</b>.<br>

1. List length - C function that returns the number of elements in a linked <b>list_t</b> list.<br>

2. Add node - C function that adds a new node at the beginning a of a <b>list_t list</b>.<br>
If the function fails - returns <b>NULL</b>.<br>
Otherwise - returns the address of the new element.<br>

3. Add node at the end - C function that adds a new node at the end of a linked <b>list_t list</b>.<br>
If the function fails - returns <b>NULL</b>.<br>
Otherwise - returns the address of the new element.<br>

4. Free list - C function that frees a <b>list_t</b> list.<br>

5. The Hare and the Tortoise - C function that prints <b>You're beat! and yet, you must allow,\nI bore my house upon my back!\n</b> before the main function is executed.<br>

6. Real programmers can write assembly code in any language - 64-but assembly program that prints <b>Hello, Holberton</b> followed by a new line using only the <b>printf</b> function witout interrupts.
