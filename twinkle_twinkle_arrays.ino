/*
  Twinkle Twinkle with array
  plays pattern of first two phrases of "twinkle twinkle little star" on 6 LEDs
  modified to be more efficient using arrays
*/

//define constant variables that correspond first 6 notes in C scale to arduino pins.

const int C=10;
const int D=9;
const int E=6;
const int F=5;
const int G=3;
const int A=1;

// define two separate arrays, one for each phrase (?) of "twinkle twinkle little star" that the program plays (which are just the first two)
char notesOne [] = {C, G, A};
char notesTwo [] = {F, E, D};

// define an integer to cycle through the array and play each note in the phrase in sequence
int note = 0;


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize variable pins as outputs.
  pinMode(1, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

for (note=0;note<3;note++) {
   
  digitalWrite(notesOne[note], HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(400);                       // wait for .4 seconds (quarter note)
  digitalWrite(notesOne[note], LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for .1 seconds (pause between notes)
  digitalWrite(notesOne[note], HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(400);                       // wait for .4 seconds (quarter note)
  digitalWrite(notesOne[note], LOW);   // turn the LED off by making the voltage LOW
  delay(100);                       // wait for .1 seconds (pause between notes) 

}

// this part of the code does not repeat within the phrase, so it does not refer to an array.  


  digitalWrite(G, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(900);                       // wait for .9 seconds (half note)
  digitalWrite(G, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for .1 seconds (pause between notes)

/*I think there is probably a way to create an array that cycles through a set of different delay times as well, 
in order to make the code more efficient?  But I haven't figured it out yet.  I think I would need to include these 
pieces of code:

int delayTime [] = {400, 100, 400, 100};
int delay = 0;
for (delay=0;delay<4;delay++)

...but I don't know how to position them within the structure of the "for" loop to get them to work.

the code below repeats what is above, but calls up the array that describes the second phrase of the music.
*/

for (note=0;note<3;note++) {

  digitalWrite(notesTwo[note], HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(400);                       // wait for .4 seconds (quarter note)
  digitalWrite(notesTwo[note], LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for .1 seconds (pause between notes)
  digitalWrite(notesTwo[note], HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(400);                       // wait for .4 seconds (quarter note)
  digitalWrite(notesTwo[note], LOW);    //turn the LED off by making the voltage LOW
  delay(100);                       // wait for .1 seconds (pause between notes) 

}

  digitalWrite(C, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(900);                       // wait for .9 seconds (half note)
  digitalWrite(C, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for .1 seconds (pause between notes)
}
