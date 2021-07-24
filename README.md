# Japanese_Robot

There are two arduino boards: one master and one slave. Slave board is used to receive signals in order to make the robot move.
Presentation folder is for master arduino board placed on the head that controls:
1) temperature and sonar sensor
2) sd card and speaker

It sends signals to the other arduino slave board on the body that controls the two motors. 
The code for the second arduino board is in the motorReceiver folder.
# Voto: 25
