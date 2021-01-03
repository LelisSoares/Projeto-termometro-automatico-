void T_febre(){
   display.clearDisplay();
  display.setTextSize(2);
  display.setCursor(0,0);
  display.print("   Temp: ");
  display.drawLine(0,19,128,19,WHITE);
  display.drawLine(0,60,128,60,WHITE);
  display.setTextSize(3);
  display.setCursor(5,30);
  display.print(media_temperatura);
  display.setTextSize(2);
  display.setCursor(98,26);
  display.print("o");
  display.setTextSize(3);
  display.setCursor(110,30);
  display.print("C");
  display.display();
  delay(2000);
  myDFPlayer.playFolder(2,4);
  delay(3000);
  for(int x = 0; x<=5; x++){
    display.clearDisplay();
    display.setCursor(0,12);
    display.setTextSize(3);
    display.println("       "); 
    display.display();
    delay(150);
    display.clearDisplay();
    display.setCursor(0,12);
    display.setTextSize(3);
    display.println(" Febre"); 
    display.display();
    delay(500);
  }
 // delay(1000);
}
