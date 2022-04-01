importar  pyfirmata
 tiempo de importación

tablero  =  pyfirmata . Arduino ( 'COM4' )
it  =  pyfirmata . útil _ Iterador ( tablero )
eso _ empezar ()

analog_input  =  tablero . get_pin ( 'a:0:i' )
led  =  placa . get_pin ( 'd:13:o' )
led2  =  tablero . get_pin ( 'd:11:o' )
mientras que  es cierto :
    valor_analógico  =  entrada_analógica . leer ()
    imprimir ( valor_analógico )
    conducido _ escribir ( 1 )
    led2 . escribir ( 1 )
    si  analog_value  no es  Ninguno : 
        si  valor_analógico  >  0.80 :
            conducido _ escribir ( 1 )
            tiempo _ dormir ( 0.30 )
            led2 . escribir ( 0 )
            tiempo _ dormir ( 0.30 )
            conducido _ escribir ( 0 )
            tiempo _ dormir ( 0.30 )
            led2 . escribir ( 1 )
            tiempo _ dormir ( 0.30 )
    más :
        tiempo _ dormir ( 1.0 )