const int loudspeaker_pin = 13;
const int base_time = 16 * 100;


void setup() {
  // put your setup code here, to run once:
  pinMode (loudspeaker_pin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  tone(loudspeaker_pin, 330);
  delay(base_time / 2);
  tone(loudspeaker_pin, 294);
  delay(base_time / 2);
  tone(loudspeaker_pin, 330);
  delay(base_time / 2);
  tone(loudspeaker_pin, 349);
  delay(base_time / 2);
  tone(loudspeaker_pin, 392);
  delay(base_time / 2);
  tone(loudspeaker_pin, 330);
  delay(base_time / 2);
  tone(loudspeaker_pin, 294);
  delay(base_time / 1);
  tone(loudspeaker_pin, 330);
  delay(base_time / 2);
  tone(loudspeaker_pin, 392);
  delay(base_time / 2);
  tone(loudspeaker_pin, 440);
  delay(base_time / 2);
  tone(loudspeaker_pin, 392);
  delay(base_time / 4);
  tone(loudspeaker_pin, 440);
  delay(base_time / 4);
  tone(loudspeaker_pin, 587);
  delay(base_time / 2);
  tone(loudspeaker_pin, 494);
  delay(base_time / 2);
  tone(loudspeaker_pin, 440);
  delay(base_time / 2);
  tone(loudspeaker_pin, 392);
  delay(base_time / 2);
  tone(loudspeaker_pin, 330);
  delay(base_time / 2);
  tone(loudspeaker_pin, 392);
  delay(base_time / 2);
  tone(loudspeaker_pin, 440);
  delay(base_time / 1);
  tone(loudspeaker_pin, 587);
  delay(base_time / 2);
  tone(loudspeaker_pin, 523);
  delay(base_time / 2);
  tone(loudspeaker_pin, 587);
  delay(base_time / 1);
  tone(loudspeaker_pin, 330);
  delay(base_time / 2);
  tone(loudspeaker_pin, 392);
  delay(base_time / 2);
  tone(loudspeaker_pin, 440);
  delay(base_time / 2);
  tone(loudspeaker_pin, 392);
  delay(base_time / 2);
  tone(loudspeaker_pin, 330);
  delay(base_time * 3 / 2 / 2);
  tone(loudspeaker_pin, 392);
  delay(base_time / 4);
  tone(loudspeaker_pin, 294);
  delay(base_time / 1);
  tone(loudspeaker_pin, 440);
  delay(base_time / 2);
  tone(loudspeaker_pin, 523);
  delay(base_time / 2);
  tone(loudspeaker_pin, 587);
  delay(base_time / 1);
  tone(loudspeaker_pin, 523);
  delay(base_time / 2);
  tone(loudspeaker_pin, 587);
  delay(base_time / 2);
  tone(loudspeaker_pin, 440);
  delay(base_time / 2);
  tone(loudspeaker_pin, 392);
  delay(base_time / 2);
  tone(loudspeaker_pin, 440);
  delay(base_time / 2);
  tone(loudspeaker_pin, 392);
  delay(base_time / 4);
  tone(loudspeaker_pin, 330);
  delay(base_time / 4);
  tone(loudspeaker_pin, 294);
  delay(base_time / 1);
  noTone(loudspeaker_pin);
  delay(base_time / 4);
  noTone(loudspeaker_pin);
  delay(base_time / 4);



}
