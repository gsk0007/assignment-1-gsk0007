[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-f059dc9a6f8d3a56e377f745f24479a46679e63a5d9fe6f495e02850cd0d8118.svg)](https://classroom.github.com/online_ide?assignment_repo_id=5464894&assignment_repo_type=AssignmentRepo)
# assignment_1
## CHAPTER 1
### 1. ARITHMETIC OPERTIONS AND EXPRESSIONS (5 points)
Write a complete program that declares an integer variable, reads a value from the keyboard into that variable, and writes to standard output the square of the variable's value.
Besides the number, nothing else should be written to standard output.

### 2. CONSOLE INPUT/OUTPUT (5 points)
Write a single statement that will print the message "first is " followed by the value of 
first, and then a space, followed by "second = ", followed by the value of second. Print 
everything on one line and go to a new line after printing. Assume that first has already 
been declared as a double and that second has been declared as an int. Assume also 
that the variables have already been given values.

### 3. FREE FALL PROGRAM (10 points)
Write a program that allows the user to enter a time in seconds and then outputs how 
far an object would drop if it is in freefall for that length of time. Assume no friction or 
resistance from air and a constant acceleration of 32 feet per second due to gravity.
Use the relation: distance = one half times acceleration * the square of length of time.
INPUT and PROMPTS. The program uses this prompt "Enter a time in seconds." for 
the length of time it reads in. The length of time is expected to be an integer (i.e. no 
decimals). Do not print the number out after it has been read in.
OUTPUT. The output is "An object in freefall for x seconds will fall y feet." where x is 
the value the user typed in and y is the falling distance computed by your program.

## CHAPTER 2
### 4. BUOYANCY (15 points)
Buoyancy is the ability of an object to float. Archimede's Principle states that the 
buoyant force is equal to the weight of the fluid that is displaced by the 
submerged object. The buoyant force can be computed by:
buoyant force = (object volume) times (specific gravity of the fluid)
If the buoyant force is greater than or equal to the weight of the object then it will float, 
otherwise it will sink.
Write a program that inputs the weight (in pounds) and radius (in feet) of a sphere 
and outputs whether the sphere will sink or float in water. Use 62.4 lb/cubic foot as the 
specific weight of water. The volume of a sphere is computed by (4/3)π times the radius 
cubed.
INPUT and PROMPTS. The program uses this prompt ""Input weight of the sphere in 
pounds." for the first number it reads in, the weight of the sphere. The program uses this 
prompt "Input radius of the sphere in feet." for the second number it reads in, the radius 
of the sphere. Do not print out these numbers as they are read in
OUTPUT. The program either prints out "The sphere will float in water." or "The sphere 
will sink in water.".
### 5. THE SAME TEMPERATURE (15 points)
Write a program that finds the temperature, as an integer, that is the same in both 
Celsius and Fahrenheit. The formula to convert from Celsius to Fahrenheit is: 
Fahrenheit = 32 + (nine fifths) times Celsius.
Your program should create two integer variables for the temperature in Celsius and 
Fahrenheit. Initialize the temperature to 100 degrees Celsius. In a loop, decrement the 
Celsius value and compute the corresponding temperature in Fahrenheit until the 
two values are the same.