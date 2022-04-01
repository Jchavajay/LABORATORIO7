pin del sensor int = A0;
pin led int = 13 ;
int ledPin2 = 11 ;
valor del sensor int ;
porcentaje int ;

 configuracion vacia () {
  // pon tu código de configuración aquí, para ejecutar una vez:
  pinMode (ledPin, SALIDA);
  pinMode (ledPin2, SALIDA);
  pinMode (sensorPin, ENTRADA);
  De serie. comenzar ( 9600 );  
}

 bucle vacio () {
  // pon tu código principal aquí, para ejecutar repetidamente:
   sensorValue = lectura analogica (sensorPin);
   porcentaje = mapa (sensorValue, 0 , 1023 , 0 , 100 );
   De serie. imprimir (valor del sensor);
   De serie. imprimir ( "    =    " );
   De serie. imprimir (porcentaje);
   De serie. imprimir ( " % " );
   De serie. imprimirln ();
   si (porcentaje < 50 ){
       escritura digital (pin led, valor del sensor);
       escritura digital ( ledPin2 , BAJO);
   }
   demas 
   {
    escritura digital ( ledPin , BAJO);
    escritura digital ( ledPin2 , valor del sensor);
   }
   
}
