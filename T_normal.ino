void T_normal(){


  display.clearDisplay();
  display.setTextSize(2);
  display.setCursor(0,0);
  display.print("   Temp: ");
  display.drawLine(0,19,128,19,WHITE);
  display.drawLine(0,60,128,60,WHITE);
  display.setTextSize(3);
  display.setCursor(5,30);
  myDFPlayer.playFolder(2,3);
  display.print(media_temperatura);
  display.setTextSize(2);
  display.setCursor(98,26);
  display.print("o");
  display.setTextSize(3);
  display.setCursor(110,30);
  display.print("C");
  display.display();
  delay(5000);

  
  display.clearDisplay();
  display.setCursor(0,10);
  display.setTextSize(1.5);
  display.println("    Temperatura"); 
  display.setTextSize(2);
  display.println("  noraml"); 
  display.display();
  delay(1000);
}
