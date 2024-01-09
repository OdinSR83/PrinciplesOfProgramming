/****************************************************************************************************************

  This is the second exercise.
  To see the output that this program produces, click on the "Run" green button or press F9.

*****************************************************************************************************************/

#include <stdio.h>

int main()
{
  // This is my greeting:
  printf("Hello there! My name is Odín.\n");
  // It consists in just one statement, an order for the terminal to display the following line:
  // Hello there! My mane is Odín.
  // In this statement, I am using the C function "printf" to tell the terminal that is has to display something.
  // If you change my name for yours, you can use it to introduce yourself. But be very careful.
  // Change only your name. If you delete something that you shouldn't, you can end up with something like:
  printf("Hello there! My mane is John.\n)
  // The previous statement if not well written.
  // If you write something like this in the online editor, it won't work.
  // The next statament is also wrong:
  printf("Hello there! My mane is John.\n;

  // PART 1 
  // Try to introduce yourself using the online C compiler in https://www.onlinegdb.com/online_c_compiler
  
  // PART 2
  // Did it worked? Great! Now say more thing about you than just your name. For instance,
  
  /* 
  My name is Odín.
  I was born in Segovia.
  I am 40 years old.
  I speak Spanish, English and a very poor German.
  I like 3D printing.
  */

  // Put your name and at least 2 more things. They don't need to be versions of my intruduction, you can write
  // whatever you want.
  
  // This would be the END of the mandatory part of the exercise.




  // But...



  // ...if you want to go a little further...

  // Did you notice the "\n" in my first statament?
  // Don't scroll up, I will copy it again:
  printf("Hello there! My mane is Odín.\n");
  // The terminal does NOT print those two caracters.
  // Insted, when it finds "\n", the terminal will end abruptly the line
  // and start a new one.
  // If you remove those two characters, all the text will come up in just one long line:

  /*
  My name is Odín.I was born in Segovia.I am 40 years old.I speak Spanish, English and a very poor German.I like 3D printing.
  */
  
  // Do you remember that other statement used in Ex.2.1?
  getchar();
  // You can make a version of this second exercise that does not print all the text when it runs.
  // Insted, you can use "getchar" statements between "printf" stataments to stop the program until the used hits enter.
  // Do you want to try?
  // Other thing that you can try is to print just the "break line" characters:
  printf("\n");
  // What happends? And if you use"\n\n\n" instead of "\n"?
}
