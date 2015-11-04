// Initialisiert ein ringbuffer struct
// param BufferSize: Die Größe des Ringpuffers
// param buffer    : Das ringbuffer struct das initialisiert werden soll
// param dataArray : Das Array in dem die Daten gespeichert werden sollen
void RingBufferInit(int BufferSize, struct ringbuffer * buffer, int *dataArray)
{
  buffer->Current = 0;
  buffer->Size = BufferSize;
  buffer->data = dataArray;
}

// Fügt dem Ringpuffer ein neues Element hinzu, überschreibt das Älteste
// param data  : Datensatz der hinzugefügt werden soll
// param buffer: Ringpuffer in den geschrieben werden soll
void RingBufferAdd(int data, struct ringbuffer *buffer)
{
  if(++buffer->Current >= buffer->Size)
  {
    buffer->Current = 0;
  }
  buffer->data[buffer->Current] = data;
}

// Berechnet den Mittelwert der Datensätze im Ringpuffer
// param buffer: Ringpuffer über den der Mittelwert gebildet werden soll
// returns     : Mittelwert über den Ringpuffer
int RingBufferGetAvg(struct ringbuffer *buffer)
{
  long avg = 0;
  for(int i = 0; i < buffer->Size; i++)
  {
    avg += buffer->data[i];
  }
  return avg/buffer->Size;
}
