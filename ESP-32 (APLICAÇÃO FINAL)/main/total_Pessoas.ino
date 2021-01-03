void total_Pessoas(int quant){  // quant = 0 (subtrai) e quant = 1 (soma)
  

  
  
  if (q > 0 && quant == 0){
    q--;
  }

  if(q < TOTAL_PESSOAS){
    lotado = false; 
  }
 
  if (quant == 1)q++; 
  if(q == TOTAL_PESSOAS){
    lotado = true; 
  }
  
  display.clearDisplay();
  display.setTextSize(2);
  display.setCursor(0,0);
  display.print("Q pessoas:");
  display.drawLine(0,19,128,19,WHITE);
  display.drawLine(0,60,128,60,WHITE);
  display.setTextSize(3);
  display.setCursor(22,30);
  display.print("  ");
  display.print(q);
  display.display();
  delay(1000);
  //display.startscrollright(0x00, 0x00);
  
}
