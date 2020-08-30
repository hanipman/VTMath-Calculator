# VTMath-Multithreaded-Calculator

This project was done as an assignment for Virginia Tech ECE 3574 Applied Software Design. In order to avoid violating the honor code in case this assignment is reused, the full project will not be uploaded.

VTMath is a calculator program that uses an interpreter called vtcalc to evaluate arithmetic expressions that are provided in postfix form. This means that the operators always appear after the operands (ie. 3 4 * would evaluate to 12). VTMath can be used either through terminal using vtmath or the GUI version using the Qt framework called vtqulator. In vtqulator mode, the calculator can evaluate arbitrarily large values that do not fit in the traditional 64 bit int. Each term of an expression is stored in a stack and evaluated from the top following an operator. Inputs can also be entered using the keyboard.

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
d|Duplicate the top value on the stack. (For example, pop the top element from the stack, then push that value onto the stack twice.)
r|Reverse the order of the top two elements in the stack.
z|Determine the current length of the stack, and print that value. (Do not push this value onto the stack, even though dc takes that action.)
K|Print the current setting of arithmetic precision. (Do not push this value onto the stack, even though dctakes that action.)
Z|Pop the top value from the stack, calculate the number of digits in it,and push the result of the calculation.
X|Pop the top value from the stack, calculate the number of digits in its fractional part, and push the result of the calculation.
k|Pop the top value from the stack and use it to set the arithmetic precision of future computations. The graphical label “current precision” should also be updated accordingly. Notice that the default value for precision for vtqulator is 0, which will cause “2 9 / p” to evaluate as 0, and “9 2 / p” to evaluate as 4.
e|This is equivalent to typing the Euler’s number with the current precision. For example, if the current precision is 3, this will be the same as typing “2.718”.
i|This is equivalent to typing the number pi with the current precision. For example, if the current precision is 2, this will be the same as typing “3.14”.
g|Pop the top element from the stack, calculate its logarithm to the base 10, and push the result onto the stack
l|Pop the top element from the stack, calculate its logarithm to the base e (Euler’s number), and push the result onto the stack
s|Pop the top element from the stack, compute its sine, and push the result onto the stack. Note the unit (either degree or radian) should depend on the current position of the two radio buttons.
o|Pop the top element from the stack, compute its cosine, and push the result onto the stack. Note the unit (either degree or radian) should depend on the current position of the two radio buttons.
a|Pop the top element from the stack, compute itstangent, and push the result onto the stack. Note the unit (either degree or radian) should depend on the current position of the two radio buttons.
“+/-”|Toggle the underscore character(remember that we use underscore characteras the sign of the number)
“backspace”|Undo the effect of the previously typed character. For example, if previously we typed “e” (and display “2.718” when the precision is 3), then clicking the backspace pushbutton will delete the whole string of “2.718”.
