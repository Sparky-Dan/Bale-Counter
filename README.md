# Bale-Counter
Bale and stroke counter using an Arduino
The basis of this project is to create a bale and stroke counter for a small square baler.
using 2 proximity sensors to sense on the stroke arm and on the bale arm to determine how many strokes are in the bale and how many bales have been done overall

The initial code works as the stroke counter senses it counts until the bale counter has been activated at that time the LCD updates with how many strokes were just in that bale and it counts how many bales have been made in total.
The stroke count on the LCD gets reset to show the bale thats just been made and doesn't update until the next bale is completed
I have one working and hasn't skipped a beat since its installation but I have second installed that is having issues with the LCD display printing random symbols and nonsense at random times once this comes up the LCD doesn't respond or refresh as per the code.
