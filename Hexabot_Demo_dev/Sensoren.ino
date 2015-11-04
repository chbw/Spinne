// TODO: testen
// Überprüft ob die Akkus noch voll genug sind
// param voltage: Die Spannung in mV die Ausgewertet werden soll
void CheckBattery(int voltage)      
{
  if(voltage < LOW_VOLTAGE)
  {
    g_InControlState.fHexOn = false;  // Servos abschalten
 
    while(true) // Enlosschleife
    {
      //PhoenixLoop(); 
    } 
  }
}

// Liest die Temperatur vom I2C Sensor aus
// returns: Temperatur in zehntelGrad
float getTemp()  //liest die Temperatur vom Temperatursensor aus
{
    // http://bildr.org/2011/02/mlx90614-arduino/
    int dev = 0x5A<<1; //Die I2C Adresse vom Temperatursensor
    int data_low = 0;
    int data_high = 0;
    int pec = 0;
    
    i2c_start_wait(dev+I2C_WRITE);
    i2c_write(0x07);
    
    // read
    i2c_rep_start(dev+I2C_READ);
    data_low = i2c_readAck(); //Read 1 byte and then send ack
    data_high = i2c_readAck(); //Read 1 byte and then send ack
    pec = i2c_readNak();
    i2c_stop();
    
    //This converts high and low bytes together and processes temperature, MSB is a error bit and is ignored for temps
    //double tempFactor = 0.02; // 0.02 degrees per LSB (measurement resolution of the MLX90614)
    double tempFactor = 0.2; // geändert um zehntelgrad zu bekommen
    double tempData = 0x0000; // zero out the data
    //int frac; // data past the decimal point
    
    // This masks off the error bit of the high byte, then moves it left 8 bits and adds the low byte.
    tempData = (double)(((data_high & 0x007F) << 8) + data_low);
    tempData = (tempData * tempFactor)-0.01;
    
    //return tempData - 273.15;
    return tempData - 2731.5; // geändert um zehntelgrad zu bekommen
}
