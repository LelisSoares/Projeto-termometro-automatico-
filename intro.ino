void intro(){
  myDFPlayer.playFolder(1,1);
  display.drawBitmap(0, 0, IF, 128, 64, 1);
  display.display();
  delay(2500);
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.println(" -Projeto-"); 
  display.println("Termometro"); 
  display.println("    sem "); 
  display.println("  Contato"); 
  display.display();
  delay(300);
  display.clearDisplay();
  delay(1200);
}
