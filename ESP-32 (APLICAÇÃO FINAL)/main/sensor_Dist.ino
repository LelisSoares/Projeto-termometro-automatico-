int sensor_Dist(int medir){  // medir = 0 (mediçãosem display) - medir = 1 (com display)  
  ultrasonic.measure();
  distancia = ultrasonic.get_cm();
  
  if(medir == 0){
    return distancia;
  }
  else{
    display.clearDisplay();
    display.setTextSize(2);
    display.setCursor(0,0);
    display.print("   Dist: ");
    display.drawLine(0,19,128,19,WHITE);
    display.drawLine(0,60,128,60,WHITE);
    display.setTextSize(3);
    display.setCursor(5,30);
    display.print(distancia);
    display.setTextSize(3);
    display.setCursor(90,30);
    display.print("cm");
    display.display();
    delay(100);
    return distancia;
  }
}
