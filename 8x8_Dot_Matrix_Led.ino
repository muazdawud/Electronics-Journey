////const int speakerPin = 9; // connect speaker to pin 9
////const int pitchPin = A0; // pot that will determine the frequency of the tone
////void setup()
////{
////  Serial.begin(9600);
////}
////void loop()
////{
//// int sensor0Reading = analogRead(pitchPin); // read input to set frequency
////
//// // map the analog readings to a meaningful range
//// int frequency = map(sensor0Reading, 0, 1023, 100,5000); //100Hz to 5kHz
//// int duration = 250; // how long the tone lasts
//// Serial.print("Frequency = ");
//// Serial.print(frequency);
//// Serial.print("\t|\t Sensor Value = ");
//// Serial.println(sensor0Reading);
//// tone(speakerPin, frequency, duration); // play the tone
//// delay(1000); //pause one second
////}
//
//const int speakerPin = 9; // connect speaker to pin 9
//char noteNames[] = {'C','D','E','F','G','a','b'};
//unsigned int frequencies[] = {262,294,330,349,392,440,494};
//const byte noteCount = sizeof(noteNames); // the number of notes (7 in this example)
////notes, a space represents a rest
//char score[] = "CCGGaaGFFEEDDC GGFFEEDGGFFEED CCGGaaGFFEEDDC ";
//const byte scoreLen = sizeof(score); // the number of notes in the score
//void setup()
//{
//}
//void loop()
//{
// for (int i = 0; i < scoreLen; i++)
// {
// int duration = 333; // each note lasts for a third of a second
// playNote(score[i], duration); // play the note
// }
// delay(4000); // wait four seconds before repeating the song
//}
//void playNote(char note, int duration)
//{
// // play the tone corresponding to the note name
// for (int i = 0; i < noteCount; i++)
// {
// // try and find a match for the noteName to get the index to the note
// if (noteNames[i] == note) // find a matching note name in the array
// tone(speakerPin, frequencies[i], duration); // play the note using the frequency
// }
// // if there is no match then the note is a rest, so just do the delay
// delay(duration);
//}
