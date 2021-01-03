# Projeto termômetro automático
Este projeto foi desenvolvido no Edital nº 06/2020 - PROJETO COVID-19, com o título de "Desenvolvimento de termômetro corporal sem contato e de baixo custo para ajudar na identificação de infectados pelo coronavírus.". Tem como objetivo auxiliar na medição da temperatura corporal de usuários em diversos estabelecimentos, ajudando assim na logistica do ambiente, por ser automático e servindo de indicativo de potenciais infectado sintomáticos pela identificação de febre.

# Funcionamento
O aspecto comportamental do projeto é bem simples, uma vez que o dispositivo encontre-se fixado a uma altura de aproximadamente de 1,5m do solo o usuário pode aproximar parte do corpo, preferencialmente a testa do sensor de temperatura, após a medição o dispositivo informa através do display e do modulo de áudio a temperatura corporal e se apresenta ou não febre. Na Figura 1 é possível ver seu design e alocação de alguns componentes.

Figura 01.
![corpo do projeto](https://user-images.githubusercontent.com/75312838/103484934-466d3d80-4dd1-11eb-8f72-037d712954b0.PNG)

# Hardware
Para o circuito do projeto foram utilizados os seguintes componentes:
    1x - ESP-32;
    1x - Sensor de temperatura (MLX90614);
    1x - Display OLED (128x64 0.96" I2C);
    1x - Sensor ultrssônico (HC-SR04);
    1x - DFPlayer mini;
    1x - Alto-falante de 4homs;
    1x - AMP de áudio (PAM8403);
    1x - PCI;
    1x - Chave ON/OFF;
    1x - Jack fêmea;
    1x - Fonte de 5V;
    Vários jumpers fêmea/fêmea.
    
O circuito esquemático foi utilizado o software EasyEDA, programa online e gratuito dedicado ao desenvolvimento e confecção de circuitos impressos. Na Figura 02 o circuito pode ser observado. 
