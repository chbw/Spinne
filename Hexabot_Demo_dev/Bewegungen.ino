// Die folgenden Funktionen lassen den Roboter in eine bestimmte Richtung gehen
// Jede Funktion unterbricht die vorherige Bewegung
void GehenVorwaerts()
{
  g_InControlState.TravelLength.z = -30;
  g_InControlState.TravelLength.y = 0;
  g_InControlState.TravelLength.x = 0;
}
void GehenRueckwaerts()
{
  g_InControlState.TravelLength.x = 0;
  g_InControlState.TravelLength.z = 30;
  g_InControlState.TravelLength.y = 0;
}
void DrehenLinks()
{
  g_InControlState.TravelLength.x = 0;
  g_InControlState.TravelLength.z = 0;
  g_InControlState.TravelLength.y = 7;
}
void DrehenRechts()
{
  g_InControlState.TravelLength.x = 0;
  g_InControlState.TravelLength.z = 0;
  g_InControlState.TravelLength.y = -7;
}
void GehenRechts()
{
  g_InControlState.TravelLength.x = -30;//-20;
  g_InControlState.TravelLength.z = 0;
  g_InControlState.TravelLength.y = 0;
}
void GehenLinks()
{
  g_InControlState.TravelLength.x = 20;
  g_InControlState.TravelLength.z = 0;
  g_InControlState.TravelLength.y = 0;
}

// Lässt den Roboter stehen bleiben und alle Beine auf den Boden setzen
void Stop()
{
  g_InControlState.TravelLength.x = 0;
  g_InControlState.TravelLength.y = 0;
  g_InControlState.TravelLength.z = 0;
  
  //Noch ein paar mal aufrufen, das alle Beine am Boden sind
  for(int i = 0; i < 18; i++)
  {
    PhoenixLoop();
  }
}

// Lässt den Roboter zum Boden und wieder in die Höhe gehen
void Bounce()
{
  Stop();
  g_InControlState.BodyPos.y = 20;
  AdjustLegPositionsToBodyHeight();
  Wait(500);
  g_InControlState.BodyPos.y = 60;
  AdjustLegPositionsToBodyHeight();
  Wait(500); 
}

// Ändert die Art zu gehen
// param GaitNr: Wählt die Gangart aus. Gültige Werte: 0 - 5
void SetGait(int GaitNr)
{
  g_InControlState.GaitType = GaitNr;
  GaitSelect();
}

// Ändert die Höhe der Basis des Roboters
// param h: Höhe über dem Boden in mm
void SetHoehe(int h)      // 0 = Roboter liegt am Boden
{
  g_InControlState.BodyPos.y = h;
  AdjustLegPositionsToBodyHeight();
}

// Ein Beispiel wie eigene Servopositionen implementiert werden können
void SpecialMove()    // "Fliag auf die Pappm"
{
  // Servo: Mitte = 1500 Bereich(500-2500) mechanische Limits beachten!
  
  Serial.print("#5P1500#21P1500");  // Coxa Servos einstellen
  Serial.print("#4P1500#20P1500");  // Femur
  Serial.print("#8P1000#24P2000");  // Tibia
  Serial.print("T2000\r");           // Zeit die die Bewegung dauern soll und Abschluss des Befehls
}
