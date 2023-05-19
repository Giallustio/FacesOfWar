0 fadeSound 0;
titleCut ["", "BLACK IN", 5];
[] spawn {sleep 0.001; showCinemaBorder FALSE};
_camera = "Camera" camCreate [93247.84,23724.95,-30329.547];
_camera cameraEffect ["Internal", "Back"];

playMusic "fow_main_theme";
addMusicEventHandler ["MusicStop", {[] spawn {sleep 5; playMusic "fow_main_theme"}}];