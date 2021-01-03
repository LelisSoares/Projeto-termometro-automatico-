void inicia_Tudo(){  
  // Inicialização do módulo DFPlayer                                  
  Serial.println(F("Iniciando módulo DFPlayer ..."));
  inicia_mp3();

  // Inicialização do módulo Display  
   if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
  delay(2000); // Pause for 2 seconds
  display.clearDisplay();

  // Inicialização do sensor de temperatura   
  mlx.begin();
}
