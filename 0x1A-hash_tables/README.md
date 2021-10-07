<h1 class="gap">Project 0x1A. C - Hash tables</h1>

<h2>Learning Objectives</h2>
<p> At the end of this project I should be able to explain without the help of google the following concepts</p>

<h3>General</h3>

<ul>
<li>What is a hash function</li>
<li>What makes a good hash function</li>
<li>What is a hash table, how do they work and how to use them</li>
<li>What is a collision and what are the main ways of dealing with collisions in the context of a hash table</li>
<li>What are the advantages and drawbacks of using hash tables</li>
<li>What are the most common use cases of hash tables</li>
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
<li>You are allowed to use the C standard library</li>
<li>The prototypes of all your functions should be included in your header file called <code>hash_tables.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
<li>All your header files should be include guarded</li>
</ul>

<h2>More Info</h2>

<h3>Data Structures</h3>

<p>Please use these data structures for this project:</p>

<pre><code>/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
</code></pre>

<h3>Tests</h3>

<p>We strongly encourage you to work all together on a set of tests</p>

<h3>Python Dictionaries</h3>

<p>Python dictionaries are implemented using hash tables. When you will be done with this project, you will be able to better understand the power and simplicity of Python dictionaries. So much is actually happening when you type <code>d = {&#39;a&#39;: 1, &#39;b&#39;: 2}</code>, but everything looks so simple for the user. Python doesn&rsquo;t use the exact same implementation than the one you will work on today though. If you are curious on how it works under the hood, here is a good blog post about <a href="http://www.laurentluce.com/posts/python-dictionary-implementation/" title="how dictionaries are implemented in Python 2.7" target="_blank">how dictionaries are implemented in Python 2.7</a> (not mandatory).</p>

<p>Note that all dictionaries are not implemented using hash tables and there is a difference between a dictionary and a hash table. <a href="https://stackoverflow.com/questions/2061222/what-is-the-true-difference-between-a-dictionary-and-a-hash-table" title="Read more here" target="_blank">Read more here</a> (not mandatory).</p>

  </article>


 <h2 class="gap">Tasks</h2>
<h4 class="task">
    0. &gt;&gt;&gt; ht = {}
</h4>
 <p>Write a function that creates a hash table.</p>

<ul>
<li>Prototype: <code>hash_table_t *hash_table_create(unsigned long int size);</code>

<ul>
<li>where <code>size</code> is the size of the array</li>
</ul></li>
<li>Returns a pointer to the newly created hash table</li>
<li>If something went wrong, your function should return <code>NULL</code></li>
</ul>

<h4 class="task">
    1. djb2
</h4>
<p>Write a hash function implementing the djb2 algorithm.</p>

<ul>
<li>Prototype: <code>unsigned long int hash_djb2(const unsigned char *str);</code></li>
<li>You are allowed to copy and paste the function from <a href="/rltoken/Nsj5LPU4R0BzDhyziyukYg" title="this page" target="_blank">this page</a></li>
</ul>

<h4 class="task">
    2. key -&gt; index
</h4>
 <p>Write a function that gives you the index of a key.</p>

<ul>
<li>Prototype: <code>unsigned long int key_index(const unsigned char *key, unsigned long int size);</code>

<ul>
<li>where <code>key</code> is the key</li>
<li>and <code>size</code> is the size of the array of the hash table</li>
</ul></li>
<li>This function should use the <code>hash_djb2</code> function that you wrote earlier</li>
<li>Returns the index at which the key/value pair should be stored in the array of the hash table</li>
<li>You will have to use this hash function for all the next tasks</li>
</ul>

<h4 class="task">
    3. &gt;&gt;&gt; ht[&#39;betty&#39;] = &#39;holberton&#39;
</h4>
 <p>Write a function that adds an element to the hash table.</p>

<ul>
<li>Prototype: <code>int hash_table_set(hash_table_t *ht, const char *key, const char *value);</code>

<ul>
<li>Where <code>ht</code> is the hash table you want to add or update the key/value to</li>
<li><code>key</code> is the key. <code>key</code> can not be an empty string</li>
<li>and <code>value</code> is the value associated with the key. <code>value</code> must be duplicated. <code>value</code> can be an empty string</li>
</ul></li>
<li>Returns: <code>1</code> if it succeeded, <code>0</code> otherwise</li>
<li>In case of collision, add the new node at the beginning of the list</li>
</ul>

 <h4 class="task">
    4. &gt;&gt;&gt; ht[&#39;betty&#39;]
</h4>
<p>Write a function that retrieves a value associated with a key.</p>

<ul>
<li>Prototype: <code>char *hash_table_get(const hash_table_t *ht, const char *key);</code>

<ul>
<li>where <code>ht</code> is the hash table you want to look into</li>
<li>and <code>key</code> is the key you are looking for</li>
</ul></li>
<li>Returns the value associated with the element, or <code>NULL</code> if <code>key</code> couldn&rsquo;t be found</li>
</ul>

 <h4 class="task">
    5. &gt;&gt;&gt; print(ht)
</h4>
 <p>Write a function that prints a hash table.</p>

<ul>
<li>Prototype: <code>void hash_table_print(const hash_table_t *ht);</code>

<ul>
<li>where <code>ht</code> is the hash table</li>
</ul></li>
<li>You should print the key/value in the order that they appear in the array of hash table

<ul>
<li>Order: array, list</li>
</ul></li>
<li>Format: see example</li>
<li>If <code>ht</code> is NULL, don&rsquo;t print anything</li>
</ul>

 <h4 class="task">
    6. &gt;&gt;&gt; del ht
</h4>
  <p>Write a function that deletes a hash table.</p>

<ul>
<li>Prototype: <code>void hash_table_delete(hash_table_t *ht);</code>

<ul>
<li>where <code>ht</code> is the hash table</li>
</ul></li>
</ul>