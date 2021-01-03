void T_ajuda_medica(){
  myDFPlayer.playFolder(2,6);
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
    display.println(" Hospital"); 
    display.display();
    delay(500);
  }
  delay(0);
}
