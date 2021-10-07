<h1 class="gap">Project 0x18. C - Dynamic libraries</h1>

<h2>Learning Objectives.</h2>
<h3>General</h3>

<ul>
<li>What is a dynamic library, how does it work, how to create one, and how to use it</li>
<li>What is the environment variable <code>$LD_LIBRARY_PATH</code> and how to use it</li>
<li>What are the differences between static and shared libraries</li>
<li>Basic usage <code>nm</code>, <code>ldd</code>, <code>ldconfig</code></li>
</ul>

<h2>Resources.</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="https://www.youtube.com/watch?v=eW5he5uFBNM" title="What is difference between Dynamic and Static library (Static and Dynamic linking)" target="_blank">What is difference between Dynamic and Static library (Static and Dynamic linking)</a> </li>
<li><a href="https://www.google.com/search?q=linux+create+dynamic+library&cad=h" title="create dynamic libraries on Linux" target="_blank">create dynamic libraries on Linux</a> </li>
<li><a href="https://students-support.hbtn.io/hc/en-us/articles/360023750254" title="Technical Writing" target="_blank">Technical Writing</a></li>
</ul>

<h2 class="gap">Tasks</h2>
<h4 class="task">
    0. A library is not a luxury but one of the necessities of life
</h4>
 <p>Create the dynamic library libholberton.so containing all the functions listed below:</p>

<pre><code>int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
</code></pre>

<p>If you haven&rsquo;t coded all of the above functions create empty ones, with the right prototype.<br>
Don&rsquo;t forget to push your <code>holberton.h</code> file in your repository, containing at least all the prototypes of the above functions.</p>

<h4 class="task">
    1. Without libraries what have we? We have no past and no future
</span>
  </h4>
<p>Create a script that creates a dynamic library called <code>liball.so</code> from all the <code>.c</code> files that are in the current directory.</p>

 <h4 class="task">
    2. Either write something worth reading or do something worth writing
</h4>
<p>Write a blog post describing the differences between static and dynamic libraries. It should cover:</p>

<ul>
<li>Why using libraries in general</li>
<li>How do they work</li>
<li>How to create them (Linux only)</li>
<li>How to use them (Linux only)</li>
<li>What are the differences between static and dynamic libraries</li>
<li>What are the advantages and drawbacks of each of them</li>
</ul>

<p>Your posts should have examples and at least one picture, at the top.
Publish your blog post on Medium or LinkedIn, and share it at least on LinkedIn.</p>

<p>When done, please add all urls below (blog post, LinkedIn post, etc.)</p>

<p>Please, remember that these blogs must be written in English to further your technical ability in a variety of settings</p>
