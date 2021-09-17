<h1 class="gap">Project 0x17. C - Doubly linked lists</h1>

<p><img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2014/03/DLL1.png" alt="" style\="" /></p>


 <h2>Resources.</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="https://www.youtube.com/watch?v=k0pjD12bzP0" title="What is a Doubly Linked List" target="_blank">What is a Doubly Linked List</a> </li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="https://fs.blog/2012/04/feynman-technique/" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What is a doubly linked list</li>
<li>How to use doubly linked lists</li>
<li>Start to look for the right source of information without too much help</li>
</ul>

<h2>Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 14.04 LTS</li>
<li>Your programs and functions will be compiled with <code>gcc 4.8.4</code> using the flags <code>-Wall</code> <code>-Werror</code> <code>-Wextra</code> <code>and -pedantic</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>The only C standard library functions allowed are <code>malloc</code>, <code>free</code>, <code>printf</code> and <code>exit</code></li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions should be included in your header file called <code>lists.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
<li>All your header files should be include guarded</li>
</ul>

<h2>More Info</h2>

<p>This must be the data strcuture for this project:</p>

<pre><code>/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
</code></pre>

 <h2 class="gap">Tasks</h2>
  <h4 class="task">
 0. Print list
  </h4>
<p>Write a function that prints all the elements of a <code>dlistint_t</code> list.</p>
<ul>
<li>Prototype: <code>size_t print_dlistint(const dlistint_t *h);</code></li>
<li>Return: the number of nodes</li>
</ul>

 <h4 class="task">
    1. List length
  </h4>
 <p>Write a function that returns the number of elements in a linked <code>dlistint_t</code> list.</p>
<ul>
<li>Prototype: <code>size_t dlistint_len(const dlistint_t *h);</code></li>
</ul>

<h4 class="task">
    2. Add node
</h4>
<p>Write a function that adds a new node at the beginning of a <code>dlistint_t</code> list.</p>

<ul>
<li>Prototype: <code>dlistint_t *add_dnodeint(dlistint_t **head, const int n);</code></li>
<li>Return: the address of the new element, or <code>NULL</code> if it failed</li>
</ul>

<h4 class="task">
    3. Add node at the end
</h4>
<p>Write a function that adds a new node at the end of a <code>dlistint_t</code> list.</p>

<ul>
<li>Prototype: <code>dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);</code></li>
<li>Return: the address of the new element, or <code>NULL</code> if it failed</li>
</ul>

 <h4 class="task">
    4. Free list
</h4>
<p>Write a function that free a <code>dlistint_t</code> list.</p>
<ul>
<li>Prototype: <code>void free_dlistint(dlistint_t *head);</code></li>
</ul>

<h4 class="task">
    5. Get node at index
</h4>
<p>Write a function that returns the nth node of a <code>dlistint_t</code> linked list.</p>
<ul>
<li>Prototype: <code>dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);</code></li>
<li>where <code>index</code> is the index of the node, starting from <code>0</code></li>
<li>if the node does not exist, return <code>NULL</code></li>
</ul>

<h4 class="task">
    6. Sum list
</h4>
<p>Write a function that returns the sum of all the data (n) of a <code>dlistint_t</code> linked list.</p>
<ul>
<li>Prototype: <code>int sum_dlistint(dlistint_t *head);</code></li>
<li>if the list is empty, return <code>0</code></li>
</ul>

<h4 class="task">
    7. Insert at index
</h4>
<p>Write a function that inserts a new node at a given position.</p>
<ul>
<li>Prototype: <code>dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);</code></li>
<li>where <code>idx</code> is the index of the list where the new node should be added. Index starts at <code>0</code></li>
<li>Returns: the address of the new node, or <code>NULL</code> if it failed</li>
<li>if it is not possible to add the new node at index <code>idx</code>, do not add the new node and return <code>NULL</code></li>
</ul>
<p>Files <code>2-add_dnodeint.c</code> and <code>3-add_dnodeint_end.c</code> will be compiled during the correction</p>

<h4 class="task">
    8. Delete at index
 </h4>
 <p>Write a function that deletes the node at index <code>index</code> of a <code>dlistint_t</code> linked list.</p>
<ul>
<li>Prototype: <code>int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);</code></li>
<li>where <code>index</code> is the index of the node that should be deleted. Index starts at <code>0</code></li>
<li>Returns: <code>1</code> if it succeeded, <code>-1</code> if it failed</li>
</ul>
