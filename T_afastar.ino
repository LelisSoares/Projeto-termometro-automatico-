/*  
  001 - afaste-se
  002 - aproxime-se
  003 - normal
  004 - febre
  005 - ola
  006 - ajuda medica
  007 - ambiente lotado
  008 - prosseguir
*/
void T_afastar(){
  display.clearDisplay();
  display.setCursor(0,12);
  display.println("  Afastar"); 
  display.display();
  myDFPlayer.playFolder(2,1);
  delay(3500);
}
