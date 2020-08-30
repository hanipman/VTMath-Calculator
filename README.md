# VTMath-Multithreaded-Calculator

This project was done as an assignment for Virginia Tech ECE 3574 Applied Software Design. In order to avoid violating the honor code in case this assignment is reused, the full project will not be uploaded.

VTMath is a calculator program that uses an interpreter called vtcalc to evaluate arithmetic expressions that are provided in postfix form. This means that the operators always appear after the operands (ie. 3 4 * would evaluate to 12). The Qt framework is used to provide the GUI. This calculator can evaluate arbitrarily large values.

Command | Operation
--------|----------
+|Pop the top 2 elements from the stack, add them, and push the result onto the stack-Pop the top 2 elements from the stack, subtract them in the same way as dc, and push the result onto the stack
\*|Pop the top 2 elements from the stack, multiply them, and push the result onto the stack
/|Pop the top 2 elements from the stack, perform division in the same way as dc, and push the result onto the stack
^|Pop the top 2 elements from the stack, perform exponentiation in the same way as dc, and push the result onto the stack
v|Pop the top element from the stack, compute the square root, and push the result onto the stack
p|Print the value that is currently at the top of the stack, as a string ending with a new-line character. (The internal vtqulatorstack is not altered.)
n|Print the value that is currently at the top of the stack, without the new-line character. (The internal vtqulatorstack is not altered.)
f|Print the entire stack, from top to bottom, with stack values printed on separate lines of text. (The internal vtqulatorstack is not altered.)
P|Pop the value from the top of the stack (without printing anything).
c|Clear the stack.
