void loop ()

int var = analogRead (pot) ;
int var2 = map (var, 0, 1023, 0, 255) ;
analogWrite (led, var2) ;
Serial.print ("Pot: ") ;
Serial.println (var) ;

Serial. print ( "Map: ") ;
Serial.println (var2) ;
Serial.println ("") ;
delay (100) ;
}
