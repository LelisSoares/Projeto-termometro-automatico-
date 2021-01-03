void T_ambiente_lotado(){
  myDFPlayer.playFolder(2,7);
  for(int x = 0; x<=5; x++){
    display.clearDisplay();
    display.setCursor(0,12);
    display.setTextSize(3);
    display.println("       "); 
    display.display();
    delay(150);
    display.clearDisplay();
    display.setCursor(0,12);
    display.setTextSize(2);
    display.println("  Lotado!"); 
    display.display();
    delay(500);
  }
  delay(1000);
}
