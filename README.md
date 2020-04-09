# Microsoft HoloLens
This was an assignment to create an application for the Microsoft HoloLens device that provides an augmented reality experience by utilizing the features made available by the Mixed Reality Toolkit. 

<h1>Overview</h1>
<p>
This project was a colloboration between six Trinity College Computer Science students to build and deploy an application on the Microsoft HoloLens. For this project we were in contact with four Microsoft Engineers who would act as our clients. 
</p>
</br>

![Alt text](/Images/Menu.PNG?raw=true "Menu Screen")

<p> 
When the user first launches the application they will see a menu screen which allows them to choose between three different puzzle games: Chess, Jenga, and Tower of Hanoi.
</p>

</br>

![Alt text](/Images/Chess.PNG?raw=true "Chess")

<p> 
The Chess game allows the user to play against a Chess AI opponent. The opponent is based on a Restful API interface connected to a database of over 5 billion chess positions taken from the games of top chess players.
</p>

</br>

![Alt text](/Images/Jenga.PNG?raw=true "Jenga")

<p>
Jenga allows the user to point and click on a block to remove it. The objective of the game is to remove as many blocks as possible without the tower toppling over.
</p>

</br>

![Alt text](/Images/ToH.PNG?raw=true "Tower of Hanoi")

<p>
The Tower of Hanoi game has varying levels of difficulty. The user can play with 3, 5 or 7 disks. The user can pinch and drag pieces between pegs.
</p>

</br>

<h1>Run in Emulator or Build for HoloLens device</h1>
<h2>Run in Emulator</h2>
<p>Clone the GitHub repository locally</p>
<p>Download and install Unity Hub at https://unity3d.com/get-unity/download</p>
<p>Launch Unity Hub and add the folder MicrosoftHoloLens as a new Project</p>
<p>Use Unity Hub to install Unity version 2019.2 and run the Project with that version</p>
<p>Press the play scene button in the Unity emulator</p>
<h2>Build for HoloLens device</h2>
<p>Open the Project in Unity (see above steps)</p>
<p>Go to File -> Build and Run -> Select the build destination folder -> click Build</p>
<p>Open generated .sln solution in visual studio and build for an x86 architecture</p>
