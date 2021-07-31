<h1 class="gap">Project 0x12. C - How to use Singly linked lists</h1>

<h2>Learning Objectives</h2>

<p>At the end of this project, I am expected to be able to <a href="/rltoken/8bKyzTFahgtvQf7aftTjPw" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>When and why using linked lists vs arrays</li>
<li>How to build and use linked lists</li>
</ul>

<h2>Project Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS</li>
<li>Your programs and functions will be compiled with <code>gcc 4.8.4</code> using the flags <code>-Wall</code> <code>-Werror</code> <code>-Wextra</code> <code>and -pedantic</code> <code>-std=gnu89</code></li>
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

<h2 class="gap">Tasks</h2>

<p>0. Write a function that prints all the elements of a <code>list_t</code> list.</p>

<p>1. Write a function that returns the number of elements in a linked <code>list_t</code> list.</p>

<p>2. Write a function that adds a new node at the beginning of a <code>list_t</code> list.</p>

<p>3. Write a function that adds a new node at the end of a <code>list_t</code> list.</p>

<p>4. Write a function that frees a <code>list_t</code> list.</p>

<p>Advance 100: Write a function that prints <code>You&#39;re beat! and yet, you must allow,\nI bore my house upon my back!\n</code> before the <code>main</code> function is executed.</p>
<ul>
<li>You are allowed to use the <code>printf</code> function</li>
</ul>

<p> Advance 101: Write a 64-bit program in assembly that prints <code>Hello, Holberton</code>, followed by a new line</p>
<ul>
<li>You are only allowed to use the <code>printf</code> function</li>
<li>You are not allowed to use interrupts</li>
<li>Your program will be compiled using <code>nasm</code> and <code>gcc</code>:</li>
</ul>
