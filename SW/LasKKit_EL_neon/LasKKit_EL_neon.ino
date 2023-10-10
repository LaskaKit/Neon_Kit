// Testovací­ kód LasKKit NeonKit
// Email:obchod@laskarduino.cz
// Web:laskarduino.cz
/*/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/*/
/*
 *Kanály a piny
 *Kanál|Pin na desce LPKit|Pin na desce DEVKit  
 *CH1   12                  20
 *CH2   13                  46
 *CH3   14                  19
 *CH4   25                  17
 *CH5   26                  18
 *CH6   27                  8
*/
int Piny[] = {12,13,14,25,26,27}; //piny pro LPkit
//int Piny[] = {20,46,19,17,18,8}; //Piny pro DEVKit
void setup() {   
  // Nastavíme piny používané štítem jako výstup
   for (int x=0; x<=6; x++) {
     pinMode(PinyLPkit[x], OUTPUT); //projde kanály a nastaví je 
  }
}

void loop() {
  // Jdeme po všech kanálech, zapneme a vypneme každý
  for (int x=0; x<=6; x++) {
    digitalWrite(PinyLPkit[x], HIGH);  // zapnout kanál 
    delay(200);       // počkáme 20ms
    digitalWrite(PinyLPkit[x], LOW); // vypnout kanál
    delay(200);       // počkáme 20ms
  }
}
