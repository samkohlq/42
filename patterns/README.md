# Printing patterns!

This is an improved version of a project that I did while in the C bootcamp at 42 Silicon Valley. It prints one of five patterns to the screen depending on the user’s input. The size of the pattern also varies depending on the number of columns and rows that the user asks for.
Prior to my latest commit, the inputs had to be hardcoded in the main function and the user would have had to compile separate .c files for each of the different patterns.
I generalized the function to take in all inputs and made it easier to add more patterns if necessary. It seems like a trivial project, but I’m proud of it because I tried my best to write clean and readable code. Revisiting it today also reminded me of how much more I’ve learned since I first started on the exercise two months ago. :)

## Library function allowed:
write

## The different patterns are as follows:
<pre>
(a)
o---o  
|   |  
|   |  
o---o  

(b)
/***\  
*   *  
*   * 
\***/  

(c)
ABBBA
B   B
B   B
CBBBC

(d)
ABBBC
B   B
B   B
ABBBC

(e)
ABBBC
B   B
B   B
CBBBA
</pre>
