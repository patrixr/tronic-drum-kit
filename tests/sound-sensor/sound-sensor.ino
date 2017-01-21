/*
* Connect sound sensor to digital pin 2
* We will use the onboard lED to indicate sound detected and output to sr=erial monitor
*/

#define soundPin 2 // Use Pin 10 as our Input
int soundValue = HIGH; // This is where we record our Sound Measurement
int led = 13;

boolean bSound = false;

unsigned long lastSoundTime; // Record the time that we measured a sound

int soundTime = 300; // Number of milli seconds to keep the sound alarm high


void setup ()
  {
  Serial.begin(9600); 
  pinMode (soundPin, INPUT) ; // input from the Sound Detection Module
  pinMode(led, OUTPUT);
}

void loop ()
{
  //digitalWrite(13, HIGH);
  soundValue = digitalRead (soundPin) ; // read the sound alarm time
  //Serial.println(soundValue);
  if (soundValue == LOW) // If we hear a sound
  {

    lastSoundTime = millis(); // record the time of the sound alarm
    // We don't want to fill up monitor
    if (!bSound){
      Serial.println("##########    #########       #########");
      Serial.println("    #         #       #       #       #");
      Serial.println("    #         #       #       #       #");
      Serial.println("    #         #########       #########");
      Serial.println("    #         #       #       #");
      Serial.println("    #         #       #       #");
      Serial.println("    #         #       #       #");
      Serial.println("\n\n\n");
      digitalWrite(led, HIGH);
      bSound = true;
    }
  }
  else
  {
    if( (millis()-lastSoundTime) > soundTime && bSound){
      Serial.println("quiet");
      digitalWrite(led, LOW);
      bSound = false;
    }
  }
}
