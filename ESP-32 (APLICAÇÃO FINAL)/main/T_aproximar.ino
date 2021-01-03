void T_aproximar(){
  display.clearDisplay();
  display.setTextSize(2);
  display.setCursor(0,12);
  display.println(" Aproximar"); 
  display.display();
  myDFPlayer.playFolder(2,2);
  delay(3500);
}
