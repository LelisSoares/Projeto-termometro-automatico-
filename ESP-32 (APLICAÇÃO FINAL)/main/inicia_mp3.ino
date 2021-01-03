void inicia_mp3(){
  delay(1000);
  mySoftwareSerial.begin(9600, SERIAL_8N1, 16, 17);  // velocidade, tipo de comunicação, pinos RX, TX
  

   if (!myDFPlayer.begin(mySoftwareSerial))
 {  // Verifica o funcionamento do módulo // Se não for capaz de identificar o módulo                                                                 
    Serial.println(myDFPlayer.readType(), HEX);
    Serial.println(F("Erro ao iniciar, verifique:"));
    Serial.println(F("1. A conexao do modulo."));
    Serial.println(F("2. Se o SD card foi inserido corretamente."));
    delay(1000);
    //ESP.restart();
  }
  Serial.println();
  Serial.println(F("DFPlayer Mini online.")); // Ao identificar o funcionamento do módulo

  myDFPlayer.setTimeOut(500); //Ajusta o tempo de comunicação para 500ms
 
  //----Ajuste do Volume----
  myDFPlayer.volume(30);  //Volume de 0 á 30.
  myDFPlayer.volumeUp();  //Volume Up
  
  //----Ajusta o Equalizador----
  myDFPlayer.EQ(0); //0 = Normal, 1 = Pop, 2 = Rock, 3 = Jazz, 4 = Classic, 5 = Bass
     
  
  //----Define o dispositivo----
  myDFPlayer.outputDevice(DFPLAYER_DEVICE_SD);

  //----Quantidade de Arquivos----
  Serial.print(F("Numero de arquivos no cartao SD: "));
  Serial.println(myDFPlayer.readFileCounts(DFPLAYER_DEVICE_SD));
  Serial.println(F("Loop iniciado"));
}
