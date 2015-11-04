// Struct für einen Ringpuffer
struct ringbuffer
{
  int Size;      // Größe des Ringpuffers
  int Current;   // index des zuletzt geschriebenen Elements
  int *data;     // Pointer auf das Array das die Daten enthält
};
