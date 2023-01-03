//C++ Loops
//Loops can execute a block of code as long as a specified condition is reached.
//Loops are handy because they save time, reduce errors, and they make code more readable.


/*
--While Loop--

The while loop loops through a block of code as long as a specified condition is true:

while (condition) {
  // code block to be executed
}

--do While Loop--
The Do/While Loop
The do/while loop is a variant of the while loop. This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.

do {
  // code block to be executed
}
while (condition);

*/


/*

--For Loop--

for (statement 1; statement 2; statement 3) {
  // code block to be executed
}

Statement 1 is executed (one time) before the execution of the code block.
Statement 2 defines the condition for executing the code block.
Statement 3 is executed (every time) after the code block has been executed.

for (int i = 0; i < 5; i++) {
  cout << i << "\n";
}


--The foreach Loop--
There is also a "for-each loop" (introduced in C++ version 11 (2011), which is used exclusively to loop through elements in an array (or other data sets):
for (type variableName : arrayName) {
  // code block to be executed
}


#include <iostream>
using namespace std;

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  for (int i : myNumbers) {
    cout << i << "\n";
  }
  return 0;
}



*/