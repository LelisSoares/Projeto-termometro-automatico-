void T_ola(){
  display.clearDisplay();
  display.setCursor(0,12);
  display.println("   Ola!"); 
  display.display();
  myDFPlayer.playFolder(2,5);
  delay(1500);
}
