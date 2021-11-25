<h1 class="gap">Project 0x1C. C - Makefiles</h1>
 <p><img src="https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/273/giphy-2.gif" alt="" style="" /></p>

<h3>General</h3>

<ul>
<li>What are <code>make</code>, Makefiles</li>
<li>When, why and how to use Makefiles</li>
<li>What are rules and how to set and use them</li>
<li>What are explicit and implicit rules</li>
<li>What are the most common / useful rules</li>
<li>What are variables and how to set and use them</li>
</ul>

<h2>Requirements</h2>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>OS: Ubuntu 20.04 LTS</li>
<li>Version of <code>gcc</code>: 9.3.0</li>
<li>Version of <code>make</code>: GNU Make 4.2.1</li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project, is mandatory</li>
</ul>

<h2>More Info</h2>

<h3>Files</h3>

<p>In the following tasks, we are going to use <a href="https://github.com/holbertonschool/0x1B.c" title="these files" target="_blank">these files</a>. We want to compile these only.</p>

<hr class="gap">
<h2 class="gap">Tasks</h2>
  <h4 class="task">
    0. make -f 0-Makefile
  </h4>

<p>Create your first Makefile.</p>

<p>Requirements:</p>

<ul>
<li>name of the executable: <code>holberton</code></li>
<li>rules: <code>all</code>

<ul>
<li>The <code>all</code> rule builds your executable</li>
</ul></li>
<li>variables: none</li>
</ul>

  <h4 class="task">
    1. make -f 1-Makefile
  </h4>
 <p>Requirements:</p>

<ul>
<li>name of the executable: <code>holberton</code></li>
<li>rules: <code>all</code>

<ul>
<li>The <code>all</code> rule builds your executable</li>
</ul></li>
<li>variables: <code>CC</code>, <code>SRC</code>

<ul>
<li><code>CC</code>: the compiler to be used</li>
<li><code>SRC</code>: the <code>.c</code> files</li>
</ul></li>
</ul>


<h4 class="task">
    2. make -f 2-Makefile
  </h4>
 <p>Create your first useful Makefile.</p>

<p>Requirements:</p>

<ul>
<li>name of the executable: <code>holberton</code></li>
<li>rules: <code>all</code>

<ul>
<li>The <code>all</code> rule builds your executable</li>
</ul></li>
<li>variables: <code>CC</code>, <code>SRC</code>, <code>OBJ</code>, <code>NAME</code>

<ul>
<li><code>CC</code>: the compiler to be used</li>
<li><code>SRC</code>: the <code>.c</code> files</li>
<li><code>OBJ</code>: the <code>.o</code> files</li>
<li><code>NAME</code>: the name of the executable</li>
</ul></li>
<li>The <code>all</code> rule should recompile only the updated source files</li>
<li>You are not allowed to have a list of all the <code>.o</code> files</li>
</ul>

<h4 class="task">
    3. make -f 3-Makefile
  </h4>
 <p>Requirements:</p>

<ul>
<li>name of the executable: <code>holberton</code></li>
<li>rules: <code>all</code>, <code>clean</code>, <code>oclean</code>, <code>fclean</code>, <code>re</code>

<ul>
<li><code>all</code>: builds your executable</li>
<li><code>clean</code>: deletes all Emacs and Vim temporary files along with the executable</li>
<li><code>oclean</code>: deletes the object files</li>
<li><code>fclean</code>: deletes the Emacs temporary files, the executable, and the object files</li>
<li><code>re</code>: forces recompilation of all source files</li>
</ul></li>
<li>variables: <code>CC</code>, <code>SRC</code>, <code>OBJ</code>, <code>NAME</code>, <code>RM</code>

<ul>
<li><code>CC</code>: the compiler to be used</li>
<li><code>SRC</code>: the <code>.c</code> files</li>
<li><code>OBJ</code>: the <code>.o</code> files</li>
<li><code>NAME</code>: the name of the executable</li>
<li><code>RM</code>: the program to delete files</li>
</ul></li>
<li>The <code>all</code> rule should recompile only the updated source files</li>
<li>The <code>clean</code>, <code>oclean</code>, <code>fclean</code>, <code>re</code> rules should never fail</li>
<li>You are not allowed to have a list of all the <code>.o</code> files</li>
</ul>

 <h4 class="task">
    4. A complete Makefile
  </h4>
 <p>Requirements:</p>

<ul>
<li>name of the executable: <code>holberton</code></li>
<li>rules: <code>all</code>, <code>clean</code>, <code>fclean</code>, <code>oclean</code>, <code>re</code>

<ul>
<li><code>all</code>: builds your executable</li>
<li><code>clean</code>: deletes all Emacs and Vim temporary files along with the executable</li>
<li><code>oclean</code>: deletes the object files</li>
<li><code>fclean</code>: deletes the Emacs temporary files, the executable, and the object files</li>
<li><code>re</code>: forces recompilation of all source files</li>
</ul></li>
<li>variables: <code>CC</code>, <code>SRC</code>, <code>OBJ</code>, <code>NAME</code>, <code>RM</code>, <code>CFLAGS</code>

<ul>
<li><code>CC</code>: the compiler to be used</li>
<li><code>SRC</code>: the <code>.c</code> files</li>
<li><code>OBJ</code>: the <code>.o</code> files</li>
<li><code>NAME</code>: the name of the executable</li>
<li><code>RM</code>: the program to delete files</li>
<li><code>CFLAGS</code>: your favorite compiler flags: <code>-Wall -Werror -Wextra -pedantic</code></li>
</ul></li>
<li>The <code>all</code> rule should recompile only the updated source files</li>
<li><p>The <code>clean</code>, <code>oclean</code>, <code>fclean</code>, <code>re</code> rules should never fail</p></li>
<li><p>You are not allowed to have a list of all the <code>.o</code> files</p></li>
</ul>

 <h4 class="task">
    5. Island Perimeter
  </h4>
 <p><strong>Technical interview preparation</strong>: </p>

<ul>
<li>You are not allowed to google anything</li>
<li>Whiteboard first</li>
</ul>

<p>Create a function <code>def island_perimeter(grid):</code> that returns the perimeter of the island described in <code>grid</code>:</p>

<ul>
<li><code>grid</code> is a list of list of integers:

<ul>
<li>0 represents a water zone</li>
<li>1 represents a land zone</li>
<li>One cell is a square with side length 1</li>
<li>Grid cells are connected horizontally/vertically (not diagonally). </li>
<li>Grid is rectangular, width and height don&rsquo;t exceed 100</li>
</ul></li>
<li>Grid is completely surrounded by water, and there is one island (or nothing).</li>
<li>The island doesn&rsquo;t have &ldquo;lakes&rdquo; (water inside that isn&rsquo;t connected to the water around the island).</li>
</ul>

<p>Requirements:</p>

<ul>
<li>First line contains <code>#!/usr/bin/python3</code></li>
<li>You are not allowed to import any module</li>
<li>Module and function must be documented</li>
</ul>
