float sensor_Temp(){
  display.clearDisplay();
  display.setTextSize(2);
  display.setCursor(0,0);
  display.print("   Temp: ");
  display.drawLine(0,19,128,19,WHITE);
  display.drawLine(0,60,128,60,WHITE);
  display.setTextSize(3);
  display.setCursor(5,30);
  display.print(String(mlx.readObjectTempC()+1));
  display.setTextSize(2);
  display.setCursor(98,26);
  display.print("o");
  display.setTextSize(3);
  display.setCursor(110,30);
  display.print("C");
  display.display();
  delay(100);
  return mlx.readObjectTempC()+1;
}
