HOW TO LAUNCH THE GAME
To launch the game you must edit the attached batch file using notepad, this can be done by right clicking the file and selecting edit, 
the batch file should contain the line shown below;



start "i1" "C:\Program Files\Epic Games\UE_4.26\Engine\Binaries\Win64\UE4Editor.exe" "F:\MbR-eSports-Multiplayer-main (2)\MbR-eSports-Multiplayer-main\MbR_eSports\MbR_eSports.uproject" -game -ResX=960 -ResY=540 -WinX=0 -WinY=20 –log

start "i2" "C:\Program Files\Epic Games\UE_4.26\Engine\Binaries\Win64\UE4Editor.exe" "F:\MbR-eSports-Multiplayer-main (2)\MbR-eSports-Multiplayer-main\MbR_eSports\MbR_eSports.uproject" -game -ResX=960 -ResY=540 -WinX=0 -WinY=20 –log


The first file address must be updated to match the location of the 4.26 unreal editor on your local pc
the second file address must be updated to match the location of the project file on your local pc
with the file locations updated running the batch file should launch the game correctly

HOW TO PLAY THE GAME