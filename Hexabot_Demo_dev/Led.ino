// Zuordnung der der LEDpins zu einer LED
const uint8_t led[6] = {
  7,
  6,
  5,
  2,
  3,
  4};

// Setzt die pins an denen LEDs angeschlossen sind auf OUTPUT
void LedInit()
{
  for(int i = 0; i < 6; i++)
  {
    pinMode(led[i],OUTPUT);
  }
}

// Nächsten Schritt einer LED Animation ausführen
// param MusterNr: Die LED Animation die ausgeführt werden soll
void LedNext(int MusterNr)
{
  static uint8_t state = 0;  // Variable die von LED Animationen benutzt werden kann
                             // Überlauf muss von jeder Animation extra behandelt werden
  static int prevMusterNr = 0;
  state++;
  
  switch(MusterNr)
  {
    case -1: break; // Nichts tun
    case 0:         // Alle aus
    Alle(LOW);
    break;
    case 1:        // Alle ein
    Alle(HIGH);
    break;
    case 2:        // Lauflicht
    {
      if(state > 5)
      {
        state = 0;
        digitalWrite(led[5],LOW);
        digitalWrite(led[0],HIGH);
      }
      else
      {
        digitalWrite(led[state - 1], LOW);
        digitalWrite(led[state], HIGH);
      }
    } break;
    case 3:        // Lauflicht viertel Geschwindigkeit
    {
      if(state%4 == 0)
      {
        static uint8_t intState = 0;
        intState++;
      if(intState > 5)
      {
        intState = 0;
        digitalWrite(led[5],LOW);
        digitalWrite(led[0],HIGH);
      }
      else
      {
        digitalWrite(led[intState - 1], LOW);
        digitalWrite(led[intState], HIGH);
      }
      }
    } break; 
  }
}

void Alle(int Zustand)
{
  for(int i = 0; i < 6; i++)
  {
    digitalWrite(led[i], Zustand);
  }
}
