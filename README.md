HOME PROGRAMMING TEST
---------------------

Roots finder
---------------------
Main function: this code calculates the real roots of a polynomial of the form: ax^3+bx^2+cx+d.

The program runs as follows on the command line:
findroots.exe a b c d.
the findroots.exe is located in the Build>>Release folder

First, the program validates the entries, which are four entries and numeric.

the first step is to test the equation with different values that depend on the coefficient four, 
in this way it finds the first root. 
if it doesn't find anything, it will return the following:
{}

Then, the resulting equation is found with synthetic division so the equation has the form:
bx^2+cx+d.

finally using the quadratic formula, the program find the other two roots. it will return the following:
{r1,r2,r3}


If this part of the quadratic equation b^2-4ac is not greater or equal than 0 
this will indicate that these roots are not real, showing just the only root found.
it will return the following:
{r1}
