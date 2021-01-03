void animation(int a){
  if(a == 1){
    display.clearDisplay();
    display.fillCircle(40, 35, 20, WHITE);
    display.display();
  }
  if(a == 2){
    display.clearDisplay();
    display.fillCircle(60, 35, 15, WHITE);
    display.display();
  }
  if(a == 3){
    display.clearDisplay();
    display.fillCircle(80, 35, 10, WHITE);
    display.display();
  }
  if(a == 4){
    display.clearDisplay();
    display.drawCircle(80, 35, 20, WHITE);
    display.display();
  }
  if(a == 5){
    display.clearDisplay();
    display.drawCircle(60, 35, 15, WHITE);
    display.display();
  }
  if(a == 6){
    display.clearDisplay();
    display.drawCircle(40, 35, 10, WHITE);
    display.display();
  }
}
