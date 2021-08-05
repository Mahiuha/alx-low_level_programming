<h1 class="gap">Project 0x13. C - More singly linked lists</h1>

<h2>Learning Objectives</h2>

<p>At the end of this project, I am expected to be able to explain to anyone, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>How to use linked lists</li>
<li>Start to look for the right source of information without too much help</li>
</ul>

<h2>Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS</li>
<li>Your programs and functions will be compiled with <code>gcc 4.8.4</code> using the flags <code>-Wall</code> <code>-Werror</code> <code>-Wextra</code> <code>and -pedantic</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>The only C standard library functions allowed are <code>malloc</code>, <code>free</code> and <code>exit</code>. Any use of functions like <code>printf</code>, <code>puts</code>, <code>calloc</code>, <code>realloc</code> etc&hellip; is forbidden</li>
<li>You are allowed to use <a href="https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c" title="_putchar" target="_blank">_putchar</a></li>
<li>You don&rsquo;t have to push <code>_putchar.c</code>, we will use our file. If you do it won&rsquo;t be taken into account</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>lists.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
<li>All your header files should be include guarded</li>
</ul>

<h2>More Info</h2>

<p>I must use this structure for this project:</p>

<pre><code>/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
</code></pre>

  </article>

 <hr class="gap">
      <h2 class="gap">Tasks</h2>

 <h4 class="task">
    0. Print list
      <span class="alert alert-warning mandatory-optional">
      </span>
  </h4>
 <p>Write a function that prints all the elements of a <code>listint_t</code> list.</p>

 <h4 class="task">
    1. List length
      <span class="alert alert-warning mandatory-optional">
      </span>
  </h4>
<p>Write a function that returns the number of elements in a linked <code>listint_t</code> list.</p>

<h4 class="task">
    2. Add node at the beginning
      <span class="alert alert-warning mandatory-optional">
      </span>
  </h4>
 <p>Write a function that adds a new node at the beginning of a <code>listint_t</code> list.</p>

 <h4 class="task">
    3. Add node at the end
      <span class="alert alert-warning mandatory-optional">
      </span>
  </h4>
<p>Write a function that adds a new node at the end of a <code>listint_t</code> list.</p>

<h4 class="task">
    4. Free list
      <span class="alert alert-warning mandatory-optional">
      </span>
  </h4>
<p>Write a function that frees a <code>listint_t</code> list.</p>

 <h4 class="task">
    5. Free
      <span class="alert alert-warning mandatory-optional">
      </span>
  </h4>
<p>Write a function that frees a <code>listint_t</code> list.</p>

<h4 class="task">
    6. Pop
      <span class="alert alert-warning mandatory-optional">
      </span>
  </h4>
<p>Write a function that deletes the head node of a <code>listint_t</code> linked list, and returns the head node&rsquo;s data (n).</p>

<h4 class="task">
    7. Get node at index
      <span class="alert alert-warning mandatory-optional">
      </span>
  </h4>
<p>Write a function that returns the nth node of a <code>listint_t</code> linked list.</p>

 <h4 class="task">
    8. Sum list
      <span class="alert alert-warning mandatory-optional">
      </span>
  </h4>
<p>Write a function that returns the sum of all the data (n) of a <code>listint_t</code> linked list.</p>

<h4 class="task">
    9. Insert
      <span class="alert alert-warning mandatory-optional">
      </span>
  </h4>
<p>Write a function that inserts a new node at a given position.</p>

 <h4 class="task">
    10. Delete at index
      <span class="alert alert-warning mandatory-optional">
      </span>
  </h4>
 <p>Write a function that deletes the node at index <code>index</code> of a <code>listint_t</code> linked list.</p>
