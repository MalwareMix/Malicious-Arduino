#include <Keyboard.h>
 
void setup() {
  // put your setup code here, to run once
  Keyboard.begin();
  delay(1000);
 
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(500);
  Keyboard.releaseAll();
  Keyboard.end();
  delay(500);

  Keyboard.print("notepad");
  delay(500);
  Keyboard.press(KEY_RETURN);
  delay(500);
  Keyboard.releaseAll();
  Keyboard.end();

  Keyboard.print("YOU HAVE BEEN HACKED! ALL OF YOUR DRIVES WILL BE DELETED IN 1 MINUTE SO GET YOUR SHIT TOGEATHER AND SAY GOODBYE!");
  delay(500);
  Keyboard.press(KEY_RETURN);
  delay(500);
  Keyboard.releaseAll();
  Keyboard.end();
  
  Keyboard.print("WOW.....");
  delay(500);
  Keyboard.press(KEY_RETURN);
  delay(500);
  Keyboard.releaseAll();
  Keyboard.end();
  
  Keyboard.print("YOU REALLY HAVE NOTHING TO SAY GOOBYE TO DO YOU?");
  delay(500);
  Keyboard.press(KEY_RETURN);
  delay(500);
  Keyboard.releaseAll();
  Keyboard.end();
  
  Keyboard.print("WELL YOU CAN SAY GOOD BYE TO ME.....");
  delay(500);
  Keyboard.press(KEY_RETURN);
  delay(500);
  Keyboard.releaseAll();
  Keyboard.end();
  
  Keyboard.print("WELL I GUESS ITS PERFECT TIMING TO DO THIS ISNT IT?");
  delay(500);
  Keyboard.releaseAll();
  Keyboard.end();

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(500);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  Keyboard.end();

  Keyboard.print("chrome https://www.youtube.com/watch?v=dQw4w9WgXcQ");
  delay(500);
  Keyboard.press(KEY_RETURN);
  delay(500);
  Keyboard.releaseAll();
  Keyboard.end();

}

  void loop () {
    // script made by MalwareMix No Copyright or your a square!!!!

}
  

